#include <ros/ros.h>
#include <tf/transform_broadcaster.h>
#include <string>
#include "std_msgs/String.h"
#include <sstream>
//#include  "/home/drrobot1/github/BlueBerry/src/drrobot_clinicrobot/include/drrobot_clinicrobot/drrobotprotocol.hpp"
//#include "/home/drrobot1/github/BlueBerry/src/drrobot_clinicrobot/include/drrobot_clinicrobot/drrobotsensordata.hpp"

#define IR_NUM  16      // 16 IR range sensor
#define US_NUM  6       // 6 US sensor
#define SENSOR_R    0.25
#define SENSOR_ANGLE_STEP 22.5      // 16 sensor one circle(360)

int main(int argc, char** argv){
  ros::init(argc, argv, "robot_tf_publisher");
  ros::NodeHandle n;

  ros::Rate r(100);

  tf::TransformBroadcaster broadcaster_laser;
  tf::TransformBroadcaster broadcaster_IRsensor[IR_NUM];
  tf::TransformBroadcaster broadcaster_USsensor[US_NUM];

  while(n.ok()){
      broadcaster_laser.sendTransform(
                  tf::StampedTransform(
                      tf::Transform(tf::Quaternion(0, 0, 0, 1), tf::Vector3(0.18, 0.0, 0.35)),
                      ros::Time::now(),"base_link", "laser"));
      double angle;

      for (int i = 0; i < IR_NUM; i++){
          if (i < 11){
              angle = (90 - SENSOR_ANGLE_STEP * (i + 1) ) / 180 * M_PI;        //number ]0] is at the left front side
          }else{
              angle = (180 - SENSOR_ANGLE_STEP * (i - 11)) / 180 * M_PI;
          }

          std_msgs::String frame;
          std::stringstream ss;
          ss << "base_IRsensor" << i;
          frame.data = ss.str();
          broadcaster_IRsensor[i].sendTransform(
                      tf::StampedTransform(
                          tf::Transform(tf::Quaternion(0, 0, 0, 1), tf::Vector3(SENSOR_R * cos(angle), SENSOR_R * sin(angle), 0.16)),
                          ros::Time::now(),"base_link", frame.data.c_str()));
      }
      broadcaster_USsensor[0].sendTransform(
                  tf::StampedTransform(
                      tf::Transform(tf::Quaternion(0, 0, 0, 1), tf::Vector3(0.05, 0.0, 0.7)),
                      ros::Time::now(),"base_link", "base_USsensor0"));
      broadcaster_USsensor[1].sendTransform(
                  tf::StampedTransform(
                      tf::Transform(tf::Quaternion(0, 0, 0, 1), tf::Vector3(0.05, 0.0, 1.0)),
                      ros::Time::now(),"base_link", "base_USsensor1"));
      broadcaster_USsensor[2].sendTransform(
                  tf::StampedTransform(
                      tf::Transform(tf::Quaternion(0, 0, 0, 1), tf::Vector3(0.05, 0.0, 1.4)),
                      ros::Time::now(),"base_link", "base_USsensor2"));
      broadcaster_USsensor[3].sendTransform(
                  tf::StampedTransform(
                      tf::Transform(tf::Quaternion(0, 0, 0, 1), tf::Vector3(0.0, 0.165, 1.3)),
                      ros::Time::now(),"base_link", "base_USsensor3"));
      broadcaster_USsensor[4].sendTransform(
                  tf::StampedTransform(
                      tf::Transform(tf::Quaternion(0, 0, 0, 1), tf::Vector3(0.0, -0.165, 1.3)),
                      ros::Time::now(),"base_link", "base_USsensor4"));
      broadcaster_USsensor[5].sendTransform(
                  tf::StampedTransform(
                      tf::Transform(tf::Quaternion(0, 0, 0, 1), tf::Vector3(-0.05, 0.0, 0.7)),
                      ros::Time::now(),"base_link", "base_USsensor5"));

      r.sleep();

  }
}
