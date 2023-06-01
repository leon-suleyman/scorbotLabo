;; Auto-generated. Do not edit!


(when (boundp 'universal_teleop::Control)
  (if (not (find-package "UNIVERSAL_TELEOP"))
    (make-package "UNIVERSAL_TELEOP"))
  (shadow 'Control (find-package "UNIVERSAL_TELEOP")))
(unless (find-package "UNIVERSAL_TELEOP::CONTROL")
  (make-package "UNIVERSAL_TELEOP::CONTROL"))

(in-package "ROS")
;;//! \htmlinclude Control.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass universal_teleop::Control
  :super ros::object
  :slots (_header _control _value ))

(defmethod universal_teleop::Control
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:control __control) "")
    ((:value __value) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _control (string __control))
   (setq _value (float __value))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:control
   (&optional __control)
   (if __control (setq _control __control)) _control)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _control
    4 (length _control)
    ;; float32 _value
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; string _control
       (write-long (length _control) s) (princ _control s)
     ;; float32 _value
       (sys::poke _value (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _control
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _control (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; float32 _value
     (setq _value (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get universal_teleop::Control :md5sum-) "e96dab30e0ce0490fc168ec7e380bd1f")
(setf (get universal_teleop::Control :datatype-) "universal_teleop/Control")
(setf (get universal_teleop::Control :definition-)
      "Header header
string control
float32 value

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



(provide :universal_teleop/Control "e96dab30e0ce0490fc168ec7e380bd1f")


