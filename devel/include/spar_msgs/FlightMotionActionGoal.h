// Generated by gencpp from file spar_msgs/FlightMotionActionGoal.msg
// DO NOT EDIT!


#ifndef SPAR_MSGS_MESSAGE_FLIGHTMOTIONACTIONGOAL_H
#define SPAR_MSGS_MESSAGE_FLIGHTMOTIONACTIONGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <spar_msgs/FlightMotionGoal.h>

namespace spar_msgs
{
template <class ContainerAllocator>
struct FlightMotionActionGoal_
{
  typedef FlightMotionActionGoal_<ContainerAllocator> Type;

  FlightMotionActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  FlightMotionActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::spar_msgs::FlightMotionGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct FlightMotionActionGoal_

typedef ::spar_msgs::FlightMotionActionGoal_<std::allocator<void> > FlightMotionActionGoal;

typedef boost::shared_ptr< ::spar_msgs::FlightMotionActionGoal > FlightMotionActionGoalPtr;
typedef boost::shared_ptr< ::spar_msgs::FlightMotionActionGoal const> FlightMotionActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator1> & lhs, const ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator1> & lhs, const ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace spar_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "74f6863cc63ccf58f36ff50fd69b7c68";
  }

  static const char* value(const ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x74f6863cc63ccf58ULL;
  static const uint64_t static_value2 = 0xf36ff50fd69b7c68ULL;
};

template<class ContainerAllocator>
struct DataType< ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spar_msgs/FlightMotionActionGoal";
  }

  static const char* value(const ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"FlightMotionGoal goal\n"
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
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: spar_msgs/FlightMotionGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Goal\n"
"\n"
"# Motion to execute\n"
"uint8 MOTION_STOP = 0				# Stop in current place (ignores x/y/z/yaw/convergence)\n"
"uint8 MOTION_GOTO = 1				# Fly to location (x/y/z/yaw)\n"
"uint8 MOTION_GOTO_POS = 2			# Fly to location (x/y/z, maintain current yaw)\n"
"uint8 MOTION_GOTO_YAW = 3			# Rotate at current location (ignores x/y/z)\n"
"uint8 MOTION_TAKEOFF = 4			# Performs a take-off at current location to hight 'z' (ignores x/y/yaw)\n"
"uint8 MOTION_LAND = 5				# Performs a landing at current location at vertical speed (ignores x/y/z/yaw)\n"
"\n"
"uint8 motion\n"
"\n"
"# Positional information (some things may be ignored, see above)\n"
"geometry_msgs/Point position\n"
"float32 yaw\n"
"\n"
"# Velocity information (some things may be ignored, see above)\n"
"# Goal will act as \"setpoint\" if all velocities are ==0, values of <0 will be rejected\n"
"# If all velocities are ==0, goal will imidiately be finished if not using \"wait_for_convergence\"\n"
"# For multiple-directional motions (e.g. goto: motion in x/y/z/yaw), the slowest motion will\n"
"# be used to coordinate the motion such that all motions finish at the same point in time\n"
"float32 velocity_vertical			# Speed to ascend and descent\n"
"float32 velocity_horizontal			# Speed to translate\n"
"float32 yawrate						# Speed to rotate\n"
"\n"
"# Convergence information (wait until at location before marking 'complete')\n"
"# If enabled, radius and range values of <=0 will be rejected\n"
"# Note: Landing motions will do not accept \"wait_for_convergence\", but instead will continue\n"
"#		landing until the action is either cancelled or the UAV is disarmed\n"
"bool wait_for_convergence			# Enable \"wait for convergence\"\n"
"float32 position_radius				# Positional radius around final location (bubble waypoint)\n"
"float32 yaw_range					# Angular range around final direction (direction wedge)\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FlightMotionActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::spar_msgs::FlightMotionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPAR_MSGS_MESSAGE_FLIGHTMOTIONACTIONGOAL_H
