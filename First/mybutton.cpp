#include "mybutton.h"
#include <QDebug>

mybutton::mybutton(QWidget *parent) : QPushButton(parent)
{
    qDebug() << " g";
    this->num = 1;

}
mybutton::~mybutton()
{
    qDebug() << " ~ ";
}
void mybutton::setNum(int n)
{
    this->num = n;
}
int mybutton::getNum()
{
    return this->num;
}
