#include <QApplication>
#include <QMainWindow>
#include <QVBoxLayout>
#include <QLabel>
#include <QTextCodec>

#include "mainwindow.h"


int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    mainWindow *mw = new mainWindow;
    mw->setWindowTitle(QMainWindow::tr("КИНД.468354.011"));
    mw->resize(1000, 500);
    mw->show();

    return app.exec();
 }
