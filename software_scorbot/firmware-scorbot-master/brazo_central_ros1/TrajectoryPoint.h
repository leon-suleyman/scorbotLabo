#ifndef _ROS_scorbot_TrajectoryPoint_h
#define _ROS_scorbot_TrajectoryPoint_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace scorbot
{

  class TrajectoryPoint : public ros::Msg
  {
    public:
      uint32_t positions_length;
      typedef int32_t _positions_type;
      _positions_type st_positions;
      _positions_type * positions;

    TrajectoryPoint():
      positions_length(0), st_positions(), positions(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->positions_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->positions_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->positions_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->positions_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->positions_length);
      for( uint32_t i = 0; i < positions_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_positionsi;
      u_positionsi.real = this->positions[i];
      *(outbuffer + offset + 0) = (u_positionsi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_positionsi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_positionsi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_positionsi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->positions[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t positions_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      positions_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      positions_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      positions_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->positions_length);
      if(positions_lengthT > positions_length)
        this->positions = (int32_t*)realloc(this->positions, positions_lengthT * sizeof(int32_t));
      positions_length = positions_lengthT;
      for( uint32_t i = 0; i < positions_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_positions;
      u_st_positions.base = 0;
      u_st_positions.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_positions.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_positions.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_positions.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_positions = u_st_positions.real;
      offset += sizeof(this->st_positions);
        memcpy( &(this->positions[i]), &(this->st_positions), sizeof(int32_t));
      }
     return offset;
    }

    virtual const char * getType() override { return "scorbot/TrajectoryPoint"; };
    virtual const char * getMD5() override { return "a2a9139ca9bf4352767912894c0d0ece"; };

  };

}
#endif
