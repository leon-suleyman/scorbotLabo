#include <ros/ros.h>
#include "angle_to_vel.h"

int main(int argc, char** argv)
{
  ros::init(argc, argv, "angle_to_vel");
  ros::NodeHandle n("~");
  scorbot::Angle_To_Vel t(n);
  ros::spin();
}