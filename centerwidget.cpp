#include "centerwidget.h"

CenterWidget::CenterWidget(QWidget *parent) : QWidget(parent)
{
    //Layout setup
    QVBoxLayout *masterLayout = new QVBoxLayout;
    MessageLabel = new QLabel(tr("Cообщения оператору"));
    masterLayout->addWidget(MessageTextEdit);
    MessageTextEdit = new QTextEdit(tr("<p>Начало проверки модуля МС-54.011</p>"));
    masterLayout->addWidget(MessageTextEdit);

    QHBoxLayout *slaveLayout = new QHBoxLayout;
    StartButton = new QPushButton(tr("Начать проверку"));
    AbortButton = new QPushButton(tr("Прервать проверку"));
    ExitButton = new QPushButton(tr("Закрыть программу"));
    slaveLayout->addWidget(StartButton);
    slaveLayout->addWidget(AbortButton);
    slaveLayout->addWidget(ExitButton);

    masterLayout->addLayout(slaveLayout);
    setLayout(masterLayout);
}
