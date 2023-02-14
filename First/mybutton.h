#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QWidget>
#include <QPushButton>

class mybutton : public QPushButton
{
    Q_OBJECT
public:
    explicit mybutton(QWidget *parent = nullptr);
    ~mybutton();

    void setNum(int n);
    int getNum();
signals:
    void open();
private:
    int num;
};

#endif // MYBUTTON_H
