#include <functional>
#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/common/common.hh>
#include <ignition/math/Vector3.hh>
#include <thread>
#include "ros/ros.h"
#include "ros/callback_queue.h"
#include "ros/subscribe_options.h"
#include "std_msgs/Float32.h"
#include <gazebo/transport/transport.hh>
#include <gazebo/msgs/msgs.hh>

namespace gazebo
{
  class ModelJointSpeedControler : public ModelPlugin
  {
    public: void Load(physics::ModelPtr _parent, sdf::ElementPtr _sdf)
    {
      // Store the pointer to the model
      this->model = _parent;

      // Listen to the update event. This event is broadcast every
      // simulation iteration.
      this->updateConnection = event::Events::ConnectWorldUpdateBegin(
          std::bind(&ModelJointSpeedControler::OnUpdate, this));
      
      this->old_secs =ros::Time::now().toSec();






      // Create a topic name
      std::string base_speed = "/"+this->namespace_model + "/base_speed";
      std::string shoulder_speed = "/"+this->namespace_model + "/shoulder_speed";
      std::string elbow_speed = "/"+this->namespace_model + "/elbow_speed";
      std::string pitch_speed = "/"+this->namespace_model + "/pitch_speed";
      std::string roll_speed = "/"+this->namespace_model + "/roll_speed";




      // Initialize ros, if it has not already bee initialized.
      if (!ros::isInitialized())
      {
        int argc = 0;
        char **argv = NULL;
        ros::init(argc, argv, "set_jointSpeed_rosnode",                   
        ros::init_options::NoSigintHandler);
      }
         
      // Create our ROS node. This acts in a similar manner to
      // the Gazebo node
      this->rosNode.reset(new ros::NodeHandle("earthquake_rosnode"));
      

     /* if(this->activate_pid_control)
      {
        // Activated PID Speed Control
        const auto &jointController = this->model->GetJointController();
        jointController->Reset();

        jointController->AddJoint(model->GetJoint("base_joint"));
        jointController->AddJoint(model->GetJoint("shoulder_joint"));
		    jointController->AddJoint(model->GetJoint("elbow_joint"));
		    jointController->AddJoint(model->GetJoint("pitch_joint"));
        jointController->AddJoint(model->GetJoint("roll_joint"));


        this->base_name = model->GetJoint("base_joint")->GetScopedName();
        this->shoulder_name = model->GetJoint("shoulder_joint")->GetScopedName();
		    this->elbow_name = model->GetJoint("elbow_joint")->GetScopedName();
		    this->pitch_name = model->GetJoint("pitch_joint")->GetScopedName();
		    this->roll_name = model->GetJoint("roll_joint")->GetScopedName();

		  
          
        jointController->SetVelocityTarget(this->base_name, 0.0);
        jointController->SetVelocityTarget(this->shoulder_name, 0.0);
		    jointController->SetVelocityTarget(this->elbow_name, 0.0);
		    jointController->SetVelocityTarget(this->pitch_name, 0.0);
		    jointController->SetVelocityTarget(this->roll_name, 0.0);
      } */

      // BASE
      ros::SubscribeOptions so =
      ros::SubscribeOptions::create<std_msgs::Float32>(base_speed,1, boost::bind(&ModelJointSpeedControler::OnRosMsg_base_speed, this, _1),
      ros::VoidPtr(), &this->rosQueue);
      
      this->rosSub = this->rosNode->subscribe(so);
      
      // Spin up the queue helper thread.
      this->rosQueueThread =
        std::thread(std::bind(&ModelJointSpeedControler::QueueThread, this));
        
        
      // SHOULDER
      ros::SubscribeOptions so2 =
        ros::SubscribeOptions::create<std_msgs::Float32>(
            shoulder_speed,
            1,
            boost::bind(&ModelJointSpeedControler::OnRosMsg_shoulder_speed, this, _1),
            ros::VoidPtr(), &this->rosQueue2);
      this->rosSub2 = this->rosNode->subscribe(so2);
      
      // Spin up the queue helper thread.
      this->rosQueueThread2 =
        std::thread(std::bind(&ModelJointSpeedControler::QueueThread2, this));
         
      ROS_WARN("Loaded Plugin with parent...%s", this->model->GetName().c_str());

      // ELBOW
      ros::SubscribeOptions so3 =
        ros::SubscribeOptions::create<std_msgs::Float32>(
            elbow_speed,
            1,
            boost::bind(&ModelJointSpeedControler::OnRosMsg_elbow_speed, this, _1),
            ros::VoidPtr(), &this->rosQueue3);
      this->rosSub3 = this->rosNode->subscribe(so3);
      
      // Spin up the queue helper thread.
      this->rosQueueThread3 =
        std::thread(std::bind(&ModelJointSpeedControler::QueueThread3, this));
         
      ROS_WARN("Loaded Plugin with parent...%s", this->model->GetName().c_str());


	  // PITCH
      ros::SubscribeOptions so4 =
        ros::SubscribeOptions::create<std_msgs::Float32>(
            pitch_speed,
            1,
            boost::bind(&ModelJointSpeedControler::OnRosMsg_pitch_speed, this, _1),
            ros::VoidPtr(), &this->rosQueue4);
      this->rosSub4 = this->rosNode->subscribe(so4);
      
      // Spin up the queue helper thread.
      this->rosQueueThread4 =
        std::thread(std::bind(&ModelJointSpeedControler::QueueThread4, this));
         
      ROS_WARN("Loaded Plugin with parent...%s", this->model->GetName().c_str());


	  // ROLL
      ros::SubscribeOptions so5 =
        ros::SubscribeOptions::create<std_msgs::Float32>(
            roll_speed,
            1,
            boost::bind(&ModelJointSpeedControler::OnRosMsg_roll_speed, this, _1),
            ros::VoidPtr(), &this->rosQueue5);
      this->rosSub5 = this->rosNode->subscribe(so5);
      
      // Spin up the queue helper thread.
      this->rosQueueThread5 =
        std::thread(std::bind(&ModelJointSpeedControler::QueueThread5, this));
         
      ROS_WARN("Loaded Plugin with parent...%s", this->model->GetName().c_str());


      
    }

