; Auto-generated. Do not edit!


(cl:in-package keyboard-msg)


;//! \htmlinclude Key.msg.html

(cl:defclass <Key> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (code
    :reader code
    :initarg :code
    :type cl:fixnum
    :initform 0)
   (modifiers
    :reader modifiers
    :initarg :modifiers
    :type cl:fixnum
    :initform 0))
)

(cl:defclass Key (<Key>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Key>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Key)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name keyboard-msg:<Key> is deprecated: use keyboard-msg:Key instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <Key>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keyboard-msg:header-val is deprecated.  Use keyboard-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'code-val :lambda-list '(m))
(cl:defmethod code-val ((m <Key>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keyboard-msg:code-val is deprecated.  Use keyboard-msg:code instead.")
  (code m))

(cl:ensure-generic-function 'modifiers-val :lambda-list '(m))
(cl:defmethod modifiers-val ((m <Key>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader keyboard-msg:modifiers-val is deprecated.  Use keyboard-msg:modifiers instead.")
  (modifiers m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Key>) ostream)
  "Serializes a message object of type '<Key>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'code)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'code)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'modifiers)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'modifiers)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Key>) istream)
  "Deserializes a message object of type '<Key>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'code)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'code)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'modifiers)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'modifiers)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Key>)))
  "Returns string type for a message object of type '<Key>"
  "keyboard/Key")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Key)))
  "Returns string type for a message object of type 'Key"
  "keyboard/Key")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Key>)))
  "Returns md5sum for a message object of type '<Key>"
  "e8ad7123b39ae44d2e960e2f32be99e1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Key)))
  "Returns md5sum for a message object of type 'Key"
  "e8ad7123b39ae44d2e960e2f32be99e1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Key>)))
  "Returns full string definition for message of type '<Key>"
  (cl:format cl:nil "Header header~%uint16 code~%uint16 modifiers~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Key)))
  "Returns full string definition for message of type 'Key"
  (cl:format cl:nil "Header header~%uint16 code~%uint16 modifiers~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Key>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     2
     2
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Key>))
  "Converts a ROS message object to a list"
  (cl:list 'Key
    (cl:cons ':header (header msg))
    (cl:cons ':code (code msg))
    (cl:cons ':modifiers (modifiers msg))
))
