

#include <ros/ros.h>
#include <std_msgs/String.h>
#include <std_msgs/Float64.h>
#include <iostream>
#include <fstream> 
#include <string>
#include <unistd.h>
#include <chrono>

#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>

#include <moveit_msgs/DisplayRobotState.h>
#include <moveit_msgs/DisplayTrajectory.h>

#include <moveit_msgs/AttachedCollisionObject.h>
#include <moveit_msgs/CollisionObject.h>

#include <moveit_visual_tools/moveit_visual_tools.h>

#include <control_msgs/FollowJointTrajectoryActionResult.h>

// The circle constant tau = 2*pi. One tau is one rotation in radians.
const double tau = 2 * M_PI;
int test_reps = 10;
int trajectory_index = 0;

std::vector<double> initial_joint_positions;
std::vector<double> first_pose;
std::vector<double> second_pose;

ros::Subscriber trayectory_sub;
ros::Publisher tolerance_pub, filename_pub;

void on_goal_reached(const control_msgs::FollowJointTrajectoryActionResultConstPtr &msg){

  control_msgs::FollowJointTrajectoryResult result = msg->result;
  //Cuando lleguemos bien al goal
    std::cout << "confirmada trayectoria terminada \n";
  if(result.error_code == result.SUCCESSFUL){
    //aumentamos el indice
    trajectory_index++;
    std::cout << "indice incrementado \n";

  }
}


