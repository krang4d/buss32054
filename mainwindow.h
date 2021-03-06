#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QMenu>
#include <QtGui>
#include <QTextCodec>
#include <QMenuBar>
#include <QMessageBox>
#include <QStatusBar>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>

#include "centerwidget.h"

class mainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainWindow();
    void setNextLine(QString *);

protected:
    virtual void resizeEvent(QResizeEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void closeEvent(QCloseEvent *event);

private slots:
    void about();

private:
    QAction *aboutAction;
    QAction *exitAction;
    QMenu *fileMenu;
    QLabel *sb1;
    QLabel *sb2;
    QLabel *sb3;
    CenterWidget *cw;

    bool askClose();

};

#endif // MAINWINDOW_H
