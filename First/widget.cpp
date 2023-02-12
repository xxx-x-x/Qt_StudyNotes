#include "widget.h"
#include<QPushButton>
#include "mybutton.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(500,500);
    setWindowTitle("myfirst windows");
    QPushButton *btn = new QPushButton(this);
    btn->setParent(this);
    btn->setText("upload");
    QPushButton *btn2 = new QPushButton(this);
    btn2->setParent(this);
    btn2->setText("download");
    btn2->move(100,0);

    mybutton *bu = new mybutton;
    bu->move(200,0);
    bu->setText("zidongyi");
    bu->setParent(this);
}

Widget::~Widget()
{
}

