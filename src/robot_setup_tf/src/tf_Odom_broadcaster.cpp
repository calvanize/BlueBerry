#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>
#include <tf/transform_broadcaster.h>
#include <string>
#include <drrobot_clinicrobot/RobotPosition.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/TransformStamped.h>

void setOdomtf(const drrobot_clinicrobot::RobotPositionConstPtr robotPositionData)
{

    tf::TransformBroadcaster odom_broadcaster;
//    tf::StampedTransform odom_trans;

    //since all odometry is 6DOF we'll need a quaternion created from yaw
    geometry_msgs::Quaternion odom_quat = tf::createQuaternionMsgFromYaw(robotPositionData->robot_heading);
//    tf::Quaternion odom_quat = tf::createQuaternionFromYaw(robotPositionData->robot_heading);


    //first, we'll publish the transform over tf
    geometry_msgs::TransformStamped odom_trans;
    odom_trans.header.stamp = ros::Time::now();
    odom_trans.header.frame_id = "odom";
    odom_trans.child_frame_id = "base_link";

//    odom_trans.stamp_ = ros::Time::now();
//    odom_trans.frame_id_ = "odom";
//    odom_trans.child_frame_id_ = "base_link";

    odom_trans.transform.translation.x = robotPositionData->robot_x;
    odom_trans.transform.translation.y = robotPositionData->robot_y;
    odom_trans.transform.translation.z = 0.0;
    odom_trans.transform.rotation = odom_quat;

//    odom_trans.setOrigin(tf::Vector3(robotPositionData->robot_x,robotPositionData->robot_y, 0));
//    odom_trans.setRotation(odom_quat);

   tf::StampedTransform transform;
   tf::transformStampedMsgToTF(odom_trans, transform);

    //send the transform
    //odom_broadcaster.sendTransform(odom_trans);

     odom_broadcaster.sendTransform(transform);
}
int main(int argc, char** argv){
    ros::init(argc, argv, "robot_odom_pub");
    ros::NodeHandle n;

    ros::Rate r(100);


    while(n.ok()){

        ros::Subscriber Odom = n.subscribe("drrobot_clinicrobot_robotposition",1000, setOdomtf);
        ros::spin();

        r.sleep();

    }
}

