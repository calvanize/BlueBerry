/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/drrobot_clinicrobot/include/drrobot_clinicrobot/mainwindow.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_drrobot_clinicrobot__MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x08,
      61,   32,   32,   32, 0x08,
      81,   32,   32,   32, 0x08,
      98,   32,   32,   32, 0x08,
     116,   32,   32,   32, 0x08,
     134,   32,   32,   32, 0x08,
     153,   32,   32,   32, 0x08,
     167,   32,   32,   32, 0x08,
     185,   32,   32,   32, 0x08,
     202,   32,   32,   32, 0x08,
     220,   32,   32,   32, 0x08,
     236,   32,   32,   32, 0x08,
     251,   32,   32,   32, 0x08,
     281,   32,  276,   32, 0x08,
     296,   32,   32,   32, 0x08,
     328,  322,   32,   32, 0x08,
     376,   32,   32,   32, 0x08,
     398,   32,   32,   32, 0x08,
     422,   32,   32,   32, 0x08,
     442,   32,   32,   32, 0x08,
     461,   32,   32,   32, 0x08,
     477,   32,   32,   32, 0x08,
     495,   32,   32,   32, 0x08,
     524,   32,   32,   32, 0x08,
     544,   32,   32,   32, 0x08,
     560,   32,   32,   32, 0x08,
     581,   32,   32,   32, 0x08,
     595,   32,   32,   32, 0x08,
     616,   32,   32,   32, 0x08,
     639,   32,   32,   32, 0x08,
     650,   32,   32,   32, 0x08,
     660,   32,   32,   32, 0x08,
     680,   32,   32,   32, 0x08,
     704,  698,   32,   32, 0x08,
     725,  717,   32,   32, 0x08,
     760,  756,   32,   32, 0x08,
     795,   32,   32,   32, 0x08,
     806,   32,   32,   32, 0x08,
     816,   32,   32,   32, 0x08,
     830,   32,   32,   32, 0x08,
     847,   32,   32,   32, 0x08,
     861,   32,   32,   32, 0x08,
     905,  875,   32,   32, 0x08,
    1004,  931,   32,   32, 0x08,
    1065, 1047,   32,   32, 0x08,
    1090,   32,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_drrobot_clinicrobot__MainWindow[] = {
    "drrobot_clinicrobot::MainWindow\0\0"
    "connectToMotionController()\0"
    "processMotionData()\0sendForwardCmd()\0"
    "sendBackwardCmd()\0sendLeftTurnCmd()\0"
    "sendRightTurnCmd()\0sendStopCmd()\0"
    "sendHeadTiltCmd()\0sendHeadPanCmd()\0"
    "sendHeadStopCmd()\0resetHeadTilt()\0"
    "resetHeadPan()\0keyboardMotionCtrl(bool)\0"
    "bool\0event(QEvent*)\0laserScanEffected(double)\0"
    ",,,,,\0p2pCmdSend(double,double,double,double,int,int)\0"
    "connectToLaserDrive()\0processLaserDriveData()\0"
    "sendLaserDriveCmd()\0setLaserAutoScan()\0"
    "laserAutoScan()\0laserResetDrive()\0"
    "connectToChargerController()\0"
    "processChargeData()\0sendChargeCmd()\0"
    "sendSwitchPowerCmd()\0setChargeEn()\0"
    "connectToIndoorGPS()\0processIndoorGPSData()\0"
    "ctrlFunc()\0disData()\0newConnectionFace()\0"
    "processFaceData()\0index\0setFile(int)\0"
    "mapData\0updateSensorMap(SensorMapData)\0"
    "cmd\0p2pUpdateMotorCmd(MotorControlCmd)\0"
    "p2pStart()\0p2pStop()\0patrolStart()\0"
    "goChargerStart()\0pathControl()\0"
    "exitCharger()\0cmdValue1,cmdValue2,motorCtrl\0"
    "wheelCmdSend(int,int,int)\0"
    "headTiltPos,headTiltFlag,headTiltTime,headPanPos,headPanFlag,headPanTi"
    "me\0"
    "headCmdSend(double,int,int,double,int,int)\0"
    "laserPos,scanFlag\0laserCmdSend(double,int)\0"
    "setROSReceive()\0"
};

void drrobot_clinicrobot::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->connectToMotionController(); break;
        case 1: _t->processMotionData(); break;
        case 2: _t->sendForwardCmd(); break;
        case 3: _t->sendBackwardCmd(); break;
        case 4: _t->sendLeftTurnCmd(); break;
        case 5: _t->sendRightTurnCmd(); break;
        case 6: _t->sendStopCmd(); break;
        case 7: _t->sendHeadTiltCmd(); break;
        case 8: _t->sendHeadPanCmd(); break;
        case 9: _t->sendHeadStopCmd(); break;
        case 10: _t->resetHeadTilt(); break;
        case 11: _t->resetHeadPan(); break;
        case 12: _t->keyboardMotionCtrl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: { bool _r = _t->event((*reinterpret_cast< QEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->laserScanEffected((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->p2pCmdSend((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 16: _t->connectToLaserDrive(); break;
        case 17: _t->processLaserDriveData(); break;
        case 18: _t->sendLaserDriveCmd(); break;
        case 19: _t->setLaserAutoScan(); break;
        case 20: _t->laserAutoScan(); break;
        case 21: _t->laserResetDrive(); break;
        case 22: _t->connectToChargerController(); break;
        case 23: _t->processChargeData(); break;
        case 24: _t->sendChargeCmd(); break;
        case 25: _t->sendSwitchPowerCmd(); break;
        case 26: _t->setChargeEn(); break;
        case 27: _t->connectToIndoorGPS(); break;
        case 28: _t->processIndoorGPSData(); break;
        case 29: _t->ctrlFunc(); break;
        case 30: _t->disData(); break;
        case 31: _t->newConnectionFace(); break;
        case 32: _t->processFaceData(); break;
        case 33: _t->setFile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->updateSensorMap((*reinterpret_cast< SensorMapData(*)>(_a[1]))); break;
        case 35: _t->p2pUpdateMotorCmd((*reinterpret_cast< MotorControlCmd(*)>(_a[1]))); break;
        case 36: _t->p2pStart(); break;
        case 37: _t->p2pStop(); break;
        case 38: _t->patrolStart(); break;
        case 39: _t->goChargerStart(); break;
        case 40: _t->pathControl(); break;
        case 41: _t->exitCharger(); break;
        case 42: _t->wheelCmdSend((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 43: _t->headCmdSend((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 44: _t->laserCmdSend((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 45: _t->setROSReceive(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData drrobot_clinicrobot::MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject drrobot_clinicrobot::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_drrobot_clinicrobot__MainWindow,
      qt_meta_data_drrobot_clinicrobot__MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &drrobot_clinicrobot::MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *drrobot_clinicrobot::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *drrobot_clinicrobot::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_drrobot_clinicrobot__MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int drrobot_clinicrobot::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
