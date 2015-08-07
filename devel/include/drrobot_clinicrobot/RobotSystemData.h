// Generated by gencpp from file drrobot_clinicrobot/RobotSystemData.msg
// DO NOT EDIT!


#ifndef DRROBOT_CLINICROBOT_MESSAGE_ROBOTSYSTEMDATA_H
#define DRROBOT_CLINICROBOT_MESSAGE_ROBOTSYSTEMDATA_H


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
struct RobotSystemData_
{
  typedef RobotSystemData_<ContainerAllocator> Type;

  RobotSystemData_()
    : header()
    , system_vol(0.0)
    , chargestation_flag(0)
    , charge_flag(0)
    , motionboard_vol(0.0)
    , robot_x(0.0)
    , robot_y(0.0)
    , robot_heading(0.0)
    , head_tiltangle(0.0)
    , head_panangle(0.0)
    , laser_tiltangle(0.0)
    , bumpsensor(0)
    , faceimage_num(0)
    , power_source(0)  {
    }
  RobotSystemData_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , system_vol(0.0)
    , chargestation_flag(0)
    , charge_flag(0)
    , motionboard_vol(0.0)
    , robot_x(0.0)
    , robot_y(0.0)
    , robot_heading(0.0)
    , head_tiltangle(0.0)
    , head_panangle(0.0)
    , laser_tiltangle(0.0)
    , bumpsensor(0)
    , faceimage_num(0)
    , power_source(0)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _system_vol_type;
  _system_vol_type system_vol;

   typedef uint8_t _chargestation_flag_type;
  _chargestation_flag_type chargestation_flag;

   typedef uint8_t _charge_flag_type;
  _charge_flag_type charge_flag;

   typedef float _motionboard_vol_type;
  _motionboard_vol_type motionboard_vol;

   typedef float _robot_x_type;
  _robot_x_type robot_x;

   typedef float _robot_y_type;
  _robot_y_type robot_y;

   typedef float _robot_heading_type;
  _robot_heading_type robot_heading;

   typedef float _head_tiltangle_type;
  _head_tiltangle_type head_tiltangle;

   typedef float _head_panangle_type;
  _head_panangle_type head_panangle;

   typedef float _laser_tiltangle_type;
  _laser_tiltangle_type laser_tiltangle;

   typedef uint8_t _bumpsensor_type;
  _bumpsensor_type bumpsensor;

   typedef uint8_t _faceimage_num_type;
  _faceimage_num_type faceimage_num;

   typedef uint8_t _power_source_type;
  _power_source_type power_source;




  typedef boost::shared_ptr< ::drrobot_clinicrobot::RobotSystemData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::drrobot_clinicrobot::RobotSystemData_<ContainerAllocator> const> ConstPtr;

}; // struct RobotSystemData_

typedef ::drrobot_clinicrobot::RobotSystemData_<std::allocator<void> > RobotSystemData;

typedef boost::shared_ptr< ::drrobot_clinicrobot::RobotSystemData > RobotSystemDataPtr;
typedef boost::shared_ptr< ::drrobot_clinicrobot::RobotSystemData const> RobotSystemDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::drrobot_clinicrobot::RobotSystemData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::drrobot_clinicrobot::RobotSystemData_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::drrobot_clinicrobot::RobotSystemData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::drrobot_clinicrobot::RobotSystemData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drrobot_clinicrobot::RobotSystemData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drrobot_clinicrobot::RobotSystemData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drrobot_clinicrobot::RobotSystemData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drrobot_clinicrobot::RobotSystemData_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::drrobot_clinicrobot::RobotSystemData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "25a427223be51fd4f54e7fa38fa41527";
  }

  static const char* value(const ::drrobot_clinicrobot::RobotSystemData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x25a427223be51fd4ULL;
  static const uint64_t static_value2 = 0xf54e7fa38fa41527ULL;
};

template<class ContainerAllocator>
struct DataType< ::drrobot_clinicrobot::RobotSystemData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "drrobot_clinicrobot/RobotSystemData";
  }

  static const char* value(const ::drrobot_clinicrobot::RobotSystemData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::drrobot_clinicrobot::RobotSystemData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# system Sensor information message from DrRobot Robot.\n\
\n\
Header header    	# timestamp in the header is the time\n\
float32 system_vol	# system voltage, normally is battery vol, in charge station, it is DC power voltage\n\
uint8 chargestation_flag	#1-in hcarge station, 0-not\n\
uint8 charge_flag	# 1- charging, 0- not\n\
float32 motionboard_vol	# 5V\n\
float32 robot_x		# robot position X\n\
float32 robot_y		# robot position Y\n\
float32 robot_heading	# robot heading unit:radian\n\
float32 head_tiltangle	# head tile angle, unit: radian\n\
float32 head_panangle	# head pan angle, unit: radian\n\
float32 laser_tiltangle	# laser tilting angle, unit:radian\n\
uint8 bumpsensor	# bump sensor, bit0~bit3\n\
uint8 faceimage_num		# face image number\n\
uint8 power_source	# power source, 0- battery, 1 - dc power\n\
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

  static const char* value(const ::drrobot_clinicrobot::RobotSystemData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::drrobot_clinicrobot::RobotSystemData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.system_vol);
      stream.next(m.chargestation_flag);
      stream.next(m.charge_flag);
      stream.next(m.motionboard_vol);
      stream.next(m.robot_x);
      stream.next(m.robot_y);
      stream.next(m.robot_heading);
      stream.next(m.head_tiltangle);
      stream.next(m.head_panangle);
      stream.next(m.laser_tiltangle);
      stream.next(m.bumpsensor);
      stream.next(m.faceimage_num);
      stream.next(m.power_source);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct RobotSystemData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::drrobot_clinicrobot::RobotSystemData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::drrobot_clinicrobot::RobotSystemData_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "system_vol: ";
    Printer<float>::stream(s, indent + "  ", v.system_vol);
    s << indent << "chargestation_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.chargestation_flag);
    s << indent << "charge_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.charge_flag);
    s << indent << "motionboard_vol: ";
    Printer<float>::stream(s, indent + "  ", v.motionboard_vol);
    s << indent << "robot_x: ";
    Printer<float>::stream(s, indent + "  ", v.robot_x);
    s << indent << "robot_y: ";
    Printer<float>::stream(s, indent + "  ", v.robot_y);
    s << indent << "robot_heading: ";
    Printer<float>::stream(s, indent + "  ", v.robot_heading);
    s << indent << "head_tiltangle: ";
    Printer<float>::stream(s, indent + "  ", v.head_tiltangle);
    s << indent << "head_panangle: ";
    Printer<float>::stream(s, indent + "  ", v.head_panangle);
    s << indent << "laser_tiltangle: ";
    Printer<float>::stream(s, indent + "  ", v.laser_tiltangle);
    s << indent << "bumpsensor: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.bumpsensor);
    s << indent << "faceimage_num: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.faceimage_num);
    s << indent << "power_source: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.power_source);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DRROBOT_CLINICROBOT_MESSAGE_ROBOTSYSTEMDATA_H
