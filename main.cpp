#include <QApplication>
#include <QMainWindow>
#include <QVBoxLayout>
#include <QLabel>
#include <QTextCodec>

#include "mainwindow.h"
#include "serialport.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);    

    mainWindow *mw = new mainWindow;
    SerialPort *sp = new SerialPort;
    QString *msg = new QString(QMainWindow::tr("<p>Начало проверки модуля МС-54.011</p>"));


    mw->setWindowTitle(QMainWindow::tr("КИНД.468354.011"));
    mw->resize(1000, 500);
    mw->show();

    msg->append(QMainWindow::tr("<p>setNextLine()</p>"));
    mw->setNextLine(msg);

    QList<QSerialPortInfo> listCom =  sp->getList();
    QListIterator<QSerialPortInfo> i(listCom);
    while(i.hasNext()){
        msg->append(i.next().portName());
        mw->setNextLine(msg);
    }

    return app.exec();
 }
