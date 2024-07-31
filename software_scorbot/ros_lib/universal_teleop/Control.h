#ifndef _ROS_universal_teleop_Control_h
#define _ROS_universal_teleop_Control_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace universal_teleop
{

  class Control : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef const char* _control_type;
      _control_type control;
      typedef float _value_type;
      _value_type value;

    Control():
      header(),
      control(""),
      value(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      uint32_t length_control = strlen(this->control);
      varToArr(outbuffer + offset, length_control);
      offset += 4;
      memcpy(outbuffer + offset, this->control, length_control);
      offset += length_control;
      union {
        float real;
        uint32_t base;
      } u_value;
      u_value.real = this->value;
      *(outbuffer + offset + 0) = (u_value.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_value.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_value.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_value.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->value);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t length_control;
      arrToVar(length_control, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_control; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_control-1]=0;
      this->control = (char *)(inbuffer + offset-1);
      offset += length_control;
      union {
        float real;
        uint32_t base;
      } u_value;
      u_value.base = 0;
      u_value.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_value.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_value.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_value.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->value = u_value.real;
      offset += sizeof(this->value);
     return offset;
    }

    virtual const char * getType() override { return "universal_teleop/Control"; };
    virtual const char * getMD5() override { return "e96dab30e0ce0490fc168ec7e380bd1f"; };

  };

}
#endif
