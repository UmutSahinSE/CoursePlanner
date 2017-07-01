#ifndef HOUR_H
#define HOUR_H

#include <QObject>
#include <QLabel>
#include <QMouseEvent>
#include <QEvent>

class Hour : public QLabel
{
    Q_OBJECT
public:
    explicit Hour(QWidget *parent = 0);
    int Value;
    bool Selected;
    void mousePressEvent(QMouseEvent *ev);
signals:
    void MousePressed(Hour*);

public slots:
};

#endif // HOUR_H
