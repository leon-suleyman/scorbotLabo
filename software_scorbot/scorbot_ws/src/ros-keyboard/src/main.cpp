#include <rclcpp/rclcpp.hpp>
#include <iostream>
#include "keyboard.h"
using namespace std;

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto n = rclcpp::Node::make_shared("keyboard");

  auto pub_down = n->create_publisher<keyboard_msgs::msg::Key>("keydown", 10);
  auto pub_up = n->create_publisher<keyboard_msgs::msg::Key>("keyup", 10);

  keyboard::Keyboard kbd;

  rclcpp::Rate r(50);

  keyboard_msgs::msg::Key k;
  bool pressed, new_event;
  while (rclcpp::ok() && kbd.get_key(new_event, pressed, k.code, k.modifiers))
  {
    if (new_event)
    {
      k.header.stamp = n->now();
      if (pressed){
        pub_down->publish(k);
      }else{
        pub_up->publish(k);
      }
    }
    rclcpp::spin_some(n);
    r.sleep();
  }

}
