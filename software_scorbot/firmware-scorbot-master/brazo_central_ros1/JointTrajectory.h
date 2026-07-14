#ifndef _ROS_scorbot_JointTrajectory_h
#define _ROS_scorbot_JointTrajectory_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace scorbot
{

  class JointTrajectory : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      uint32_t points_length;
      typedef int32_t _points_type;
      _points_type st_points;
      _points_type * points;

    JointTrajectory():
      header(),
      points_length(0), st_points(), points(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->points_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->points_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->points_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->points_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->points_length);
      for( uint32_t i = 0; i < points_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_pointsi;
      u_pointsi.real = this->points[i];
      *(outbuffer + offset + 0) = (u_pointsi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pointsi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pointsi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pointsi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->points[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t points_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      points_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      points_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      points_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->points_length);
      if(points_lengthT > points_length)
        this->points = (int32_t*)realloc(this->points, points_lengthT * sizeof(int32_t));
      points_length = points_lengthT;
      for( uint32_t i = 0; i < points_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_points;
      u_st_points.base = 0;
      u_st_points.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_points.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_points.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_points.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_points = u_st_points.real;
      offset += sizeof(this->st_points);
        memcpy( &(this->points[i]), &(this->st_points), sizeof(int32_t));
      }
     return offset;
    }

    virtual const char * getType() override { return "scorbot/JointTrajectory"; };
    virtual const char * getMD5() override { return "ff3fd76c56194eb1ef5652fa7b44a08a"; };

  };

}
#endif
