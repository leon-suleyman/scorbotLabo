#include <rclcpp/rclcpp.hpp>
#include "teleop.h"

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  auto n = rclcpp::Node::make_shared("universal_teleop");

  universal_teleop::Teleop t;

  rclcpp::Rate r(20);
  while(rclcpp::ok()) {
    rclcpp::spin_some(n);
    t.control();
    r.sleep();
  }
}
