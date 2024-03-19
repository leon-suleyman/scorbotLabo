;; Auto-generated. Do not edit!


(when (boundp 'sim_scorbot_master::JointVelocities)
  (if (not (find-package "SIM_SCORBOT_MASTER"))
    (make-package "SIM_SCORBOT_MASTER"))
  (shadow 'JointVelocities (find-package "SIM_SCORBOT_MASTER")))
(unless (find-package "SIM_SCORBOT_MASTER::JOINTVELOCITIES")
  (make-package "SIM_SCORBOT_MASTER::JOINTVELOCITIES"))

(in-package "ROS")
;;//! \htmlinclude JointVelocities.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass sim_scorbot_master::JointVelocities
  :super ros::object
  :slots (_header _joint_velocities ))

(defmethod sim_scorbot_master::JointVelocities
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:joint_velocities __joint_velocities) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _header __header)
   (setq _joint_velocities __joint_velocities)
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
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float32[] _joint_velocities
    (* 4    (length _joint_velocities)) 4
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
   ;;
   self)
  )

(setf (get sim_scorbot_master::JointVelocities :md5sum-) "995673f17373d5fdcbb63cc182afba57")
(setf (get sim_scorbot_master::JointVelocities :datatype-) "sim_scorbot_master/JointVelocities")
(setf (get sim_scorbot_master::JointVelocities :definition-)
      "Header header
float32[] joint_velocities

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



(provide :sim_scorbot_master/JointVelocities "995673f17373d5fdcbb63cc182afba57")


