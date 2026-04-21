#include <ros/ros.h>
#include "teleop.h"

int main(int argc, char** argv)
{
  ros::init(argc, argv, "teleop");
  ros::NodeHandle n("~");
  scorbot::Teleop t(n);
  ros::spin();
}
