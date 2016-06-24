#include "serialport.h"

SerialPort::SerialPort(QObject *parent) : QObject(parent)
{
    qDebug() << QString(tr("SerialPort()"));
    comport = new QSerialPort;
}

QList<QSerialPortInfo> SerialPort::getList(void){
    return QSerialPortInfo::availablePorts();
    //listCom = comport.
}
