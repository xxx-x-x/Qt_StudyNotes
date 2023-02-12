#include "widget.h"

#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//recv command-line arguement
    Widget w;//windows object
    w.show();//using show() to show windows
    return a.exec();//enter Message loop mechanism

}
