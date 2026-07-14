#ifndef __TELEOP_H__
#define __TELEOP_H__

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joy.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <keyboard_msgs/msg/key.hpp>
#include "universal_teleop_msgs/msg/event.hpp"
#include "universal_teleop_msgs/msg/control.hpp"

namespace universal_teleop {
  class Teleop {
    public:
      Teleop(std::shared_ptr<rclcpp::Node> node);
      void control(void);

    private:
      void joystick_event(const sensor_msgs::msg::Joy& joy);
      void keyboard_up_event(const keyboard_msgs::msg::Key& key);
      void keyboard_down_event(const keyboard_msgs::msg::Key& key);

      void process_event(const universal_teleop_msgs::msg::Event& e);

      std::shared_ptr<rclcpp::Node> n;
      
      rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr joy_sub;
      rclcpp::Subscription<keyboard_msgs::msg::Key>::SharedPtr keyup_sub, keydown_sub;

      rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_vel;
      rclcpp::Publisher<universal_teleop_msgs::msg::Event>::SharedPtr pub_event;
      rclcpp::Publisher<universal_teleop_msgs::msg::Control>::SharedPtr pub_control;
    

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