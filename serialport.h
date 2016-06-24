#ifndef SERIALPORT_H
#define SERIALPORT_H

#include <QObject>
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QSerialPortInfo>

class SerialPort : public QObject
{
    Q_OBJECT
public:
    explicit SerialPort(QObject *parent = 0);
    QList<QSerialPortInfo> getList(void);

private:
    QSerialPort *comport;

signals:

public slots:
};

#endif // SERIALPORT_H
