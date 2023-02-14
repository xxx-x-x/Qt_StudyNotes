#include "widget.h"
#include"mainwindows.h"

#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//recv command-line arguement
    mainwindows m;
    m.show();
    return a.exec();//enter Message loop mechanism
}

