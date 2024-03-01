#include <ros/ros.h>
#include "conector.h"

int main(int argc, char** argv)
{
  ros::init(argc, argv, "conector");
  ros::NodeHandle n("~");
  scorbot::Conector c(n);
  ros::spin();
}