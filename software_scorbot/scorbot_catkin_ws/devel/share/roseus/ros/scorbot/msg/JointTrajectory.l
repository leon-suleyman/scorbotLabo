;; Auto-generated. Do not edit!


(when (boundp 'scorbot::JointTrajectory)
  (if (not (find-package "SCORBOT"))
    (make-package "SCORBOT"))
  (shadow 'JointTrajectory (find-package "SCORBOT")))
(unless (find-package "SCORBOT::JOINTTRAJECTORY")
  (make-package "SCORBOT::JOINTTRAJECTORY"))

(in-package "ROS")
;;//! \htmlinclude JointTrajectory.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass scorbot::JointTrajectory
  :super ros::object
  :slots (_header _points ))

(defmethod scorbot::JointTrajectory
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:points __points) (make-array 0 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _header __header)
   (setq _points __points)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:points
   (&optional __points)
   (if __points (setq _points __points)) _points)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; int32[] _points
    (* 4    (length _points)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; int32[] _points
     (write-long (length _points) s)
     (dotimes (i (length _points))
       (write-long (elt _points i) s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; int32[] _points
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _points (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _points i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get scorbot::JointTrajectory :md5sum-) "ff3fd76c56194eb1ef5652fa7b44a08a")
(setf (get scorbot::JointTrajectory :datatype-) "scorbot/JointTrajectory")
(setf (get scorbot::JointTrajectory :definition-)
      "Header header
int32[] points # num_juntas x points

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



(provide :scorbot/JointTrajectory "ff3fd76c56194eb1ef5652fa7b44a08a")


