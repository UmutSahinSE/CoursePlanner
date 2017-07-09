#ifndef DELAYEDCONVERTTORED_H
#define DELAYEDCONVERTTORED_H

#include <QObject>
#include <QTimer>
#include "hour.h"


class DelayedConvertToRed : public QObject
{
    Q_OBJECT
public:
    explicit DelayedConvertToRed(QObject *parent = 0);
    DelayedConvertToRed(QList<Hour*> HoursRef);
    QList<Hour*> Hours;

signals:

public slots:
    void StartT();
    void ConvertToRed();
};

#endif // DELAYEDCONVERTTORED_H
