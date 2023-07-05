#!/usr/bin/env python3

import math
import numpy as np
import rospy
from std_msgs.msg import Float64
import roslib 
from control_msgs.msg import JointControllerState
from geometry_msgs.msg import Point

# Kinematics based on techreport "Drawing using the Scorbot-ER VII Manipulator Arm"  
# by Luke Cole, Adam Ferenc Nagy-Sochacki and Jonathan Symonds (2007)
# See: https://www.lukecole.name/doc/reports/drawing_using_the_scorbot_manipulator_arm.pdf

#scorbot measurements in meters
a1 = 0.043 #horizontal distance from base joint to shoulder joint (1 to 2)
a2 = 0.300 #distance from shoulder joint to elbow joint (2 to 3) 
a3 = 0.250 #distance from elbow to wrist joint (3 to 4)
db = 0.200 #distance from base's base to base joint
d1 = 0.170 #vertical distance from base joint to shoulder joint (1 to 2)
d5 = 0.197 #distance from wrist joint to end efector

# (θ1,θ2,θ3,θ4) Input angles are expressed in radians
# (x,y,z) output position is expressed in millimeters

def truncate_5_decimals(f):
    res = f*(10**5)
    res = math.trunc(res)
    res = res/(10**5)
    return res

def direct_kinematics_position (theta1, theta2, theta3, theta4, theta5):
    
    # theta1 (θ1) = base rotation angle (1)
    # theta2 (θ2) = shoulder/body rotation angle (2)
    # theta3 (θ3) = elbow/arm rotation angle (3)
    # theta4 (θ4) = pitch/forearm rotation angle (4)
    # theta5 (θ5) = roll angle

    c1 = math.cos (theta1)
    c2 = math.cos (theta2)
    c23 = math.cos (theta2 + theta3)
    c234 = math.cos (theta2 + theta3 + theta4)

    s1 = math.sin (theta1)
    s2 = math.sin (theta2)
    s23 = math.sin (theta2 + theta3)
    s234 = math.sin (theta2 + theta3 + theta4)

    # x:
    #Tb-e
    x = c1*(a1+a2*c2+a3*c23+d5*c234)
    #T0-e
    #x = -s1*(a1+a2*c2+a3*c23+d5*c234)
     
    # y:
    #Tb-e
    y = -s1*(a1+a2*c2+a3*c23+d5*c234)
    #T0-e
    #y = c1*(a1+a2*c2+a3*c23+d5*c234)
    
    # z:
    #Tb-e
    z = db+d1+a2*s2+a3*s23+d5*s234
    #T0-e
    #z = d1+a2*s2+a3*s23+d5*s234

    result = []
    result.append(x)
    result.append(y)
    result.append(z)
    return result


# It is needed the rotation matrix for obtaining the yaw, pitch and roll angles (Euler angles).
# Rotation is the same for the wrist and the scorbot end effector.
def direct_kinematics_orientation (theta1, theta2, theta3, theta4, theta5):
    # r11 r12 r13
    # r21 r22 r23
    # r31 r32 r33

    result = []
    # Yaw: atan (r21/r11) --> yaw = math.atan ((s1*c234)/(c1*c234)) --> yaw = math.atan (s1/c1) --> yaw = theta1
    yaw = theta1
    # Pitch: atan (-r31 / sqrt (r32*r32 + r33*r33)) --> pitch = math.atan (s234 / sqrt (cos234*cos234)+0) --> 
    #        pitch = math.atan (s234 / cos234) --> pitch = theta2+theta3+theta4
    pitch = theta2 + theta3 + theta4
    # Roll: atan (r32/r33) --> There is no roll because r33 == 0
    roll = theta5
    result.append(yaw)
    result.append(pitch)
    result.append(roll)
    return result

def inverse_kinematics(x,y,z):
    result = []

    theta_1 = -np.arctan2(y,x)

    #Horizontal Distance
    h_d = np.sqrt(x**2+y**2)-a1-d5
    x_y_sqrt_pow = math.sqrt(x**2+y**2)
    #Vertical Distance
    v_d = z-(d1+db)
    theta_3 = np.arccos(truncate_5_decimals((h_d**2 + v_d**2 - a2**2 - a3**2)/(2*a2*a3)))

    alpha = np.arctan2(a3*np.sin(theta_3), a2+a3*np.cos(theta_3))
    beta = np.arctan2(v_d,h_d)
    theta_2 = beta - alpha

    #theta_4 bajo la condición de que tiene que el efector tiene que estár paralelo a la base
    theta_4 = -theta_2 - theta_3

    result.append(theta_1)
    result.append(theta_2)
    result.append(theta_3)
    result.append(theta_4)
    result.append(0) #asumimos rotacion 0 = theta_5


    return result



