// Generated by gencpp from file drrobot_clinicrobot/LaserDriveData.msg
// DO NOT EDIT!


#ifndef DRROBOT_CLINICROBOT_MESSAGE_LASERDRIVEDATA_H
#define DRROBOT_CLINICROBOT_MESSAGE_LASERDRIVEDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace drrobot_clinicrobot
{
template <class ContainerAllocator>
struct LaserDriveData_
{
  typedef LaserDriveData_<ContainerAllocator> Type;

  LaserDriveData_()
    : header()
    , offset_x(0.0)
    , offset_y(0.0)
    , offset_z(0.0)
    , tilt_angle(0.0)
    , stop_flag(0)
    , drive_state(0)  {
    }
  LaserDriveData_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , offset_x(0.0)
    , offset_y(0.0)
    , offset_z(0.0)
    , tilt_angle(0.0)
    , stop_flag(0)
    , drive_state(0)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _offset_x_type;
  _offset_x_type offset_x;

   typedef float _offset_y_type;
  _offset_y_type offset_y;

   typedef float _offset_z_type;
  _offset_z_type offset_z;

   typedef float _tilt_angle_type;
  _tilt_angle_type tilt_angle;

   typedef uint8_t _stop_flag_type;
  _stop_flag_type stop_flag;

   typedef uint8_t _drive_state_type;
  _drive_state_type drive_state;




  typedef boost::shared_ptr< ::drrobot_clinicrobot::LaserDriveData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::drrobot_clinicrobot::LaserDriveData_<ContainerAllocator> const> ConstPtr;

}; // struct LaserDriveData_

typedef ::drrobot_clinicrobot::LaserDriveData_<std::allocator<void> > LaserDriveData;

typedef boost::shared_ptr< ::drrobot_clinicrobot::LaserDriveData > LaserDriveDataPtr;
typedef boost::shared_ptr< ::drrobot_clinicrobot::LaserDriveData const> LaserDriveDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::drrobot_clinicrobot::LaserDriveData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::drrobot_clinicrobot::LaserDriveData_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace drrobot_clinicrobot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'drrobot_clinicrobot': ['/home/drrobot1/github/BlueBerry/src/drrobot_clinicrobot/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::drrobot_clinicrobot::LaserDriveData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::drrobot_clinicrobot::LaserDriveData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drrobot_clinicrobot::LaserDriveData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drrobot_clinicrobot::LaserDriveData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drrobot_clinicrobot::LaserDriveData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drrobot_clinicrobot::LaserDriveData_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::drrobot_clinicrobot::LaserDriveData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cd9fa55f9b4bc78c1d63654d78099ba1";
  }

  static const char* value(const ::drrobot_clinicrobot::LaserDriveData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcd9fa55f9b4bc78cULL;
  static const uint64_t static_value2 = 0x1d63654d78099ba1ULL;
};

template<class ContainerAllocator>
struct DataType< ::drrobot_clinicrobot::LaserDriveData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "drrobot_clinicrobot/LaserDriveData";
  }

  static const char* value(const ::drrobot_clinicrobot::LaserDriveData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::drrobot_clinicrobot::LaserDriveData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# laser tilting driving module information message from DrRobot Robot.\n\
\n\
Header header    	# timestamp in the header is the time the \n\
\n\
float32 offset_x	# link with robot base\n\
float32 offset_y	# base link\n\
float32 offset_z	# base link\n\
float32 tilt_angle	# base link\n\
uint8 stop_flag		# move or not, 0-stop\n\
uint8 drive_state	# drive board state\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::drrobot_clinicrobot::LaserDriveData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::drrobot_clinicrobot::LaserDriveData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.offset_x);
      stream.next(m.offset_y);
      stream.next(m.offset_z);
      stream.next(m.tilt_angle);
      stream.next(m.stop_flag);
      stream.next(m.drive_state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct LaserDriveData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::drrobot_clinicrobot::LaserDriveData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::drrobot_clinicrobot::LaserDriveData_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "offset_x: ";
    Printer<float>::stream(s, indent + "  ", v.offset_x);
    s << indent << "offset_y: ";
    Printer<float>::stream(s, indent + "  ", v.offset_y);
    s << indent << "offset_z: ";
    Printer<float>::stream(s, indent + "  ", v.offset_z);
    s << indent << "tilt_angle: ";
    Printer<float>::stream(s, indent + "  ", v.tilt_angle);
    s << indent << "stop_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.stop_flag);
    s << indent << "drive_state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.drive_state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DRROBOT_CLINICROBOT_MESSAGE_LASERDRIVEDATA_H
