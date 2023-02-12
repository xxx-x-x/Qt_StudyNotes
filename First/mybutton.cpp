#include "mybutton.h"
#include <QDebug>

mybutton::mybutton(QWidget *parent) : QPushButton(parent)
{
    qDebug() << " g";

}
mybutton::~mybutton()
{
    qDebug() << " ~ ";
}
