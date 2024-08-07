;; Auto-generated. Do not edit!


(when (boundp 'scorbot::JointVelocities)
  (if (not (find-package "SCORBOT"))
    (make-package "SCORBOT"))
  (shadow 'JointVelocities (find-package "SCORBOT")))
(unless (find-package "SCORBOT::JOINTVELOCITIES")
  (make-package "SCORBOT::JOINTVELOCITIES"))

(in-package "ROS")
;;//! \htmlinclude JointVelocities.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass scorbot::JointVelocities
  :super ros::object
  :slots (_header _joint_velocities _scaled_flag ))

(defmethod scorbot::JointVelocities
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:joint_velocities __joint_velocities) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:scaled_flag __scaled_flag) nil)
    )
   (send-super :init)
   (setq _header __header)
   (setq _joint_velocities __joint_velocities)
   (setq _scaled_flag __scaled_flag)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:joint_velocities
   (&optional __joint_velocities)
   (if __joint_velocities (setq _joint_velocities __joint_velocities)) _joint_velocities)
  (:scaled_flag
   (&optional (__scaled_flag :null))
   (if (not (eq __scaled_flag :null)) (setq _scaled_flag __scaled_flag)) _scaled_flag)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float32[] _joint_velocities
    (* 4    (length _joint_velocities)) 4
    ;; bool _scaled_flag
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float32[] _joint_velocities
     (write-long (length _joint_velocities) s)
     (dotimes (i (length _joint_velocities))
       (sys::poke (elt _joint_velocities i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; bool _scaled_flag
       (if _scaled_flag (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float32[] _joint_velocities
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _joint_velocities (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _joint_velocities i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; bool _scaled_flag
     (setq _scaled_flag (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get scorbot::JointVelocities :md5sum-) "ca93a6f07f7d605402dc93ee68f037fe")
(setf (get scorbot::JointVelocities :datatype-) "scorbot/JointVelocities")
(setf (get scorbot::JointVelocities :definition-)
      "Header header
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

")



(provide :scorbot/JointVelocities "ca93a6f07f7d605402dc93ee68f037fe")