def move_angles_(theta1, theta2, theta3, theta4, theta5):
    pub_base = rospy.Publisher('/scorbot/base_position_controller/command', Float64, queue_size=10)
    pub_shoulder = rospy.Publisher('/scorbot/shoulder_position_controller/command', Float64, queue_size=10)
    pub_elbow = rospy.Publisher('/scorbot/elbow_position_controller/command', Float64, queue_size=10)
    pub_pitch = rospy.Publisher('/scorbot/pitch_position_controller/command', Float64, queue_size=10)
    pub_roll = rospy.Publisher('/scorbot/roll_position_controller/command', Float64, queue_size=10)
    pub_gripper_finger_left = rospy.Publisher('/scorbot/gripper_left_controller/command', Float64, queue_size=10)
    pub_gripper_finger_right = rospy.Publisher('/scorbot/gripper_right_controller/command', Float64, queue_size=10)
    # Publish angles:
    pub_base.publish (theta1)
    pub_shoulder.publish (theta2)
    pub_elbow.publish (theta3)
    pub_pitch.publish (theta4)
    pub_roll.publish (theta5)    
    pub_gripper_finger_left.publish (-1)
    pub_gripper_finger_right.publish (-1)


def jointStatesCallback(msg):
  #global currentJointState
  #currentJointState = msg
  #Point m = msg
  print (msg)


def read_position ():
    #sub_base = rospy.Subscriber('/scorbot/base_position_controller/command', JointControllerState, self.get_joint_position)
    sub = rospy.Subscriber("/scorbot/joint_state_controller", JointControllerState, jointStatesCallback)
    #print (sub_base)
    sub_shoulder = rospy.Subscriber('/scorbot/shoulder_position_controller/command', JointControllerState, self.get_joint_position)
    #print (sub_shoulder)



if __name__ == '__main__':

    try:
        mode = input('test direct or inverse kinematics? : ')
        if mode == 'direct' :

            j1a = 0  #x0 = 0.8119999999   # 0.812 gives error (singular point: working area limit)
            j2a = 0  #y0 = 0
            j3a = 0  #z0 = 0.358
            j4a = 0
            j5a = 0
                                        # 01 solution
            #j1b = 1                      #x1 = 0.750
            #j2b = -0.5401742497052632    #y1 = 0
            #j3b = 0.9355365085259083     #z1 = 0.300
            #j4b = -0.39536225882064513
            #j5b = 0.5   
        
            j1b = np.pi/4
            j2b = -np.pi/4
            j3b = np.pi/2
            j4b = -np.pi/4
            j5b = np.pi/2
            

            print ("Begin example ...")

            data0 = direct_kinematics_position (j1a, j2a,j3a,j4a,j5a)
            print ( 'Scorbot end-effector (x,y,z) position for angles: theta1: ' + str(j1a) + ' theta2: ' + str(j2a) + ' theta3: ' + str(-j3a) + ' theta4: ' + str(-j4a) + ' theta5: ' + str(j5a))
            print (data0)
            data0 = direct_kinematics_orientation (j1a, j2a,j3a,j4a,j5a)
            print ( 'Scorbot end-effector (x,y,z) orientation for angles: theta1: ' + str(j1a) + ' theta2: ' + str(j2a) + ' theta3: ' + str(-j3a) + ' theta4: ' + str(-j4a) + ' theta5: ' + str(j5a))
            print (data0)
            print ()

            data1 = direct_kinematics_position (j1b, j2b,j3b,j4b,j5b)
            print ( 'Scorbot end-effector (x,y,z) position for angles: theta1: ' + str(j1b) + ' theta2: ' + str(j2b) + ' theta3: ' + str(-j3b) + ' theta4: ' + str(-j4b)  + ' theta5: ' + str(j5b))
            print (data1)
            data1 = direct_kinematics_orientation (j1b, j2b,j3b,j4b,j5b)
            print ( 'Scorbot end-effector (x,y,z) orientation for angles: theta1: ' + str(j1b) + ' theta2: ' + str(j2b) + ' theta3: ' + str(-j3b) + ' theta4: ' + str(-j4b) + ' theta5: ' + str(j5b))
            print (data1)
            print ()        

            rospy.init_node('simple_angle_mover')
            rate = rospy.Rate(0.2)

            while not rospy.is_shutdown():
                move_angles_ (j1a,j2a,j3a,j4a,j5a)
                rate.sleep()
                #read_position()
                move_angles_ (j1b,j2b,j3b,j4b,j5b) 
                rate.sleep()  
                #read_position()

        elif mode == 'inverse' :
            xa = 0.790
            ya = 0.000
            za = 0.370
            joint_angles_a = inverse_kinematics(xa, ya, za)
            #should be all 0
            print ( 'Scorbot angles for end-effector (x,y,z): \n x: ' + str(xa) + ' y: ' + str(ya) + ' z: ' + str(za))
            print(joint_angles_a)

            xb = 0.400
            yb = -0.460
            zb = 0.385
            joint_angles_b = inverse_kinematics(xb,yb,zb)
            #should be something like pi/4 , -pi/4, pi/2, -pi/4, 0
            print ( 'Scorbot angles for end-effector (x,y,z): \n x: ' + str(xb) + ' y: ' + str(yb) + ' z: ' + str(zb))
            print(joint_angles_b)

            rospy.init_node('simple_angle_mover')
            rate = rospy.Rate(0.2)

            while not rospy.is_shutdown():
                move_angles_ (joint_angles_a[0],joint_angles_a[1],joint_angles_a[2],joint_angles_a[3],joint_angles_a[4])
                rate.sleep()
                #read_position()
                move_angles_ (joint_angles_b[0],joint_angles_b[1],joint_angles_b[2],joint_angles_b[3],joint_angles_b[4]) 
                rate.sleep()  
                #read_position()               

    except rospy.ROSInterruptException:
        pass


