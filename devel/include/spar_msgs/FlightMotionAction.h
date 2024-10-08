// Generated by gencpp from file spar_msgs/FlightMotionAction.msg
// DO NOT EDIT!


#ifndef SPAR_MSGS_MESSAGE_FLIGHTMOTIONACTION_H
#define SPAR_MSGS_MESSAGE_FLIGHTMOTIONACTION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <spar_msgs/FlightMotionActionGoal.h>
#include <spar_msgs/FlightMotionActionResult.h>
#include <spar_msgs/FlightMotionActionFeedback.h>

namespace spar_msgs
{
template <class ContainerAllocator>
struct FlightMotionAction_
{
  typedef FlightMotionAction_<ContainerAllocator> Type;

  FlightMotionAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  FlightMotionAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::spar_msgs::FlightMotionActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::spar_msgs::FlightMotionActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;





  typedef boost::shared_ptr< ::spar_msgs::FlightMotionAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spar_msgs::FlightMotionAction_<ContainerAllocator> const> ConstPtr;

}; // struct FlightMotionAction_

typedef ::spar_msgs::FlightMotionAction_<std::allocator<void> > FlightMotionAction;

typedef boost::shared_ptr< ::spar_msgs::FlightMotionAction > FlightMotionActionPtr;
typedef boost::shared_ptr< ::spar_msgs::FlightMotionAction const> FlightMotionActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spar_msgs::FlightMotionAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spar_msgs::FlightMotionAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::spar_msgs::FlightMotionAction_<ContainerAllocator1> & lhs, const ::spar_msgs::FlightMotionAction_<ContainerAllocator2> & rhs)
{
  return lhs.action_goal == rhs.action_goal &&
    lhs.action_result == rhs.action_result &&
    lhs.action_feedback == rhs.action_feedback;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::spar_msgs::FlightMotionAction_<ContainerAllocator1> & lhs, const ::spar_msgs::FlightMotionAction_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace spar_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::spar_msgs::FlightMotionAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spar_msgs::FlightMotionAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spar_msgs::FlightMotionAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spar_msgs::FlightMotionAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spar_msgs::FlightMotionAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spar_msgs::FlightMotionAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spar_msgs::FlightMotionAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4b0de8f0c37c614e42262cd2ed0d6a66";
  }

  static const char* value(const ::spar_msgs::FlightMotionAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4b0de8f0c37c614eULL;
  static const uint64_t static_value2 = 0x42262cd2ed0d6a66ULL;
};

template<class ContainerAllocator>
struct DataType< ::spar_msgs::FlightMotionAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spar_msgs/FlightMotionAction";
  }

  static const char* value(const ::spar_msgs::FlightMotionAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spar_msgs::FlightMotionAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"FlightMotionActionGoal action_goal\n"
"FlightMotionActionResult action_result\n"
"FlightMotionActionFeedback action_feedback\n"
"\n"
"================================================================================\n"
"MSG: spar_msgs/FlightMotionActionGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
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
"\n"
"================================================================================\n"
"MSG: spar_msgs/FlightMotionActionResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"FlightMotionResult result\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalStatus\n"
"GoalID goal_id\n"
"uint8 status\n"
"uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n"
"uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n"
"uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n"
"                            #   and has since completed its execution (Terminal State)\n"
"uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n"
"uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n"
"                            #    to some failure (Terminal State)\n"
"uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n"
"                            #    because the goal was unattainable or invalid (Terminal State)\n"
"uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n"
"                            #    and has not yet completed execution\n"
"uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n"
"                            #    but the action server has not yet confirmed that the goal is canceled\n"
"uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n"
"                            #    and was successfully cancelled (Terminal State)\n"
"uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n"
"                            #    sent over the wire by an action server\n"
"\n"
"#Allow for the user to associate a string with GoalStatus for debugging\n"
"string text\n"
"\n"
"\n"
"================================================================================\n"
"MSG: spar_msgs/FlightMotionResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"# Result\n"
"\n"
"geometry_msgs/Point final_position	# Final commanded position\n"
"float32 final_yaw					# Final commanded yaw\n"
"\n"
"\n"
"================================================================================\n"
"MSG: spar_msgs/FlightMotionActionFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"FlightMotionFeedback feedback\n"
"\n"
"================================================================================\n"
"MSG: spar_msgs/FlightMotionFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"# Feedback\n"
"\n"
"float32 progress					# Progress 0..1 from start to goal\n"
"bool waiting_for_convergence		# Mark to show if waiting for convergence\n"
"\n"
"geometry_msgs/Point goal_position	# Current goal position\n"
"float32 goal_yaw					# Current goal yaw\n"
"\n"
;
  }

  static const char* value(const ::spar_msgs::FlightMotionAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spar_msgs::FlightMotionAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FlightMotionAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spar_msgs::FlightMotionAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spar_msgs::FlightMotionAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::spar_msgs::FlightMotionActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::spar_msgs::FlightMotionActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::spar_msgs::FlightMotionActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPAR_MSGS_MESSAGE_FLIGHTMOTIONACTION_H
