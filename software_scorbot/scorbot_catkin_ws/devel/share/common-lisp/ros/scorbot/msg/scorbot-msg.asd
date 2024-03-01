
(cl:in-package :asdf)

(defsystem "scorbot-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "JointTrajectory" :depends-on ("_package_JointTrajectory"))
    (:file "_package_JointTrajectory" :depends-on ("_package"))
    (:file "JointVelocities" :depends-on ("_package_JointVelocities"))
    (:file "_package_JointVelocities" :depends-on ("_package"))
    (:file "TrajectoryPoint" :depends-on ("_package_TrajectoryPoint"))
    (:file "_package_TrajectoryPoint" :depends-on ("_package"))
  ))