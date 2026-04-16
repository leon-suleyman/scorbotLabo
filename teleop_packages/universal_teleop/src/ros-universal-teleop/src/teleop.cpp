#include <std_msgs/msg/empty.hpp>
#include <iostream>
#include "teleop.h"

using namespace std;
using std::placeholders::_1;
namespace teleop = universal_teleop;

teleop::Teleop::Teleop(std::shared_ptr<rclcpp::Node> node)
{
  /* variables preliminares*/

  n = node;
  key_override_enabled = false;
  joy_override_enabled = false;

  /* load mappings */

  joy_axes = { {"pitch", 1}, {"roll", 0}, {"yaw", 3}, {"vertical",2} };
  //si existe el prefijo para los parametros, los busca. si no, deja la variable como está
  n->get_parameters("joy_axes", joy_axes); 
  for (auto& j : joy_axes) joy_axis_map[j.second] = j.first;

  map<string, int> joy_buttons = { {"override", 4}, {"start", 2}, {"stop", 1}, {"takeoff", 10}, {"land", 11} };
  n->get_parameters("joy_buttons", joy_buttons);
  for (auto& j : joy_buttons) joy_button_map[j.second] = j.first;

  joy_deadzones = { { "pitch", 0.000001f }, { "roll", 0.000001f }, { "yaw", 0.000001f }, { "vertical", 0.000001f } };
  n->get_parameters("joy_deadzones", joy_deadzones);
  for (auto& k: joy_deadzones) cout << k.first << " " << k.second << endl;

  std::map<std::string, int> keys = { {"override", 32}, {"start", 113}, {"stop", 97}, {"takeoff", 121}, {"land", 104} };;
  n->get_parameters("keys", keys);
  for (auto& k : keys) key_map[k.second] = k.first;

  std::map<std::string, int> key_axes = { { "pitch+", 273 }, { "pitch-", 274 }, { "yaw+", 276 }, { "yaw-", 275 } };
  n->get_parameters("key_axes", key_axes);
  for (auto& k : key_axes) key_axes_map[k.second] = k.first;
  key_axes_state = { { "pitch", 0 }, { "yaw", 0 } };

  axis_scales = { { "pitch", 1.0f }, { "roll", 1.0f }, { "yaw", 1.0f }, { "vertical", 1.0f } };
  n->get_parameters("scales", axis_scales);
  
  n->get_parameter_or("send_velocity", send_velocity, true);

  /* subscribe to input sources */
  joy_sub = n->create_subscription<sensor_msgs::msg::Joy>("/joy", 1, std::bind(&Teleop::joystick_event, this, _1));
  keyup_sub = n->create_subscription<keyboard_msgs::msg::Key>("/keyboard/keyup", 1, std::bind(&Teleop::keyboard_up_event, this, _1));
  keydown_sub = n->create_subscription<keyboard_msgs::msg::Key>("/keyboard/keydown", 1, std::bind(&Teleop::keyboard_down_event, this, _1));

  /* publish events and control commands */  
  pub_vel = n->create_publisher<geometry_msgs::msg::Twist>("/robot/cmd_vel", 5);
  
  pub_event = n->create_publisher<universal_teleop_msgs::msg::Event>("events", 5);
  pub_control = n->create_publisher<universal_teleop_msgs::msg::Control>("controls", 1);
}

void teleop::Teleop::process_event(const universal_teleop_msgs::msg::Event& e)
{
  RCLCPP_DEBUG_STREAM( n->get_logger(), "event: " << e.event << " state: " << e.state);
  if (e.event == "override") {
    if (e.state == 0) {
      // when releasing override, stop robot 
      geometry_msgs::msg::Twist vel;
      vel.linear.x = vel.linear.y = vel.linear.z = 0;
      vel.angular.x = vel.angular.y = 1; // non-zero to avoid hovering when zero-ing controls
      vel.angular.z = 0;
      pub_vel->publish(vel);
    }
  }
  /*else {
    if ((joy_override_enabled || key_override_enabled) && e.state) {
      if (e.event == "takeoff") pub_takeoff->publish(std_msgs::Empty());
      else if (e.event == "land") pub_land->publish(std_msgs::Empty());
      else if (e.event == "emergency") pub_emergency->publish(std_msgs::Empty());
    }
  }*/
  pub_event->publish(e);
}

