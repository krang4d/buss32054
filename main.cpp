#include <QApplication>
#include <QtGui>
#include <QMainWindow>
#include <QVBoxLayout>
#include <QLabel>
#include <QTextCodec>
//#include <QLayout>
//#include <QList>


int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    QTextCodec *codec = QTextCodec::codecForName("UTF8");
    QTextCodec::setCodecForLocale(codec);

    QMainWindow *mw = new QMainWindow(0, Qt::Window);
    QVBoxLayout *center = new QVBoxLayout();
    QLabel *label = new QLabel(QMainWindow::tr("КИНД.468354.011"));
    center->addWidget(label);
    mw->setLayout(center);
    mw->setWindowTitle(QMainWindow::tr("КИНД.468354.011"));
    mw->resize(600, 300);
    mw->show();

    return app.exec();
 }
