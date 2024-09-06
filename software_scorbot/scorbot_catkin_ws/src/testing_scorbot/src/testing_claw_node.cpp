#include <ros/ros.h>
#include <std_msgs/String.h>
#include <std_msgs/Float64.h>
#include <iostream>
#include <fstream> 
#include <string>
#include <unistd.h>
#include <chrono>

#include <std_msgs/Empty.h>

int test_reps = 100;
bool caught = false;

ros::Subscriber claw_catch_sub;
ros::Publisher close_claw_pub, open_claw_pub;

void on_claw_catch(const std_msgs::EmptyConstPtr &msg){
  caught = true;
  std::cout << "caught something" << std::endl;
}


int main(int argc, char** argv)
{
    ros::init(argc, argv, "testing_scorbot_claw");
    ros::NodeHandle node_handle;

    // ROS spinning must be running for the MoveGroupInterface to get information
    // about the robot's state. One way to do this is to start an AsyncSpinner
    // beforehand.
    ros::AsyncSpinner spinner(1);

    std::cout << "incializado el nodo de testing \n";

    spinner.start();

    close_claw_pub = node_handle.advertise<std_msgs::Empty>("/scorbot/claw_catch", 1);
    open_claw_pub = node_handle.advertise<std_msgs::Empty>("/scorbot/claw_release", 1);
    claw_catch_sub = node_handle.subscribe<std_msgs::Empty>("/scorbot/claw_caught", 1, &on_claw_catch); 

    std::string filename = "test_garra";
    std::string complete_filename = "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/testing_results/" + filename + ".txt";
    std::ofstream outfile;
    //std::ios::app es el modo "append" al abrir un archivo, me deja escribir al final del archivo
    outfile.open(complete_filename);
    outfile << "caught" << std::endl;
    outfile.close();

    std_msgs::Empty empty_msg;

    while(test_reps > 0){
        close_claw_pub.publish(empty_msg);
        sleep(3);

        outfile.open(complete_filename, std::ios::app);
        outfile << caught << std::endl;
        outfile.close();

        open_claw_pub.publish(empty_msg);
        sleep(3);

        test_reps --;
        caught = false;
    }  

    std::cout << "saliendo del nodo de testing \n";    
    ros::shutdown();
    return 0;
    }
    