    // Called by the world update start event
    public: void OnUpdate()
    {
      double new_secs =ros::Time::now().toSec();
      double delta = new_secs - this->old_secs;
      
      double max_delta = 0.0;
      
      if (this->freq_update != 0.0)
      {
        max_delta = 1.0 / this->freq_update;
      }
      
      if (delta > max_delta && delta != 0.0)
      {
        this->old_secs = new_secs;
        /* if(this->activate_pid_control)
		    {
          ROS_DEBUG("Update Joint Speed PID...");
          const auto &jointController = this->model->GetJointController();
          jointController->SetVelocityTarget(this->base_name, this->base_speed_magn);
          jointController->SetVelocityTarget(this->shoulder_name, this->shoulder_speed_magn);
          jointController->SetVelocityTarget(this->elbow_name, this->elbow_speed_magn);
          jointController->SetVelocityTarget(this->pitch_name, this->pitch_speed_magn);
			    jointController->SetVelocityTarget(this->roll_name, this->roll_speed_magn);
        }else
        {} */
          // Apply a small linear velocity to the model.
          ROS_DEBUG("Update Joint Speed BASIC...");
      	  this->model->GetJoint("base_joint")->SetVelocity(0, this->base_speed_magn);
          this->model->GetJoint("shoulder_joint")->SetVelocity(0, this->shoulder_speed_magn);
          this->model->GetJoint("elbow_joint")->SetVelocity(0, this->elbow_speed_magn);
	  this->model->GetJoint("pitch_joint")->SetVelocity(0, this->pitch_speed_magn);
	  this->model->GetJoint("roll_joint")->SetVelocity(0, this->roll_speed_magn);
			  
	    } 
    }
    
    
	//BASE
    public: void SetBaseSpeed(const double &_freq)
    {
      this->base_speed_magn = _freq;
      ROS_WARN("base_speed_magn >> %f", this->base_speed_magn);
    }

	//SHOULDER
    public: void SetShoulderSpeed(const double &_magn)
    {
      this->shoulder_speed_magn = _magn;
      ROS_WARN("shoulder_speed_magn >> %f", this->shoulder_speed_magn);
    }

	//ELBOW
    public: void SetElbowSpeed(const double &_freq)
    {
      this->elbow_speed_magn = _freq;
      ROS_WARN("elbow_speed_magn >> %f", this->elbow_speed_magn);
    }

	//PITCH
    public: void SetPitchSpeed(const double &_freq)
    {
      this->pitch_speed_magn = _freq;
      ROS_WARN("pitch_speed_magn >> %f", this->pitch_speed_magn);
    }

	//ROLL
    public: void SetRollSpeed(const double &_freq)
    {
      this->roll_speed_magn = _freq;
      ROS_WARN("roll_speed_magn >> %f", this->roll_speed_magn);
    }
    




