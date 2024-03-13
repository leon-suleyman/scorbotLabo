#include <ros/ros.h>
#include "sim_master.h"

int main(int argc, char** argv)
{
  ros::init(argc, argv, "sim_master");
  ros::NodeHandle n("~");
  scorbot::Sim_Master t(n);
  ros::spin();
}