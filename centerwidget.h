#ifndef CENTERWIDGET_H
#define CENTERWIDGET_H

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QTextEdit>

class CenterWidget : public QWidget
{
    Q_OBJECT
public:
    CenterWidget(QWidget *parent = 0);

private:
    QLabel *MessageLabel;
    QTextEdit *MessageTextEdit;
    QPushButton *StartButton;
    QPushButton *AbortButton;
    QPushButton *ExitButton;

signals:

public slots:
};

#endif // CENTERWIDGET_H
