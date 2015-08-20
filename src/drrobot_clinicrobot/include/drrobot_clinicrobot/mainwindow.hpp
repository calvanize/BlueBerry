#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtNetwork>
#include <QTimer>
#include <QList>
#include "ui_mainwindow.hpp"
#include "qnode.hpp"
#include "drrobotprotocol.hpp"
#include "drrobotsensordata.hpp"
#include "drrobotp2pspeeddrive.hpp"
#include "drrobotsensormapbuild.hpp"

namespace drrobot_clinicrobot {


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:                       //In ROS, the distance is base-link

      MainWindow(int argc, char** argv, QMainWindow *parent = 0);
    ~MainWindow();
   void ReadSettings(); // Load up qt program settings at startup
   void WriteSettings(); // Save qt program settings when closing
   void closeEvent(QCloseEvent *event); // Overloaded function
   void showNoMasterMessage();


private:
    QNode qnode;
    Ui::MainWindow *ui;
    //data implemented here
    MotorData laserMotor;
    MotorData motorData[MOTOR_NUM];
    IRRangeData irData[IR_NUM];
    USRangeData usData[US_NUM];
    RobotPositionData robotPos;
    Laser_Data laserData;
    IndoorGPSData indoorGPS;
    ChargerData chargeData;
    SystemData systemData;
    BumpData bumpData;
    int rosLineCnt;
    // communication socket here
    QUdpSocket *udpMotion;      // motion control communication
    QTcpSocket *tcpCharge;      // charger control communication
    QTcpSocket *tcpIndoorGPS;   //indoor GPS communication
    QTcpSocket *tcpLaserDrive;  // laser drive communication

    //functions for intialize
    void iniSystemData();

    //functions & variables for motion control communication
    QByteArray receivedData;
    void dealWithPackage(const char *dataPoint, int len);
    unsigned char checkSum(const char *packPoint,int len);
    double ad2Distance(int value);
    int ctrlMode;
    int pingCnt;
    int motDir;
    //motor control command
    void robotMotorTimeControl(int ctrlMode,int channel, int value, int time );
    void robotMotorNoTimeControl(int ctrlMode,int channel, int value);
    void robotMotorTimeControlAll(int ctrlMode,int value1, int value2, int value3,int value4,int value5,int value6, int time);
    void robotMotorNoTimeControlAll(int ctrlMode,int value1, int value2, int value3,int value4,int value5,int value6);
    void drvRobotDis(double dis,int time);
    //function for encoder position estimate
    void encoderEstPos();
    bool firstCal;
    int preLeftWheelPos;
    int preRightWheelPos;
    double angle2PI(double tempAngle);
    double anglePI(double tempAngle);

    //calvin code: function for robot velocity estimate
    void robotEstVel();
    //calvin end here

    //functions & var for laser scan drive motor
    void dealWithLaserDrivePackage(QString revData);
    int laserDriveFlag;
    int laserAutoScanStep;
    int laserAutoScanFlag;
    int laserAutoScanDelayCnt;
    int laserScanDir;
    void setLaserPosition(double angle);            //this is laser drive motor control command,

    //functions & var for charger controller
    void dealWithChargeControllerData(QByteArray rcvData);
    QByteArray processedChargeData;
    int revCRC;
    int crc16Byte(QByteArray data,int crc16,int startPos,int len);
    int chargePingCnt;

    //functions & var for Indoor GPS
    void dealWithIndoorGPSData(QString rcvData,int len);
    QString processGPSStr;
    int gpsCheckCnt;
    //Timer
    QTimer ctrlTimer;   //100ms
    QTimer disTimer;    // 200ms, for display data
    QTimer laserScanTimer;

    //server for face image display
    QTcpServer *serverFace;
    int faceConnectTimeOutCnt;
    int faceConnectFlag;
    QTcpSocket *socketFace;

    DrRobotP2PSpeedDrive drrobotp2pSpeedDrive;
    DrRobotSensorMapBuilder drrobotSensorMapBuilder;
    SensorMapData sensorMapData;
    RobotPosition robotPosition;

    //calvin added these for velocity estimate
    RobotVelocity robotvelocity;
    //calvin ends

    SensorData sensorData;
    MotorControlCmd motorCmd;
    RobotInfo robotInfo;

    P2PServiceStatus p2pStatus;

    //sensor map build
    ConfigData sensorMapConfig;


    //path
    SetTargetPointRequest setPoint;
    QList<SetTargetPointRequest> pathPointSet;
    int pathPointNum;
    int pathPointCnt;
    QTimer pathControlTimer;
    bool blnAutoRun;
    bool blnGoCharger;
    int inChargeCnt;
    bool exitChargeFlag;
    int exitChargeStep;
    int exitChargeDelayCnt;

    void displayP2PStatus();
    void displayP2PCtrlMethod();
private slots:
    //for motion control
    void connectToMotionController();
    void processMotionData();
    void sendForwardCmd();
    void sendBackwardCmd();
    void sendLeftTurnCmd();
    void sendRightTurnCmd();
    void sendStopCmd();
    void sendHeadTiltCmd();
    void sendHeadPanCmd();
    void sendHeadStopCmd();
    void resetHeadTilt();
    void resetHeadPan();

    //calvin keyboard command
    void keyboardMotionCtrl(bool);
    bool event(QEvent*);
    //calvin ends

    //calvin laser scan data
    void laserScanEffected(double);
    void p2pCmdSend(double, double, double,double,int, int);
    //calvin ends

    //for laser scan drive
    void connectToLaserDrive();
    void processLaserDriveData();
    void sendLaserDriveCmd();
    void setLaserAutoScan();
    void laserAutoScan();
    void laserResetDrive();

    //for charger control
    void connectToChargerController();
    void processChargeData();
    void sendChargeCmd();
    void sendSwitchPowerCmd();
    void setChargeEn();


    //for Indoor GPS
    void connectToIndoorGPS();
    void processIndoorGPSData();

    void ctrlFunc();
    void disData();

    //for face server
    void newConnectionFace();
    void processFaceData();
    void setFile(int index);

    void updateSensorMap(SensorMapData mapData);
    void p2pUpdateMotorCmd(MotorControlCmd cmd);
    void p2pStart();
    void p2pStop();
    void patrolStart();
    void goChargerStart();
    void pathControl();
    void exitCharger();

// slot for qnode
    void wheelCmdSend(int cmdValue1,int cmdValue2,int motorCtrl);
    void headCmdSend (double headTiltPos, int headTiltFlag,int headTiltTime,double headPanPos,int headPanFlag,int headPanTime);
    void laserCmdSend(double laserPos,int scanFlag);
    void setROSReceive();   //checkboxStartROSReceive
};


class IP4Validator : public QValidator
{
    public:
        IP4Validator(QObject *parent=0) : QValidator(parent){}
        //void fixup(QString &input) const {}
        State validate(QString &input, int &pos) const
        {
            if(input.isEmpty())
                return Acceptable;
            QStringList slist = input.split(".");
            int s = slist.size();
            if(s>4) return Invalid;
            bool emptyGroup = false;
            for(int i=0;i<s;i++)
            {
                bool ok;
                if(slist[i].isEmpty())
                {
                    emptyGroup = true;
                    continue;
                }
                int val = slist[i].toInt(&ok);
                if(!ok || val<0 || val>255)
                    return Invalid;
            }
            if(s<4 || emptyGroup)
                return Intermediate;

            return Acceptable;
            }
};
}		//namespace

#endif // MAINWINDOW_H
