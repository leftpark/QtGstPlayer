#include "mainwindow.h"

#include <QApplication>
#include <QDesktopWidget>

int
main(int argc, char **argv)
{
    QApplication app(argc, argv);

    // Hello World
    //QLabel label("Hello World!");
    //label.show();

    //
    QDesktopWidget dw;
    int x = 162;//dw.width()*0.2;
    int y = 56;//dw.height()*0.2;
    int screenW = dw.width()/2;
    int screenH = dw.height()/2;

    // Button
    MainWindow mainWindow;
    mainWindow.setFixedSize(x,y);
    mainWindow.setGeometry(screenW, screenH, x, y);
    mainWindow.showMaximized();

    return app.exec();
}
