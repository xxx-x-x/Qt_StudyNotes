#include "student.h"
#include <QDebug>

student::student(QObject *parent) : QObject(parent)
{

}
void student::treat()
{
    qDebug()<< "studnet";
}
