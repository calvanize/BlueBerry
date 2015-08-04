#ifndef DRROBOTSENSORMAPBUILDHELPER_H
#define DRROBOTSENSORMAPBUILDHELPER_H
#include "drrobotconst.hpp"
class SensorData
{
    public:
            double IrDis[MAXIRNUM];
            double UsDis[MAXUSNUM];

            void setSensorData()
            {
                for (int i = 0; i < MAXIRNUM; i++)
                {
                    IrDis[i] = 0;
                }

                for (int i = 0; i < MAXUSNUM; i++)
                {
                    UsDis[i] = 0;
                }
            }

};
class IRObjData
{
    public :
        double ObjX;
        double ObjY;
        double OffsetDis;
        double cosValue;
        double sinValue;
        double disValue;
    void setIRObjData()
    {
        ObjX = 0;
        ObjY = 0;
        OffsetDis = 0;
        cosValue = 0;
        sinValue = 0;
        disValue = 0;
    }
};

class USObjData
{
    public:
        double ObjX;
        double ObjY;
        double OffsetDis;
        double cosValue;
        double sinValue;
        double disValue;
        void setUSObjData()
        {
            ObjX = 0;
            ObjY = 0;
            OffsetDis = 0;
            cosValue = 0;
            sinValue = 0;
            disValue = 0;
        }
};

class IRConfigData
{
    public :
        double OffsetX;
        double OffsetY;
        double Angle;
        double Weight;
        int DisTag;

        void setIRConfigData()
    {
        OffsetX = 0;
        OffsetY = 0;
        Angle = 0;
        Weight = 0;
        DisTag = 0;

    }
};

class USConfigData
{
    public:
        double OffsetX;
        double OffsetY;
        double Angle;
        double Weight;
        int DisTag;

        void setUSConfigData()
    {
        OffsetX = 0;
        OffsetY = 0;
        Angle = 0;
        Weight = 0;
        DisTag = 0;
    }
};
class LaserConfigData
{
    public:
        double OffsetX;
        double OffsetY;
        double MaxDis;
        double MinDis;
        int StartStep;
        int EndStep;
        int LaserDataLen;
        double AngleStep;
        double StartAngle;
        int DisTag;


        void setLaserConfigData()
    {
        OffsetX = 0;
        OffsetY = 0;
        MaxDis = MAX_LASER_DIS;
        MinDis = MIN_LASER_DIS;
        LaserDataLen = MAX_LASER_DATA_LEN;
        StartStep = 0;
        EndStep = 0;
        StartAngle = 0;
        AngleStep = 0.3515625;
        DisTag = 0;

    }
};

class LaserSensorData
{
    public:
        double DisArrayData[MAX_LASER_DATA_LEN];
        long TimeStamp;
        double LaserDisLM;

        void setLaserSensorData()
    {
        TimeStamp = 0;
        for (int i = 0; i < MAX_LASER_DATA_LEN; i++)
        {
            DisArrayData[i] = 0;
        }
        TimeStamp = 0;
        LaserDisLM = MAX_LASER_DIS;
    }

};


class ConfigData
{
    public :
            int IrNum;
            int UsNUm;
            IRConfigData IrConfigData[MAXIRNUM];
            USConfigData UsConfigData[MAXUSNUM];

            void setConfigData()
            {
                IrNum = 16;
                UsNUm = MAXUSNUM;
                for (int i = 0; i < MAXIRNUM; i++)
                {
                    IrConfigData[i].setIRConfigData();
                }
                for (int i = 0; i < MAXUSNUM; i++)
                {
                    UsConfigData[i].setUSConfigData();
                }
            }
};

#endif // DRROBOTSENSORMAPBUILDHELPER_H
