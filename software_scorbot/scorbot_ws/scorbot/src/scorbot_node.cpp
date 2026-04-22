#include <rclcpp/rclcpp.hpp>
#include "scorbot.h"

int main(int argc, char** argv)
{
  ros::init(argc, argv, "teleop");
  ros::NodeHandle n("~");
  scorbot::Teleop t(n);
  ros::spin();
}
