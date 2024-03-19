; Auto-generated. Do not edit!


(cl:in-package sim_scorbot_master-msg)


;//! \htmlinclude JointVelocities.msg.html

(cl:defclass <JointVelocities> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (joint_velocities
    :reader joint_velocities
    :initarg :joint_velocities
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass JointVelocities (<JointVelocities>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <JointVelocities>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'JointVelocities)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name sim_scorbot_master-msg:<JointVelocities> is deprecated: use sim_scorbot_master-msg:JointVelocities instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <JointVelocities>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sim_scorbot_master-msg:header-val is deprecated.  Use sim_scorbot_master-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'joint_velocities-val :lambda-list '(m))
(cl:defmethod joint_velocities-val ((m <JointVelocities>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sim_scorbot_master-msg:joint_velocities-val is deprecated.  Use sim_scorbot_master-msg:joint_velocities instead.")
  (joint_velocities m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <JointVelocities>) ostream)
  "Serializes a message object of type '<JointVelocities>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'joint_velocities))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'joint_velocities))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <JointVelocities>) istream)
  "Deserializes a message object of type '<JointVelocities>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'joint_velocities) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'joint_velocities)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<JointVelocities>)))
  "Returns string type for a message object of type '<JointVelocities>"
  "sim_scorbot_master/JointVelocities")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'JointVelocities)))
  "Returns string type for a message object of type 'JointVelocities"
  "sim_scorbot_master/JointVelocities")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<JointVelocities>)))
  "Returns md5sum for a message object of type '<JointVelocities>"
  "995673f17373d5fdcbb63cc182afba57")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'JointVelocities)))
  "Returns md5sum for a message object of type 'JointVelocities"
  "995673f17373d5fdcbb63cc182afba57")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<JointVelocities>)))
  "Returns full string definition for message of type '<JointVelocities>"
  (cl:format cl:nil "Header header~%float32[] joint_velocities~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'JointVelocities)))
  "Returns full string definition for message of type 'JointVelocities"
  (cl:format cl:nil "Header header~%float32[] joint_velocities~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <JointVelocities>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'joint_velocities) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <JointVelocities>))
  "Converts a ROS message object to a list"
  (cl:list 'JointVelocities
    (cl:cons ':header (header msg))
    (cl:cons ':joint_velocities (joint_velocities msg))
))
