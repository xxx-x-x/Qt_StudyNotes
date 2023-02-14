#include "widget.h"
#include<QPushButton>
#include "mybutton.h"
#include "teacher.h"
#include "student.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    w1.resize(100,100);
    setFixedSize(500,500);
    setWindowTitle("myfirst windows");

    QPushButton *btn = new QPushButton(this);
    btn->setParent(this);
    btn->setText("upload");

    QPushButton *btn2 = new QPushButton(this);
    btn2->setParent(this);
    btn2->setText("download");
    btn2->move(100,0);

    mybutton *btn3 = new mybutton(this);
    btn3->setParent(this);
    btn3->setText("open");
    btn3->move(200,0);
    connect(btn3,&mybutton::clicked,this,[=](){
        if(btn3->getNum()==1)
        {
            btn3->setNum(0);
            btn3->setText("close");
            w1.show();
        }else{
            btn3->setNum(1);
            btn3->setText("open");
            w1.hide();
        }
    });


}

Widget::~Widget()
{
}

