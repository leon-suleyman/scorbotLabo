;; Auto-generated. Do not edit!


(when (boundp 'universal_teleop::Event)
  (if (not (find-package "UNIVERSAL_TELEOP"))
    (make-package "UNIVERSAL_TELEOP"))
  (shadow 'Event (find-package "UNIVERSAL_TELEOP")))
(unless (find-package "UNIVERSAL_TELEOP::EVENT")
  (make-package "UNIVERSAL_TELEOP::EVENT"))

(in-package "ROS")
;;//! \htmlinclude Event.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass universal_teleop::Event
  :super ros::object
  :slots (_header _event _state ))

(defmethod universal_teleop::Event
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:event __event) "")
    ((:state __state) nil)
    )
   (send-super :init)
   (setq _header __header)
   (setq _event (string __event))
   (setq _state __state)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:event
   (&optional __event)
   (if __event (setq _event __event)) _event)
  (:state
   (&optional (__state :null))
   (if (not (eq __state :null)) (setq _state __state)) _state)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _event
    4 (length _event)
    ;; bool _state
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; string _event
       (write-long (length _event) s) (princ _event s)
     ;; bool _state
       (if _state (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _event
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _event (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; bool _state
     (setq _state (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get universal_teleop::Event :md5sum-) "7becd39cf7f617d2c6ea4e4c91a2deac")
(setf (get universal_teleop::Event :datatype-) "universal_teleop/Event")
(setf (get universal_teleop::Event :definition-)
      "Header header
string event
bool state

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



(provide :universal_teleop/Event "7becd39cf7f617d2c6ea4e4c91a2deac")


