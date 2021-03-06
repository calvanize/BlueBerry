// Generated by gencpp from file drrobot_clinicrobot/PowerInfo.msg
// DO NOT EDIT!


#ifndef DRROBOT_CLINICROBOT_MESSAGE_POWERINFO_H
#define DRROBOT_CLINICROBOT_MESSAGE_POWERINFO_H


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
struct PowerInfo_
{
  typedef PowerInfo_<ContainerAllocator> Type;

  PowerInfo_()
    : header()
    , battery_vol(0.0)
    , system_vol(0.0)
    , battery_fuel(0.0)
    , dcin_vol(0.0)
    , dcin_current(0.0)
    , charge_time_min(0)
    , charge_time_sec(0)
    , charge_error_code(0)
    , charge_mode(0)
    , charge_status(0)
    , charge_rx_status(0)
    , charger_temperature(0.0)
    , set_charge_current(0.0)
    , charge_flag(0)
    , in_chargestation_flag(0)
    , cell_vol()
    , cell_res()  {
      cell_vol.assign(0.0);

      cell_res.assign(0.0);
  }
  PowerInfo_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , battery_vol(0.0)
    , system_vol(0.0)
    , battery_fuel(0.0)
    , dcin_vol(0.0)
    , dcin_current(0.0)
    , charge_time_min(0)
    , charge_time_sec(0)
    , charge_error_code(0)
    , charge_mode(0)
    , charge_status(0)
    , charge_rx_status(0)
    , charger_temperature(0.0)
    , set_charge_current(0.0)
    , charge_flag(0)
    , in_chargestation_flag(0)
    , cell_vol()
    , cell_res()  {
      cell_vol.assign(0.0);

      cell_res.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _battery_vol_type;
  _battery_vol_type battery_vol;

   typedef float _system_vol_type;
  _system_vol_type system_vol;

   typedef float _battery_fuel_type;
  _battery_fuel_type battery_fuel;

   typedef float _dcin_vol_type;
  _dcin_vol_type dcin_vol;

   typedef float _dcin_current_type;
  _dcin_current_type dcin_current;

   typedef uint32_t _charge_time_min_type;
  _charge_time_min_type charge_time_min;

   typedef uint32_t _charge_time_sec_type;
  _charge_time_sec_type charge_time_sec;

   typedef uint8_t _charge_error_code_type;
  _charge_error_code_type charge_error_code;

   typedef uint8_t _charge_mode_type;
  _charge_mode_type charge_mode;

   typedef uint8_t _charge_status_type;
  _charge_status_type charge_status;

   typedef uint8_t _charge_rx_status_type;
  _charge_rx_status_type charge_rx_status;

   typedef float _charger_temperature_type;
  _charger_temperature_type charger_temperature;

   typedef float _set_charge_current_type;
  _set_charge_current_type set_charge_current;

   typedef uint8_t _charge_flag_type;
  _charge_flag_type charge_flag;

   typedef uint8_t _in_chargestation_flag_type;
  _in_chargestation_flag_type in_chargestation_flag;

   typedef boost::array<float, 6>  _cell_vol_type;
  _cell_vol_type cell_vol;

   typedef boost::array<float, 6>  _cell_res_type;
  _cell_res_type cell_res;




  typedef boost::shared_ptr< ::drrobot_clinicrobot::PowerInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::drrobot_clinicrobot::PowerInfo_<ContainerAllocator> const> ConstPtr;

}; // struct PowerInfo_

typedef ::drrobot_clinicrobot::PowerInfo_<std::allocator<void> > PowerInfo;

typedef boost::shared_ptr< ::drrobot_clinicrobot::PowerInfo > PowerInfoPtr;
typedef boost::shared_ptr< ::drrobot_clinicrobot::PowerInfo const> PowerInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::drrobot_clinicrobot::PowerInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::drrobot_clinicrobot::PowerInfo_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::drrobot_clinicrobot::PowerInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::drrobot_clinicrobot::PowerInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drrobot_clinicrobot::PowerInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drrobot_clinicrobot::PowerInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drrobot_clinicrobot::PowerInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drrobot_clinicrobot::PowerInfo_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::drrobot_clinicrobot::PowerInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c19e8d592d8f15bf9ff68a439be7b96c";
  }

  static const char* value(const ::drrobot_clinicrobot::PowerInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc19e8d592d8f15bfULL;
  static const uint64_t static_value2 = 0x9ff68a439be7b96cULL;
};

