#ifndef _ROS_universal_teleop_Event_h
#define _ROS_universal_teleop_Event_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace universal_teleop
{

  class Event : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef const char* _event_type;
      _event_type event;
      typedef bool _state_type;
      _state_type state;

    Event():
      header(),
      event(""),
      state(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      uint32_t length_event = strlen(this->event);
      varToArr(outbuffer + offset, length_event);
      offset += 4;
      memcpy(outbuffer + offset, this->event, length_event);
      offset += length_event;
      union {
        bool real;
        uint8_t base;
      } u_state;
      u_state.real = this->state;
      *(outbuffer + offset + 0) = (u_state.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->state);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t length_event;
      arrToVar(length_event, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_event; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_event-1]=0;
      this->event = (char *)(inbuffer + offset-1);
      offset += length_event;
      union {
        bool real;
        uint8_t base;
      } u_state;
      u_state.base = 0;
      u_state.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->state = u_state.real;
      offset += sizeof(this->state);
     return offset;
    }

    virtual const char * getType() override { return "universal_teleop/Event"; };
    virtual const char * getMD5() override { return "7becd39cf7f617d2c6ea4e4c91a2deac"; };

  };

}
#endif