int main(int argc, char** argv)
{
    ros::init(argc, argv, "testing_scorbot");
    ros::NodeHandle node_handle;

    // ROS spinning must be running for the MoveGroupInterface to get information
    // about the robot's state. One way to do this is to start an AsyncSpinner
    // beforehand.
    ros::AsyncSpinner spinner(1);

    std::cout << "incializado el nodo de testing \n";

    spinner.start();

    trayectory_sub = node_handle.subscribe("/arm_position_controller/follow_joint_trajectory/result", 1, &on_goal_reached);
    filename_pub = node_handle.advertise<std_msgs::String>("scorbot/params/filename", 1);
    tolerance_pub = node_handle.advertise<std_msgs::Float64>("scorbot/params/tolerance", 1);

    // MoveIt operates on sets of joints called "planning groups" and stores them in an object called
    // the `JointModelGroup`. Throughout MoveIt the terms "planning group" and "joint model group"
    // are used interchangeably.
    static const std::string PLANNING_GROUP = "arm_group";

    // The :planning_interface:`MoveGroupInterface` class can be easily
    // setup using just the name of the planning group you would like to control and plan for.
    moveit::planning_interface::MoveGroupInterface move_group_interface(PLANNING_GROUP);

    // We will use the :planning_interface:`PlanningSceneInterface`
    // class to add and remove collision objects in our "virtual world" scene
    moveit::planning_interface::PlanningSceneInterface planning_scene_interface;

    // Raw pointers are frequently used to refer to the planning group for improved performance.
    const moveit::core::JointModelGroup* joint_model_group =
        move_group_interface.getCurrentState()->getJointModelGroup(PLANNING_GROUP);

    namespace rvt = rviz_visual_tools;
    moveit_visual_tools::MoveItVisualTools visual_tools("base_link");
    Eigen::Isometry3d text_pose = Eigen::Isometry3d::Identity();
    text_pose.translation().z() = 1.0;
    //visual_tools.prompt("Press 'next' in the RvizVisualToolsGui window to continue the demo");


    // To start, we'll create an pointer that references the current robot's state.
    // RobotState is the object that contains all the current position/velocity/acceleration data.
    moveit::core::RobotStatePtr current_state = move_group_interface.getCurrentState();
    //
    // Next get the current set of joint values for the group.
    current_state->copyJointGroupPositions(joint_model_group, initial_joint_positions);

    first_pose = initial_joint_positions;
    first_pose[0] = first_pose[0] - tau/4; //a fourth of a rotation
    first_pose[1] = first_pose[1] - tau/4; 
    first_pose[2] = first_pose[2] + tau/4 - tau/12; 
    first_pose[3] = first_pose[3] - tau/4 + tau/12; 
    first_pose[4] = first_pose[4] + tau/4; 

    second_pose = initial_joint_positions;
    second_pose[0] = second_pose[0] + tau/4; 
    second_pose[1] = second_pose[1] - tau/8; 
    second_pose[2] = second_pose[2] - tau/4 + tau/12; 
    second_pose[3] = second_pose[3] + tau/4 - tau/12; 
    second_pose[4] = second_pose[4] - tau/4; 

    std::string filename = "demo_a_grabar";
    std_msgs::String filename_msg;
    filename_msg.data = filename;
    filename_pub.publish(filename_msg);

    std::vector<double> tolerance_list = {0.05, 0.035, 0.025, 0.02};

    for( double joint_goal_tolerance : tolerance_list){

      std_msgs::Float64 tolerance_msg;
      tolerance_msg.data = joint_goal_tolerance;
      tolerance_pub.publish(tolerance_msg);

      std::string complete_filename = "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/testing_results/" + filename + "_" + std::to_string(joint_goal_tolerance) + ".txt";
      std::ofstream outfile;
      //std::ios::app es el modo "append" al abrir un archivo, me deja escribir al final del archivo
      outfile.open(complete_filename);
      outfile << "base;shoulder;elbow;pitch;roll;is_end_pose;move_id;time_elapsed" << std::endl;
      outfile.close();

      std::cout << "testing con tolerancia " << joint_goal_tolerance << '\n';

      do{
        std::cout << "repetición número " << 11 - test_reps << '\n';
        trajectory_index = 0;
        move_group_interface.setJointValueTarget(first_pose);

        move_group_interface.setMaxVelocityScalingFactor(0.5);
        move_group_interface.setMaxAccelerationScalingFactor(0.5);

        moveit::planning_interface::MoveGroupInterface::Plan my_plan;
        move_group_interface.plan(my_plan);


        std::chrono::steady_clock::time_point time_start = std::chrono::steady_clock::now();
        move_group_interface.move();
        std::chrono::steady_clock::time_point time_end = std::chrono::steady_clock::now();

        double duration = std::chrono::duration_cast<std::chrono::seconds>(time_end - time_start).count();

        outfile.open(complete_filename, std::ios::app);
        outfile << "0.0;0.0;0.0;0.0;0.0;2;1;" << duration << std::endl;
        outfile.close();

        std::cout << "movimiento 1 tomó " << duration << " segundos" << std::endl; 

        sleep(1);

        move_group_interface.setJointValueTarget(second_pose);
        move_group_interface.plan(my_plan);

        time_start = std::chrono::steady_clock::now();
        move_group_interface.move();
        time_end = std::chrono::steady_clock::now();

        duration = std::chrono::duration_cast<std::chrono::seconds>(time_end - time_start).count();

        outfile.open(complete_filename, std::ios::app);
        outfile << "0.0;0.0;0.0;0.0;0.0;2;2;" << duration << std::endl;
        outfile.close();

        std::cout << "movimiento 2 tomó " << duration << " segundos" << std::endl; 

        sleep(1);

        move_group_interface.setJointValueTarget(initial_joint_positions);
        move_group_interface.plan(my_plan);

        time_start = std::chrono::steady_clock::now();
        move_group_interface.move();
        time_end = std::chrono::steady_clock::now();

        duration = std::chrono::duration_cast<std::chrono::seconds>(time_end - time_start).count();

        outfile.open(complete_filename, std::ios::app);
        outfile << "0.0;0.0;0.0;0.0;0.0;2;3;" << duration << std::endl;
        outfile.close();

        std::cout << "movimiento 3 tomó " << duration << " segundos" << std::endl; 

        sleep(1);

        //al completar una repetición, decrementamos y loopeamos de ser necesario
        test_reps--;
      }while(test_reps > 11);

      test_reps = 10;
    }

  

    std::cout << "saliendo del nodo de testing \n";    
    ros::shutdown();
    return 0;
    }
    