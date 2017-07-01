#include "delayedconverttored.h"

DelayedConvertToRed::DelayedConvertToRed(QObject *parent) : QObject(parent)
{

}

DelayedConvertToRed::DelayedConvertToRed(QList<Hour *> HoursRef )
{
    for(int counter=0;counter<40;counter++)
    {
       Hours<<HoursRef[counter];
    }
}

void DelayedConvertToRed::StartT()
{
    QTimer *Time=new QTimer(this);
    connect(Time,SIGNAL(timeout()),this,SLOT(ConvertToRed()));
    Time->start(1000);
}

void DelayedConvertToRed::ConvertToRed()
{
    for(int counter=0;counter<40;counter++)
    {
        QPixmap Red(":/RoadEnd.png");
        Hours[counter]->setPixmap(Red);
    }
    delete this;
}
