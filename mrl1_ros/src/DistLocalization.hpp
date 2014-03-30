#ifndef DIST_LOCALIZATION__HPP_
#define DIST_LOCALIZATION__HPP_

#include "ros/ros.h"
#include "std_msgs/String.h"
#include "std_msgs/Float64.h"
#include "sensor_msgs/LaserScan.h"
#include "ProcessLaserScan.hpp"
#include "PositionGT.hpp"
#include "ExpMath.cpp"

#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/LU>
#include <sstream>
#include <vector>
#include <iostream>
#include <math.h>


using namespace std;
// Let robot turn to the left if longest scan is to the left of the robot's center and likewise to the right
//
// Inherits from class "ProcessLaserScan"
class DistLocalization : public ProcessLaserScan{

    public:
        std_msgs::Float64 leftEffort;
        std_msgs::Float64 rightEffort;

        ros::Publisher leftWheelPub_;
        ros::Publisher rightWheelPub_;
       
        ros::NodeHandle nh_;


        // Constructor
        DistLocalization(ros::NodeHandle& nh,std::string laserTopic, std::string leftwheelcontrollertopic, std::string rightwheelcontrollertopic):ProcessLaserScan(nh,laserTopic)
        {
            nh_ = nh;

             leftWheelPub_ = nh_.advertise<std_msgs::Float64>(leftwheelcontrollertopic, 1000);
            rightWheelPub_ = nh_.advertise<std_msgs::Float64>(rightwheelcontrollertopic, 1000);  
            

        }


        // Destructor
        ~DistLocalization(void)
        {
        }

        
        // main method to control robot
        void moveToLongestScan();


        void moveSinasoidal();

        
        // publish motor commands
        void Explore(void)
        {
              
            if(rangeReadings.size() < scanNum)
            { 
                ros::Duration(0.5).sleep(); 
            }
            else
            {

               //current exploration method! 
              
              //this->moveToLongestScan();    
                this->moveSinasoidal();

               leftWheelPub_.publish(leftEffort);
               rightWheelPub_.publish(rightEffort);
 
            // std::cout<<angleReadings.at(1)<<std::endl;
            }

        }


//----------  Distributed Localization Methods  ---------
        

//////////////////  Distributed EKF //////////////////


        // Main method to call
        void distEKF();
       
       

        
        
///////////////// Exponential Localization ///////////
        
        // Main method to call
        void expLocalization();

	    // returns xi and Si
         void generate_Si(Eigen::Matrix3d Sigma_i, Eigen::Vector3d& xi, Eigen::Matrix3d& Si);       
       
        // returns xm and Sm
         void generate_Sm(Eigen::Matrix3d m_im,Eigen::Matrix3d mu_m,Eigen::Matrix3d a_m,Eigen::Matrix3d a_i,Eigen::Matrix3d mu_i,Eigen::Matrix3d Sigma_m,Eigen::Vector3d& xm,Eigen::Matrix3d& Sm);

        // returns the final estimate update for mean (mu_i_bar) and covariance (Sigma_i_bar)
         void fusion_with_sensor_noise(Eigen::Matrix3d a_i,Eigen::Matrix3d mu_i,Eigen::Matrix3d cov_i,Eigen::Matrix3d a_j,Eigen::Matrix3d mu_j,Eigen::Matrix3d cov_j,Eigen::Matrix3d mu_m,Eigen::Matrix3d cov_m,Eigen::Matrix3d& mu_i_bar,Eigen::Matrix3d& Sigma_i_bar);


};

#endif



























