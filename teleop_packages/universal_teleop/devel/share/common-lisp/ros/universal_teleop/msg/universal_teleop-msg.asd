
(cl:in-package :asdf)

(defsystem "universal_teleop-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "Control" :depends-on ("_package_Control"))
    (:file "_package_Control" :depends-on ("_package"))
    (:file "Event" :depends-on ("_package_Event"))
    (:file "_package_Event" :depends-on ("_package"))
  ))