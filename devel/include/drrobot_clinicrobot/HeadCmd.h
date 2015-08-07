// Generated by gencpp from file drrobot_clinicrobot/HeadCmd.msg
// DO NOT EDIT!


#ifndef DRROBOT_CLINICROBOT_MESSAGE_HEADCMD_H
#define DRROBOT_CLINICROBOT_MESSAGE_HEADCMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace drrobot_clinicrobot
{
template <class ContainerAllocator>
struct HeadCmd_
{
  typedef HeadCmd_<ContainerAllocator> Type;

  HeadCmd_()
    : head_tilt_pos(0.0)
    , head_tiltflag(0)
    , head_tilt_time(0)
    , head_pan_pos(0.0)
    , head_panflag(0)
    , head_pan_time(0)  {
    }
  HeadCmd_(const ContainerAllocator& _alloc)
    : head_tilt_pos(0.0)
    , head_tiltflag(0)
    , head_tilt_time(0)
    , head_pan_pos(0.0)
    , head_panflag(0)
    , head_pan_time(0)  {
    }



   typedef float _head_tilt_pos_type;
  _head_tilt_pos_type head_tilt_pos;

   typedef uint8_t _head_tiltflag_type;
  _head_tiltflag_type head_tiltflag;

   typedef uint32_t _head_tilt_time_type;
  _head_tilt_time_type head_tilt_time;

   typedef float _head_pan_pos_type;
  _head_pan_pos_type head_pan_pos;

   typedef uint8_t _head_panflag_type;
  _head_panflag_type head_panflag;

   typedef uint32_t _head_pan_time_type;
  _head_pan_time_type head_pan_time;




  typedef boost::shared_ptr< ::drrobot_clinicrobot::HeadCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::drrobot_clinicrobot::HeadCmd_<ContainerAllocator> const> ConstPtr;

}; // struct HeadCmd_

typedef ::drrobot_clinicrobot::HeadCmd_<std::allocator<void> > HeadCmd;

typedef boost::shared_ptr< ::drrobot_clinicrobot::HeadCmd > HeadCmdPtr;
typedef boost::shared_ptr< ::drrobot_clinicrobot::HeadCmd const> HeadCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::drrobot_clinicrobot::HeadCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::drrobot_clinicrobot::HeadCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace drrobot_clinicrobot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'drrobot_clinicrobot': ['/home/drrobot1/github/BlueBerry/src/drrobot_clinicrobot/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::drrobot_clinicrobot::HeadCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::drrobot_clinicrobot::HeadCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drrobot_clinicrobot::HeadCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drrobot_clinicrobot::HeadCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drrobot_clinicrobot::HeadCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drrobot_clinicrobot::HeadCmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::drrobot_clinicrobot::HeadCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "33b58503880791edf7de4962dc56195c";
  }

  static const char* value(const ::drrobot_clinicrobot::HeadCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x33b58503880791edULL;
  static const uint64_t static_value2 = 0xf7de4962dc56195cULL;
};

template<class ContainerAllocator>
struct DataType< ::drrobot_clinicrobot::HeadCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "drrobot_clinicrobot/HeadCmd";
  }

  static const char* value(const ::drrobot_clinicrobot::HeadCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::drrobot_clinicrobot::HeadCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# head motor command message from DrRobot Robot.\n\
float32 head_tilt_pos		# head tilt angle(-40~40) unit:degree\n\
uint8 head_tiltflag	        # head tilt flag, 0- no control, 1- control\n\
uint32 head_tilt_time		# for head tilt position command time\n\
 \n\
float32 head_pan_pos		# head pan angle(-90~90), unit:degree\n\
uint8 head_panflag	        # head pan flag, 0- no control, 1- control\n\
uint32 head_pan_time		# for head pan position command time\n\
";
  }

  static const char* value(const ::drrobot_clinicrobot::HeadCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::drrobot_clinicrobot::HeadCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.head_tilt_pos);
      stream.next(m.head_tiltflag);
      stream.next(m.head_tilt_time);
      stream.next(m.head_pan_pos);
      stream.next(m.head_panflag);
      stream.next(m.head_pan_time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct HeadCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::drrobot_clinicrobot::HeadCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::drrobot_clinicrobot::HeadCmd_<ContainerAllocator>& v)
  {
    s << indent << "head_tilt_pos: ";
    Printer<float>::stream(s, indent + "  ", v.head_tilt_pos);
    s << indent << "head_tiltflag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.head_tiltflag);
    s << indent << "head_tilt_time: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.head_tilt_time);
    s << indent << "head_pan_pos: ";
    Printer<float>::stream(s, indent + "  ", v.head_pan_pos);
    s << indent << "head_panflag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.head_panflag);
    s << indent << "head_pan_time: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.head_pan_time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DRROBOT_CLINICROBOT_MESSAGE_HEADCMD_H
