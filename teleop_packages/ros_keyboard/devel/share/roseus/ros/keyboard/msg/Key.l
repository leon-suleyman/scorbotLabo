;; Auto-generated. Do not edit!


(when (boundp 'keyboard::Key)
  (if (not (find-package "KEYBOARD"))
    (make-package "KEYBOARD"))
  (shadow 'Key (find-package "KEYBOARD")))
(unless (find-package "KEYBOARD::KEY")
  (make-package "KEYBOARD::KEY"))

(in-package "ROS")
;;//! \htmlinclude Key.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass keyboard::Key
  :super ros::object
  :slots (_header _code _modifiers ))

(defmethod keyboard::Key
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:code __code) 0)
    ((:modifiers __modifiers) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _code (round __code))
   (setq _modifiers (round __modifiers))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:code
   (&optional __code)
   (if __code (setq _code __code)) _code)
  (:modifiers
   (&optional __modifiers)
   (if __modifiers (setq _modifiers __modifiers)) _modifiers)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint16 _code
    2
    ;; uint16 _modifiers
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint16 _code
       (write-word _code s)
     ;; uint16 _modifiers
       (write-word _modifiers s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint16 _code
     (setq _code (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _modifiers
     (setq _modifiers (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get keyboard::Key :md5sum-) "e8ad7123b39ae44d2e960e2f32be99e1")
(setf (get keyboard::Key :datatype-) "keyboard/Key")
(setf (get keyboard::Key :definition-)
      "Header header
uint16 code
uint16 modifiers

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



(provide :keyboard/Key "e8ad7123b39ae44d2e960e2f32be99e1")


