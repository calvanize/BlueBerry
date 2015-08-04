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
      44,   14, // methods
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
     318,   32,   32,   32, 0x08,
     342,   32,   32,   32, 0x08,
     362,   32,   32,   32, 0x08,
     381,   32,   32,   32, 0x08,
     397,   32,   32,   32, 0x08,
     415,   32,   32,   32, 0x08,
     444,   32,   32,   32, 0x08,
     464,   32,   32,   32, 0x08,
     480,   32,   32,   32, 0x08,
     501,   32,   32,   32, 0x08,
     515,   32,   32,   32, 0x08,
     536,   32,   32,   32, 0x08,
     559,   32,   32,   32, 0x08,
     570,   32,   32,   32, 0x08,
     580,   32,   32,   32, 0x08,
     600,   32,   32,   32, 0x08,
     624,  618,   32,   32, 0x08,
     645,  637,   32,   32, 0x08,
     680,  676,   32,   32, 0x08,
     715,   32,   32,   32, 0x08,
     726,   32,   32,   32, 0x08,
     736,   32,   32,   32, 0x08,
     750,   32,   32,   32, 0x08,
     767,   32,   32,   32, 0x08,
     781,   32,   32,   32, 0x08,
     825,  795,   32,   32, 0x08,
     924,  851,   32,   32, 0x08,
     985,  967,   32,   32, 0x08,
    1010,   32,   32,   32, 0x08,

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
    "bool\0event(QEvent*)\0connectToLaserDrive()\0"
    "processLaserDriveData()\0sendLaserDriveCmd()\0"
    "setLaserAutoScan()\0laserAutoScan()\0"
    "laserResetDrive()\0connectToChargerController()\0"
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
        case 14: _t->connectToLaserDrive(); break;
        case 15: _t->processLaserDriveData(); break;
        case 16: _t->sendLaserDriveCmd(); break;
        case 17: _t->setLaserAutoScan(); break;
        case 18: _t->laserAutoScan(); break;
        case 19: _t->laserResetDrive(); break;
        case 20: _t->connectToChargerController(); break;
        case 21: _t->processChargeData(); break;
        case 22: _t->sendChargeCmd(); break;
        case 23: _t->sendSwitchPowerCmd(); break;
        case 24: _t->setChargeEn(); break;
        case 25: _t->connectToIndoorGPS(); break;
        case 26: _t->processIndoorGPSData(); break;
        case 27: _t->ctrlFunc(); break;
        case 28: _t->disData(); break;
        case 29: _t->newConnectionFace(); break;
        case 30: _t->processFaceData(); break;
        case 31: _t->setFile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->updateSensorMap((*reinterpret_cast< SensorMapData(*)>(_a[1]))); break;
        case 33: _t->p2pUpdateMotorCmd((*reinterpret_cast< MotorControlCmd(*)>(_a[1]))); break;
        case 34: _t->p2pStart(); break;
        case 35: _t->p2pStop(); break;
        case 36: _t->patrolStart(); break;
        case 37: _t->goChargerStart(); break;
        case 38: _t->pathControl(); break;
        case 39: _t->exitCharger(); break;
        case 40: _t->wheelCmdSend((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 41: _t->headCmdSend((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 42: _t->laserCmdSend((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 43: _t->setROSReceive(); break;
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
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
