;; Auto-generated. Do not edit!


(when (boundp 'sim_scorbot_master::TrajectoryPoint)
  (if (not (find-package "SIM_SCORBOT_MASTER"))
    (make-package "SIM_SCORBOT_MASTER"))
  (shadow 'TrajectoryPoint (find-package "SIM_SCORBOT_MASTER")))
(unless (find-package "SIM_SCORBOT_MASTER::TRAJECTORYPOINT")
  (make-package "SIM_SCORBOT_MASTER::TRAJECTORYPOINT"))

(in-package "ROS")
;;//! \htmlinclude TrajectoryPoint.msg.html


(defclass sim_scorbot_master::TrajectoryPoint
  :super ros::object
  :slots (_positions ))

(defmethod sim_scorbot_master::TrajectoryPoint
  (:init
   (&key
    ((:positions __positions) (make-array 0 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _positions __positions)
   self)
  (:positions
   (&optional __positions)
   (if __positions (setq _positions __positions)) _positions)
  (:serialization-length
   ()
   (+
    ;; int32[] _positions
    (* 4    (length _positions)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32[] _positions
     (write-long (length _positions) s)
     (dotimes (i (length _positions))
       (write-long (elt _positions i) s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32[] _positions
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _positions (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _positions i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get sim_scorbot_master::TrajectoryPoint :md5sum-) "a2a9139ca9bf4352767912894c0d0ece")
(setf (get sim_scorbot_master::TrajectoryPoint :datatype-) "sim_scorbot_master/TrajectoryPoint")
(setf (get sim_scorbot_master::TrajectoryPoint :definition-)
      "int32[] positions

")



(provide :sim_scorbot_master/TrajectoryPoint "a2a9139ca9bf4352767912894c0d0ece")


