// Auto-generated. Do not edit!

// (in-package scorbot.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class JointVelocities {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.joint_velocities = null;
      this.scaled_flag = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('joint_velocities')) {
        this.joint_velocities = initObj.joint_velocities
      }
      else {
        this.joint_velocities = [];
      }
      if (initObj.hasOwnProperty('scaled_flag')) {
        this.scaled_flag = initObj.scaled_flag
      }
      else {
        this.scaled_flag = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type JointVelocities
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [joint_velocities]
    bufferOffset = _arraySerializer.float32(obj.joint_velocities, buffer, bufferOffset, null);
    // Serialize message field [scaled_flag]
    bufferOffset = _serializer.bool(obj.scaled_flag, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type JointVelocities
    let len;
    let data = new JointVelocities(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [joint_velocities]
    data.joint_velocities = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [scaled_flag]
    data.scaled_flag = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += 4 * object.joint_velocities.length;
    return length + 5;
  }

  static datatype() {
    // Returns string type for a message object
    return 'scorbot/JointVelocities';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ca93a6f07f7d605402dc93ee68f037fe';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header header
    float32[] joint_velocities
    bool scaled_flag
    
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new JointVelocities(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.joint_velocities !== undefined) {
      resolved.joint_velocities = msg.joint_velocities;
    }
    else {
      resolved.joint_velocities = []
    }

    if (msg.scaled_flag !== undefined) {
      resolved.scaled_flag = msg.scaled_flag;
    }
    else {
      resolved.scaled_flag = false
    }

    return resolved;
    }
};

module.exports = JointVelocities;
