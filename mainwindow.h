#ifndef __MAINWINDOW_H__
#define __MAINWINDOW_H__

#include <QMainWindow>
#include <QPushButton>

#ifdef __cplusplus
extern "C"{
#endif
 
#include "include/scanner.h"

#ifdef __cplusplus
}
#endif

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
private slots:
    void changeButtonColor(QPushButton *btn);
    void handleButton();
private:
    QPushButton *mPrev;
    QPushButton *mPlay;
    QPushButton *mNext;
};

#endif //__MAINWINDOW_H__
