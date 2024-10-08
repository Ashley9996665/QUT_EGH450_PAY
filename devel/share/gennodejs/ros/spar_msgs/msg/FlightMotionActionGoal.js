// Auto-generated. Do not edit!

// (in-package spar_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let FlightMotionGoal = require('./FlightMotionGoal.js');
let std_msgs = _finder('std_msgs');
let actionlib_msgs = _finder('actionlib_msgs');

//-----------------------------------------------------------

class FlightMotionActionGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.goal_id = null;
      this.goal = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('goal_id')) {
        this.goal_id = initObj.goal_id
      }
      else {
        this.goal_id = new actionlib_msgs.msg.GoalID();
      }
      if (initObj.hasOwnProperty('goal')) {
        this.goal = initObj.goal
      }
      else {
        this.goal = new FlightMotionGoal();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type FlightMotionActionGoal
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [goal_id]
    bufferOffset = actionlib_msgs.msg.GoalID.serialize(obj.goal_id, buffer, bufferOffset);
    // Serialize message field [goal]
    bufferOffset = FlightMotionGoal.serialize(obj.goal, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type FlightMotionActionGoal
    let len;
    let data = new FlightMotionActionGoal(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [goal_id]
    data.goal_id = actionlib_msgs.msg.GoalID.deserialize(buffer, bufferOffset);
    // Deserialize message field [goal]
    data.goal = FlightMotionGoal.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += actionlib_msgs.msg.GoalID.getMessageSize(object.goal_id);
    return length + 50;
  }

  static datatype() {
    // Returns string type for a message object
    return 'spar_msgs/FlightMotionActionGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '74f6863cc63ccf58f36ff50fd69b7c68';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    Header header
    actionlib_msgs/GoalID goal_id
    FlightMotionGoal goal
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    ================================================================================
    MSG: actionlib_msgs/GoalID
    # The stamp should store the time at which this goal was requested.
    # It is used by an action server when it tries to preempt all
    # goals that were requested before a certain time
    time stamp
    
    # The id provides a way to associate feedback and
    # result message with specific goal requests. The id
    # specified must be unique.
    string id
    
    
    ================================================================================
    MSG: spar_msgs/FlightMotionGoal
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # Goal
    
    # Motion to execute
    uint8 MOTION_STOP = 0				# Stop in current place (ignores x/y/z/yaw/convergence)
    uint8 MOTION_GOTO = 1				# Fly to location (x/y/z/yaw)
    uint8 MOTION_GOTO_POS = 2			# Fly to location (x/y/z, maintain current yaw)
    uint8 MOTION_GOTO_YAW = 3			# Rotate at current location (ignores x/y/z)
    uint8 MOTION_TAKEOFF = 4			# Performs a take-off at current location to hight 'z' (ignores x/y/yaw)
    uint8 MOTION_LAND = 5				# Performs a landing at current location at vertical speed (ignores x/y/z/yaw)
    
    uint8 motion
    
    # Positional information (some things may be ignored, see above)
    geometry_msgs/Point position
    float32 yaw
    
    # Velocity information (some things may be ignored, see above)
    # Goal will act as "setpoint" if all velocities are ==0, values of <0 will be rejected
    # If all velocities are ==0, goal will imidiately be finished if not using "wait_for_convergence"
    # For multiple-directional motions (e.g. goto: motion in x/y/z/yaw), the slowest motion will
    # be used to coordinate the motion such that all motions finish at the same point in time
    float32 velocity_vertical			# Speed to ascend and descent
    float32 velocity_horizontal			# Speed to translate
    float32 yawrate						# Speed to rotate
    
    # Convergence information (wait until at location before marking 'complete')
    # If enabled, radius and range values of <=0 will be rejected
    # Note: Landing motions will do not accept "wait_for_convergence", but instead will continue
    #		landing until the action is either cancelled or the UAV is disarmed
    bool wait_for_convergence			# Enable "wait for convergence"
    float32 position_radius				# Positional radius around final location (bubble waypoint)
    float32 yaw_range					# Angular range around final direction (direction wedge)
    
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new FlightMotionActionGoal(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.goal_id !== undefined) {
      resolved.goal_id = actionlib_msgs.msg.GoalID.Resolve(msg.goal_id)
    }
    else {
      resolved.goal_id = new actionlib_msgs.msg.GoalID()
    }

    if (msg.goal !== undefined) {
      resolved.goal = FlightMotionGoal.Resolve(msg.goal)
    }
    else {
      resolved.goal = new FlightMotionGoal()
    }

    return resolved;
    }
};

module.exports = FlightMotionActionGoal;
