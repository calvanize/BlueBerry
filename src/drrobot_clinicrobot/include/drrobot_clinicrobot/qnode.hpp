/**
 * @file /include/drobot_clinicrobot/qnode.hpp
 *
 * @brief Communications central!

 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef drrobot_clinicrobot_QNODE_HPP_
#define drrobot_clinicrobot_QNODE_HPP_

/*****************************************************************************
** Includes
*****************************************************************************/

#include <ros/ros.h>
#include <string>
#include <QThread>
#include <QStringListModel>
#include <drrobot_clinicrobot/MotorCmd.h>
#include <drrobot_clinicrobot/LaserDriveCmd.h>
#include <drrobot_clinicrobot/HeadCmd.h>
#include "drrobotsensordata.hpp"

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace drrobot_clinicrobot {

/*****************************************************************************
** Class
*****************************************************************************/

class QNode : public QThread {
    Q_OBJECT
public:
	QNode(int argc, char** argv );
	virtual ~QNode();
	bool init();
	bool init(const std::string &master_url, const std::string &host_url);
	void run();

    //calvin uncommented these codes from here

    void publisherIndoorGPS(IndoorGPSData indoorGPSData);
    void publisherBumpSensor(BumpData bumpData);
    void publisherLaserDriveData(Laser_Data laserData);
    void publisherPowerInfo(ChargerData chargeData);
    void publisherRobotPosition(RobotPositionData robotPositionData);

    //end of the uncommented codes by calvin
    void publisherRangeArray(IRRangeData irRangeData[],USRangeData usRangeData[],int irnum,int usnum);
    void publisherMotorData(MotorData motorData[],int len);
    void publisherRobotSystemData(SystemData systemData);
	/*********************
	** Logging
	**********************/
	enum LogLevel {
	         Debug,
	         Info,
	         Warn,
	         Error,
	         Fatal
	 };

	QStringListModel* loggingModel() { return &logging_model; }
	void log( const LogLevel &level, const std::string &msg);

signals:
	void loggingUpdated();
    	void rosShutdown();
    void wheelCmdUpdated(int,int,int);
    void headCmdUpdated(double,int,int,double,int,int);
    void laserCmdUpdated(double,int);
private:
	int init_argc;
	char** init_argv;

    //calvin uncommented these codes from here
    ros::Publisher bumpSensor_pub_;
    ros::Publisher indoorGPS_pub_;
    ros::Publisher laserDriveData_pub_;
    ros::Publisher powerInfo_pub_;
    ros::Publisher robotPosition_pub_;
    //uncommenting ends here
    ros::Publisher motorInfo_pub_;
    ros::Publisher rangeArray_pub_;
    ros::Publisher robotSystemData_pub_;

	ros::Subscriber motor_cmd_sub_;
    ros::Subscriber head_cmd_sub_;
    ros::Subscriber laser_cmd_sub_;

	int msgCnt;
    	QStringListModel logging_model;
    void wheelCmdReceived(const drrobot_clinicrobot::MotorCmd::ConstPtr& cmd);
    void headCmdReceived(const drrobot_clinicrobot::HeadCmd::ConstPtr& cmd);
    void laserCmdReceived(const drrobot_clinicrobot::LaserDriveCmd::ConstPtr& cmd);
    
};

}  // namespace drrobot_clinicrobot

#endif /* drrobot_clinicrobot_QNODE_HPP_ */