void teleop::Teleop::joystick_event(const sensor_msgs::msg::Joy& joy)
{
  if (last_joy_msg.axes.empty()) {
    last_joy_msg = joy;
    for (auto& b : last_joy_msg.buttons) b = 0;
  }

  // process buttons
  //we use b+1 to match our input map with the numbering on our foxconn joycon
  for (uint32_t b = 0; b < joy.buttons.size(); b++) {
    if (joy.buttons[b] != last_joy_msg.buttons[b]) {
      universal_teleop_msgs::msg::Event e;
      if (joy_button_map.find(b+1) == joy_button_map.end()) {
        e.event = "unknown";
      }else{
        e.event = joy_button_map[b+1];
      }
      e.state = joy.buttons[b];
      if (e.event == "override") joy_override_enabled = e.state;
      process_event(e);
    }
  }

  // process axis
  for (uint32_t a = 0; a < joy.axes.size(); a++) {
    if (joy.axes[a] != last_joy_msg.axes[a]) {
      universal_teleop_msgs::msg::Control c;
      if (joy_axis_map.find(a) == joy_axis_map.end()) c.control = "unknown";
      else c.control = joy_axis_map[a];

      if (c.control != "unknown" && std::abs(joy.axes[a]) < joy_deadzones[joy_axis_map[a]])
        c.value = 0;
      else {
        c.value = joy.axes[a];
      }

      pub_control->publish(c);
    }
  }
  
  last_joy_msg = joy;
}

void teleop::Teleop::keyboard_up_event(const keyboard_msgs::msg::Key& key)
{
  RCLCPP_DEBUG_STREAM( n->get_logger(), "keyup: " << key.code);
  if (key_axes_map.find(key.code) != key_axes_map.end()) {
    std::string& cmd = key_axes_map[key.code];
    key_axes_state[cmd.substr(0, cmd.size() - 1)] = 0;
  }
  else {
    universal_teleop_msgs::msg::Event e;
    if (key_map.find(key.code) == key_map.end()) e.event = "unknown";
    else e.event = key_map[key.code];
    e.state = 0;

    if (e.event == "override") key_override_enabled = false;
    process_event(e);
  }
}

void teleop::Teleop::keyboard_down_event(const keyboard_msgs::msg::Key& key)
{
  RCLCPP_DEBUG_STREAM( n->get_logger(), "keydown: " << key.code);

  if (key_axes_map.find(key.code) != key_axes_map.end()) {
    std::string& cmd = key_axes_map[key.code];
    key_axes_state[cmd.substr(0, cmd.size() - 1)] = (cmd[cmd.size() - 1] == '+' ? 1 : -1);
  }
  else {
    universal_teleop_msgs::msg::Event e;
    if (key_map.find(key.code) == key_map.end()) e.event = "unknown";
    else e.event = key_map[key.code];
    e.state = 1;

    if (e.event == "override") key_override_enabled = true;
    process_event(e);
  }
}

void teleop::Teleop::control(void)
{
  if (joy_override_enabled) {
    if (last_joy_msg.axes.empty()) return;

    float pitch = last_joy_msg.axes[joy_axes["pitch"]];
    float roll = last_joy_msg.axes[joy_axes["roll"]];
    float yaw = last_joy_msg.axes[joy_axes["yaw"]];
    float vertical = last_joy_msg.axes[joy_axes["vertical"]];

    /* check deadzones */
    if (std::abs(pitch) < joy_deadzones["pitch"]) pitch = 0;
    if (std::abs(yaw) < joy_deadzones["yaw"]) yaw = 0;
    if (std::abs(roll) < joy_deadzones["roll"]) roll = 0;
    if (std::abs(vertical) < joy_deadzones["vertical"]) vertical = 0;


    geometry_msgs::msg::Twist vel;
    vel.linear.x = pitch * axis_scales["pitch"];
    vel.linear.y = roll * axis_scales["roll"];
    vel.linear.z = vertical * axis_scales["vertical"];
    vel.angular.x = vel.angular.y = 1; // non-zero to avoid hovering when zero-ing controls
    vel.angular.z = yaw * axis_scales["yaw"];
    pub_vel->publish(vel);
  }
  else if (key_override_enabled) {
    geometry_msgs::msg::Twist vel;
    vel.linear.x = key_axes_state["pitch"] * axis_scales["pitch"];
    vel.linear.y = 0/*roll * axis_scales["roll"]*/;
    vel.linear.z = 0/*last_joy_msg.axes[joy_axes["vertical"]] * axis_scales["vertical"]*/;
    vel.angular.x = vel.angular.y = 1; // non-zero to avoid hovering when zero-ing controls
    vel.angular.z = key_axes_state["yaw"] * axis_scales["yaw"];
    pub_vel->publish(vel);
  }
}


