#include "mainwindow.h"
#include <QCoreApplication>
#include <stdio.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Create the button, make "this" the parent.
    mPrev= new QPushButton("<<", this);
    mPlay= new QPushButton(">", this);
    mNext= new QPushButton(">>", this);

    // Set size and location of the button.
    mPrev->setGeometry(QRect(QPoint(3,3),QSize(50,50)));
    mPlay->setGeometry(QRect(QPoint(56,3),QSize(50,50)));
    mNext->setGeometry(QRect(QPoint(109,3),QSize(50,50)));

    // Connect button signal to appropriate slot
    connect(mPrev, SIGNAL(released()), this, SLOT(handleButton()));
    connect(mPlay, SIGNAL(released()), this, SLOT(handleButton()));
    connect(mNext, SIGNAL(released()), this, SLOT(handleButton()));
}

void MainWindow::changeButtonColor(QPushButton *btn)
{
    QPalette *p = new QPalette();
    p->setColor(QPalette::Button, Qt::green);
    btn->setPalette(*p);
}

void MainWindow::handleButton()
{
//*
    QPushButton *sender = qobject_cast<QPushButton *>(this->sender());
    if (sender == mPrev) {
        // TODO
        changeButtonColor(mPrev);
    } else if (sender == mPlay) {
        // TODO
        changeButtonColor(mPlay);
        mPlay->setText("[]");
        printf("handleButton() mPlay");
        scan("/home/pi/music/");
    } else if (sender == mNext) {
        // TODO
        changeButtonColor(mNext);
    } else {
        // TODO
    }
//*/
}
