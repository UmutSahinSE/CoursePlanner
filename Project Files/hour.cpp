#include "hour.h"
#include <QPixmap>

Hour::Hour(QWidget *parent) : QLabel(parent)
{

}

void Hour::mousePressEvent(QMouseEvent *ev)
{
    emit MousePressed(this);
}
