#include <rclcpp/rclcpp.hpp>
#include "teleop.h"

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  auto n = rclcpp::Node::make_shared("universal_teleop", rclcpp::NodeOptions()
    .allow_undeclared_parameters(true)
    .automatically_declare_parameters_from_overrides(true));

  universal_teleop::Teleop t = universal_teleop::Teleop(n);

  rclcpp::Rate r(20);
  while(rclcpp::ok()) {
    rclcpp::spin_some(n);
    t.control();
    r.sleep();
  }
}
