#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include "hour.h"
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
    long int HoursWillIncluded[5];
    long int values[8]={2,3,5,7,11,13,17,19};
    QList<Hour*> Hours;
    QList<QLabel*> ListLabels;
    QList<QListWidget*> Lists;
    QVector<long int> ResultValues;
    long int valuesOnLists[6][5][60];
    int valuesOnListsSize[6]={0},finalList=0;

    void deleteForResults();
    void SetAllUnselected();
    void ConnectMouseEvents();
    void DisconnectMouseEvents();
    void InitializeValues();
    void SetAllRed();
    bool HasSameHour(long int value1,long int value2);
    void clearLayout(QLayout *layout);

private:
    Ui::MainWindow *ui;

public slots:
    void AddOrDiscardHour(Hour *Referance);
    void Highlight(QListWidgetItem* chosen);
    void HighlightResults(QListWidgetItem* chosen);
    void HighlightFromSaveResults(QListWidgetItem *chosen);
    void Save();
private slots:
    void on_AddCourseButton_clicked();
    void on_DeleteCourse_clicked();
    void on_AddSection_clicked();
    void on_Done_clicked();
    void on_actionOpen_triggered();
};

#endif // MAINWINDOW_H
