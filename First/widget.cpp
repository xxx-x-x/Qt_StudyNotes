#include "widget.h"
#include<QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(500,500);
    setWindowTitle("myfirst windows");
    QPushButton *btn = new QPushButton(this);
    btn->setParent(this);
    btn->setText("upload");
}

Widget::~Widget()
{
}