    //BASE
    public: void OnRosMsg_base_speed(const std_msgs::Float32ConstPtr &_msg)
    {
      this->SetBaseSpeed(_msg->data);
    }
    
    /// \brief ROS helper function that processes messages
    private: void QueueThread()
    {
      static const double timeout = 0.01;
      while (this->rosNode->ok())
      {
        this->rosQueue.callAvailable(ros::WallDuration(timeout));
      }
    }
    

   //SHOULDER
    public: void OnRosMsg_shoulder_speed(const std_msgs::Float32ConstPtr &_msg)
    {
      this->SetShoulderSpeed(_msg->data);
    }
    
    /// \brief ROS helper function that processes messages
    private: void QueueThread2()
    {
      static const double timeout = 0.01;
      while (this->rosNode->ok())
      {
        this->rosQueue2.callAvailable(ros::WallDuration(timeout));
      }
    }
    
    //ELBOW
    public: void OnRosMsg_elbow_speed(const std_msgs::Float32ConstPtr &_msg)
    {
      this->SetElbowSpeed(_msg->data);
    }
    
    /// \brief ROS helper function that processes messages
    private: void QueueThread3()
    {
      static const double timeout = 0.01;
      while (this->rosNode->ok())
      {
        this->rosQueue3.callAvailable(ros::WallDuration(timeout));
      }
    }

    //PITCH
	public: void OnRosMsg_pitch_speed(const std_msgs::Float32ConstPtr &_msg)
    {
      this->SetPitchSpeed(_msg->data);
    }
    
    /// \brief ROS helper function that processes messages
    private: void QueueThread4()
    {
      static const double timeout = 0.01;
      while (this->rosNode->ok())
      {
        this->rosQueue4.callAvailable(ros::WallDuration(timeout));
      }
    }

	//ROLL
	public: void OnRosMsg_roll_speed(const std_msgs::Float32ConstPtr &_msg)
    {
      this->SetRollSpeed(_msg->data);
    }
    
    /// \brief ROS helper function that processes messages
    private: void QueueThread5()
    {
      static const double timeout = 0.01;
      while (this->rosNode->ok())
      {
        this->rosQueue5.callAvailable(ros::WallDuration(timeout));
      }
    }






    // Pointer to the model
    private: physics::ModelPtr model;

    // Pointer to the update event connection
    private: event::ConnectionPtr updateConnection;
    
    // Time Memory
    double old_secs;
    
    // Frequency of earthquake
    double freq_update = 10.0;

    double base_speed_magn = 0.0;
    double shoulder_speed_magn = 0.0;
    double elbow_speed_magn = 0.0;
    double pitch_speed_magn = 0.0;
    double roll_speed_magn = 0.0;

    
    
    /// \brief A node use for ROS transport
    private: std::unique_ptr<ros::NodeHandle> rosNode;
    
    /// \brief A ROS subscriber
    private: ros::Subscriber rosSub;
    /// \brief A ROS callbackqueue that helps process messages
    private: ros::CallbackQueue rosQueue;
    /// \brief A thread the keeps running the rosQueue
    private: std::thread rosQueueThread; 
    
    
    /// \brief A ROS subscriber
    private: ros::Subscriber rosSub2;
    /// \brief A ROS callbackqueue that helps process messages
    private: ros::CallbackQueue rosQueue2;
    /// \brief A thread the keeps running the rosQueue
    private: std::thread rosQueueThread2;

    /// \brief A ROS subscriber
    private: ros::Subscriber rosSub3;
    /// \brief A ROS callbackqueue that helps process messages
    private: ros::CallbackQueue rosQueue3;
    /// \brief A thread the keeps running the rosQueue
    private: std::thread rosQueueThread3;

    /// \brief A ROS subscriber
    private: ros::Subscriber rosSub4;
    /// \brief A ROS callbackqueue that helps process messages
    private: ros::CallbackQueue rosQueue4;
    /// \brief A thread the keeps running the rosQueue
    private: std::thread rosQueueThread4;

    /// \brief A ROS subscriber
    private: ros::Subscriber rosSub5;
    /// \brief A ROS callbackqueue that helps process messages
    private: ros::CallbackQueue rosQueue5;
    /// \brief A thread the keeps running the rosQueue
    private: std::thread rosQueueThread5;
    
    std::string base_name;
    std::string shoulder_name;
    std::string elbow_name;
    std::string pitch_name;
    std::string roll_name;

    std::string namespace_model = "";
  


    
  };

  // Register this plugin with the simulator
  GZ_REGISTER_MODEL_PLUGIN(ModelJointSpeedControler)   //CAMBIAR

}


 
