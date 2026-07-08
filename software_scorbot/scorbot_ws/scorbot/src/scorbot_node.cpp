#include <rclcpp/rclcpp.hpp>
#include "scorbot.h"

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  auto n = rclcpp::Node::make_shared("scorbot", rclcpp::NodeOptions()
    .allow_undeclared_parameters(true)
    .automatically_declare_parameters_from_overrides(true));

  scorbot::Teleop t = scorbot::Teleop(n);
  rclcpp::spin_some(n);
}
