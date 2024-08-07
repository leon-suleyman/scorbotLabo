// Generated by gencpp from file scorbot/JointVelocities.msg
// DO NOT EDIT!


#ifndef SCORBOT_MESSAGE_JOINTVELOCITIES_H
#define SCORBOT_MESSAGE_JOINTVELOCITIES_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace scorbot
{
template <class ContainerAllocator>
struct JointVelocities_
{
  typedef JointVelocities_<ContainerAllocator> Type;

  JointVelocities_()
    : header()
    , joint_velocities()
    , scaled_flag(false)  {
    }
  JointVelocities_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , joint_velocities(_alloc)
    , scaled_flag(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _joint_velocities_type;
  _joint_velocities_type joint_velocities;

   typedef uint8_t _scaled_flag_type;
  _scaled_flag_type scaled_flag;





  typedef boost::shared_ptr< ::scorbot::JointVelocities_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::scorbot::JointVelocities_<ContainerAllocator> const> ConstPtr;

}; // struct JointVelocities_

typedef ::scorbot::JointVelocities_<std::allocator<void> > JointVelocities;

typedef boost::shared_ptr< ::scorbot::JointVelocities > JointVelocitiesPtr;
typedef boost::shared_ptr< ::scorbot::JointVelocities const> JointVelocitiesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::scorbot::JointVelocities_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::scorbot::JointVelocities_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::scorbot::JointVelocities_<ContainerAllocator1> & lhs, const ::scorbot::JointVelocities_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.joint_velocities == rhs.joint_velocities &&
    lhs.scaled_flag == rhs.scaled_flag;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::scorbot::JointVelocities_<ContainerAllocator1> & lhs, const ::scorbot::JointVelocities_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace scorbot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::scorbot::JointVelocities_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scorbot::JointVelocities_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scorbot::JointVelocities_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scorbot::JointVelocities_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scorbot::JointVelocities_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scorbot::JointVelocities_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::scorbot::JointVelocities_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ca93a6f07f7d605402dc93ee68f037fe";
  }

  static const char* value(const ::scorbot::JointVelocities_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xca93a6f07f7d6054ULL;
  static const uint64_t static_value2 = 0x02dc93ee68f037feULL;
};

template<class ContainerAllocator>
struct DataType< ::scorbot::JointVelocities_<ContainerAllocator> >
{
  static const char* value()
  {
    return "scorbot/JointVelocities";
  }

  static const char* value(const ::scorbot::JointVelocities_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::scorbot::JointVelocities_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float32[] joint_velocities\n"
"bool scaled_flag\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::scorbot::JointVelocities_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::scorbot::JointVelocities_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.joint_velocities);
      stream.next(m.scaled_flag);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointVelocities_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::scorbot::JointVelocities_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::scorbot::JointVelocities_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "joint_velocities[]" << std::endl;
    for (size_t i = 0; i < v.joint_velocities.size(); ++i)
    {
      s << indent << "  joint_velocities[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.joint_velocities[i]);
    }
    s << indent << "scaled_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.scaled_flag);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCORBOT_MESSAGE_JOINTVELOCITIES_H
