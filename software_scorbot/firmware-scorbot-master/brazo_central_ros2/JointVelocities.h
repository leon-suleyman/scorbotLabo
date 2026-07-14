#ifndef _ROS_scorbot_JointVelocities_h
#define _ROS_scorbot_JointVelocities_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace scorbot
{

  class JointVelocities : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      uint32_t joint_velocities_length;
      typedef float _joint_velocities_type;
      _joint_velocities_type st_joint_velocities;
      _joint_velocities_type * joint_velocities;
      typedef bool _scaled_flag_type;
      _scaled_flag_type scaled_flag;

    JointVelocities():
      header(),
      joint_velocities_length(0), st_joint_velocities(), joint_velocities(nullptr),
      scaled_flag(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->joint_velocities_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->joint_velocities_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->joint_velocities_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->joint_velocities_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->joint_velocities_length);
      for( uint32_t i = 0; i < joint_velocities_length; i++){
      union {
        float real;
        uint32_t base;
      } u_joint_velocitiesi;
      u_joint_velocitiesi.real = this->joint_velocities[i];
      *(outbuffer + offset + 0) = (u_joint_velocitiesi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_joint_velocitiesi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_joint_velocitiesi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_joint_velocitiesi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->joint_velocities[i]);
      }
      union {
        bool real;
        uint8_t base;
      } u_scaled_flag;
      u_scaled_flag.real = this->scaled_flag;
      *(outbuffer + offset + 0) = (u_scaled_flag.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->scaled_flag);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t joint_velocities_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      joint_velocities_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      joint_velocities_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      joint_velocities_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->joint_velocities_length);
      if(joint_velocities_lengthT > joint_velocities_length)
        this->joint_velocities = (float*)realloc(this->joint_velocities, joint_velocities_lengthT * sizeof(float));
      joint_velocities_length = joint_velocities_lengthT;
      for( uint32_t i = 0; i < joint_velocities_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_joint_velocities;
      u_st_joint_velocities.base = 0;
      u_st_joint_velocities.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_joint_velocities.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_joint_velocities.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_joint_velocities.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_joint_velocities = u_st_joint_velocities.real;
      offset += sizeof(this->st_joint_velocities);
        memcpy( &(this->joint_velocities[i]), &(this->st_joint_velocities), sizeof(float));
      }
      union {
        bool real;
        uint8_t base;
      } u_scaled_flag;
      u_scaled_flag.base = 0;
      u_scaled_flag.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->scaled_flag = u_scaled_flag.real;
      offset += sizeof(this->scaled_flag);
     return offset;
    }

    virtual const char * getType() override { return "scorbot/JointVelocities"; };
    virtual const char * getMD5() override { return "ca93a6f07f7d605402dc93ee68f037fe"; };

  };

}
#endif