template<class ContainerAllocator>
struct DataType< ::drrobot_clinicrobot::PowerInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "drrobot_clinicrobot/PowerInfo";
  }

  static const char* value(const ::drrobot_clinicrobot::PowerInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::drrobot_clinicrobot::PowerInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# battery /power information message from DrRobot Robot.\n\
\n\
Header header    	# timestamp in the header is the time the driver\n\
\n\
float32 battery_vol		# battery voltage, if not in charge station, it also would be system voltage\n\
float32 system_vol	# system power voltage, in charge station, it would be 24V DC power\n\
float32 battery_fuel	# battery fuel, estimate by fuel table\n\
float32 dcin_vol	# dcin power voltage reading, only avaiable in chage state\n\
float32 dcin_current	#  for charger\n\
uint32 charge_time_min	# charging minute\n\
uint32 charge_time_sec	# charging second\n\
uint8 charge_error_code	# charging error code\n\
uint8 charge_mode	# charge mode\n\
uint8 charge_status	# charging state, finish or not\n\
uint8 charge_rx_status	# charging state\n\
float32 charger_temperature	# charger CPU temperature\n\
float32 set_charge_current	# set charge current\n\
uint8 charge_flag	# charging or not, 1- charing, 0- not\n\
uint8 in_chargestation_flag	# in charge station or not, 1-in, 0-not\n\
float32[6] cell_vol	# cell voltage\n\
float32[6] cell_res	# cell resistor\n\
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

  static const char* value(const ::drrobot_clinicrobot::PowerInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::drrobot_clinicrobot::PowerInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.battery_vol);
      stream.next(m.system_vol);
      stream.next(m.battery_fuel);
      stream.next(m.dcin_vol);
      stream.next(m.dcin_current);
      stream.next(m.charge_time_min);
      stream.next(m.charge_time_sec);
      stream.next(m.charge_error_code);
      stream.next(m.charge_mode);
      stream.next(m.charge_status);
      stream.next(m.charge_rx_status);
      stream.next(m.charger_temperature);
      stream.next(m.set_charge_current);
      stream.next(m.charge_flag);
      stream.next(m.in_chargestation_flag);
      stream.next(m.cell_vol);
      stream.next(m.cell_res);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct PowerInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::drrobot_clinicrobot::PowerInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::drrobot_clinicrobot::PowerInfo_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "battery_vol: ";
    Printer<float>::stream(s, indent + "  ", v.battery_vol);
    s << indent << "system_vol: ";
    Printer<float>::stream(s, indent + "  ", v.system_vol);
    s << indent << "battery_fuel: ";
    Printer<float>::stream(s, indent + "  ", v.battery_fuel);
    s << indent << "dcin_vol: ";
    Printer<float>::stream(s, indent + "  ", v.dcin_vol);
    s << indent << "dcin_current: ";
    Printer<float>::stream(s, indent + "  ", v.dcin_current);
    s << indent << "charge_time_min: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.charge_time_min);
    s << indent << "charge_time_sec: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.charge_time_sec);
    s << indent << "charge_error_code: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.charge_error_code);
    s << indent << "charge_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.charge_mode);
    s << indent << "charge_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.charge_status);
    s << indent << "charge_rx_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.charge_rx_status);
    s << indent << "charger_temperature: ";
    Printer<float>::stream(s, indent + "  ", v.charger_temperature);
    s << indent << "set_charge_current: ";
    Printer<float>::stream(s, indent + "  ", v.set_charge_current);
    s << indent << "charge_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.charge_flag);
    s << indent << "in_chargestation_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.in_chargestation_flag);
    s << indent << "cell_vol[]" << std::endl;
    for (size_t i = 0; i < v.cell_vol.size(); ++i)
    {
      s << indent << "  cell_vol[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.cell_vol[i]);
    }
    s << indent << "cell_res[]" << std::endl;
    for (size_t i = 0; i < v.cell_res.size(); ++i)
    {
      s << indent << "  cell_res[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.cell_res[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DRROBOT_CLINICROBOT_MESSAGE_POWERINFO_H
