#ifndef __TELEOP_H__
#define __TELEOP_H__

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joy.hpp>
#include <keyboard_msgs/msg/key.hpp>
#include "universal_teleop_msgs/msg/event.hpp"

namespace universal_teleop {
  class Teleop {
    public:
      Teleop(void);
      void control(void);

    private:
      void joystick_event(const sensor_/msg::msg::Joy::ConstPtr& joy);
      void keyboard_up_event(const keyboard_msgs::msg::Key::ConstPtr& key);
      void keyboard_down_event(const keyboard_msgs::msg::Key::ConstPtr& key);

      void process_event(const universal_teleop_msg::msg::Event& e);

      rclcpp::Node n;
      
      rclcpp::Subscriber joy_sub, keyup_sub, keydown_sub;
      rclcpp::Publisher pub_vel, pub_event, pub_control;
      //rclcpp::Publisher pub_takeoff, pub_land, pub_emergency;
    

      sensor_msgs::msg::Joy last_joy_msg;
      std::map<int, std::string> joy_button_map;
      std::map<int, std::string> joy_axis_map;
      std::map<uint16_t, std::string> key_map;
      std::map<uint16_t, std::string> key_axes_map;
      std::map<std::string, int> key_axes_state;
      
      std::map<std::string, float> axis_scales;

      std::map<std::string, int> joy_axes;
      std::map<std::string, float> joy_deadzones;

      bool key_override_enabled, joy_override_enabled, send_velocity;
  };
}

#endif