import math
import numpy as np
import rospy
from std_msgs.msg import Header
from std_msgs.msg import Float64
import roslib 
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from geometry_msgs.msg import Point





def move_angles_(theta1, theta2, theta3, theta4, theta5):
    
    #armo el publisher
    pub_points = rospy.Publisher('/scorbot/trajectory_controller/command', JointTrajectory, queue_size=10)
    #pos y vel para cada articulacion
    posvel1 = [theta1, 0.5]
    posvel2 = [theta2, 1.0]
    posvel3 = [theta3, 0.7]
    posvel4 = [theta4, 0.2]
    posvel5 = [theta5, 0.9]
    
    #armo el punto
    point = JointTrajectoryPoint()
    point.positions = [posvel1[0], posvel2[0], posvel3[0], posvel4[0], posvel5[0]]
    point.velocities =  [posvel1[1], posvel2[1], posvel3[1], posvel4[1], posvel5[1]]
    #es un solo punto
    points = [point]
    #armo el mensaje
    msg = JointTrajectory()
    msg.points = points
    msg.joint_names = ["base","shoulder","elbow","pitch","roll"]
    #publico
    pub_points.publish(msg)
    


def jointStatesCallback(msg):
  #global currentJointState
  #currentJointState = msg
  #Point m = msg
  print (msg)



if __name__ == '__main__':

    try:
        
        rospy.init_node('simple_angle_mover')
        rate = rospy.Rate(10)
        move_angles_ (20.0,20.0,30.0,40.0,50.0)
        rate.sleep()
       
        
    except rospy.ROSInterruptException:
        pass