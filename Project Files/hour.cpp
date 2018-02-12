#include "hour.h"

Hour::Hour(QWidget *parent) : QLabel(parent)
{
    QPalette red;
    red.setColor(QPalette::Window,Qt::red);
    setPalette(red);
}

void Hour::mousePressEvent(QMouseEvent *ev)
{
    emit MousePressed(this);
}
