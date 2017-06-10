#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include "hour.h"
#include "sectionitem.h"
#include "ui_mainwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int HoursWillIncluded;
    int values[40]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173};
    QList<Hour*> Hours;
    QList<QListWidget*> Lists;

    void SetAllUnselected();
    void ConnectMouseEvents();
    void DisconnectMouseEvents();
    void InitializeValues();
    void SetAllRed();

private:
    Ui::MainWindow *ui;

public slots:
    void AddOrDiscardHour(Hour *Referance);
    void Highlight(SectionItem*chosen);
private slots:
    void on_AddCourseButton_clicked();
    void on_DeleteCourse_clicked();
    void on_AddSection_clicked();
};

#endif // MAINWINDOW_H
