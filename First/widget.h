#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    QWidget w1;
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H
