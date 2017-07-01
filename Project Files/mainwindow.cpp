#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "delayedconverttored.h"
#include <QThread>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{   
    ui->setupUi(this);
    HoursWillIncluded=1;
    Hours <<ui->MondayNine<<ui->MondayTen<<ui->MondayEleven<<ui->MondayTwelve<<ui->MondayThirteen<<ui->MondayFourteen<<ui->MondayFifteen<<ui->MondaySixteen<<ui->TuesdayNine<<ui->TuesdayTen<<ui->TuesdayEleven<<ui->TuesdayTwelve<<ui->TuesdayThirteen<<ui->TuesdayFourteen<<ui->TuesdayFifteen<<ui->TuesdaySixteen<<ui->WednesdayNine<<ui->WednesdayTen<<ui->WednesdayEleven<<ui->WednesdayTwelve<<ui->WednesdayThirteen<<ui->WednesdayFourteen<<ui->WednesdayFifteen<<ui->WednesdaySixteen<<ui->ThursdayNine<<ui->ThursdayTen<<ui->ThursdayEleven<<ui->ThursdayTwelve<<ui->ThursdayThirteen<<ui->ThursdayFourteen<<ui->ThursdayFifteen<<ui->ThursdaySixteen<<ui->FridayNine<<ui->FridayTen<<ui->FridayEleven<<ui->FridayTwelve<<ui->FridayThirteen<<ui->FridayFourteen<<ui->FridayFifteen<<ui->FridaySixteen;
    Lists <<ui->List1<<ui->List2<<ui->List3<<ui->List4<<ui->List5<<ui->List6;
    resize(1200,800);
    ConnectMouseEvents();
    InitializeValues();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SetAllUnselected()
{
    for(int counter=0;counter<40;counter++)
    {
        Hours[counter]->Selected=false;
    }
}

void MainWindow::ConnectMouseEvents()
{
    int counter;
    for(counter=0;counter<40;counter++)
    {
        connect(Hours[counter],SIGNAL(MousePressed(Hour*)),this,SLOT(AddOrDiscardHour(Hour*)));
    }
    for(counter=0;counter<6;counter++)
    {
        connect(Lists[counter],SIGNAL(itemClicked(QListWidgetItem*)),this,SLOT(Highlight(QListWidgetItem*)));
    }
}

void MainWindow::DisconnectMouseEvents()
{
    for(int counter=0;counter<40;counter++)
    {
        disconnect(Hours[counter],SIGNAL(MousePressed(Hour*)),this,SLOT(AddOrDiscardHour(Hour*)));
    }
}

void MainWindow::InitializeValues()
{
    for(int counter=0;counter<40;counter++)
    {
        Hours[counter]->Value=values[counter];
    }
}

void MainWindow::SetAllRed()
{
    for(int counter=0;counter<40;counter++)
    {
        QPixmap Red(":/RoadEnd.png");
        Hours[counter]->setPixmap(Red);
    }
}

bool MainWindow::HasSameHour(long long int value1,long long int value2)
{
    for(int counter=0;counter<40;counter++)
    {
        if(value1%values[counter]==0&&value2%values[counter]==0)
        {
            return true;
        }
    }
    return false;
}

void MainWindow::AddOrDiscardHour(Hour *Referance)
{
    if(!Referance->Selected)
    {
        Referance->Selected=true;
        QPixmap Green(":/CarSpawn.png");
        Referance->setPixmap(Green);
        HoursWillIncluded*=Referance->Value;
    }
    else
    {
        Referance->Selected=false;
        QPixmap Red(":/RoadEnd.png");
        Referance->setPixmap(Red);
        HoursWillIncluded=HoursWillIncluded/Referance->Value;
    }
    ui->AddCourseLine->setText(QString::number(HoursWillIncluded));
}

void MainWindow::Highlight(QListWidgetItem *chosen)
{
    QPixmap Green(":/CarSpawn.png");
    int list;
    if(chosen->listWidget()->objectName()=="List1") list=0;
    else if(chosen->listWidget()->objectName()=="List2") list=1;
    else if(chosen->listWidget()->objectName()=="List3") list=2;
    else if(chosen->listWidget()->objectName()=="List4") list=3;
    else if(chosen->listWidget()->objectName()=="List5") list=4;
    else if(chosen->listWidget()->objectName()=="List6") list=5;
    for(int counter=0;counter<40;counter++)
    {
       if(valuesOnLists[list][chosen->listWidget()->currentRow()-1]%values[counter]==0)
       {
           Hours[counter]->setPixmap(Green);
       }
    }
    QThread *myThread= new QThread;
    DelayedConvertToRed *DCTW=new DelayedConvertToRed(Hours);
    connect(myThread,SIGNAL(started()),DCTW,SLOT(StartT()));
    DCTW->moveToThread(myThread);
    myThread->start();
}

void MainWindow::HighlightResults(QListWidgetItem *chosen)
{
    QPixmap Green(":/CarSpawn.png");
    for(int counter=0;counter<40;counter++)
    {
       if(ResultValues[chosen->listWidget()->currentRow()]%static_cast<long long int>(values[counter]==0))
       {
           Hours[counter]->setPixmap(Green);
       }
    }
    QThread *myThread= new QThread;
    DelayedConvertToRed *DCTW=new DelayedConvertToRed(Hours);
    connect(myThread,SIGNAL(started()),DCTW,SLOT(StartT()));
    DCTW->moveToThread(myThread);
    myThread->start();
}

void MainWindow::on_AddCourseButton_clicked()
{
    if(ui->SelectCourse->count()==6)
    {
        QMessageBox::information(this,"Error","Too Many Courses");
        return;
    }
    if(ui->AddCourseLine->text().size()==0)
    {
        return;
    }
    ui->SelectCourse->addItem(ui->AddCourseLine->text());
    ui->SelectCourse->setCurrentIndex(ui->SelectCourse->count()-1);
    QListWidgetItem *newCourse= new QListWidgetItem;
    newCourse->setText(ui->AddCourseLine->text());
    newCourse->setTextColor(Qt::red);
    for(int counter=0;counter<6;counter++)
    {
        if(Lists[counter]->accessibleDescription()=="empty")
        {
            Lists[counter]->addItem(newCourse);
            Lists[counter]->setAccessibleDescription(ui->AddCourseLine->text());
            break;
        }
    }

}

void MainWindow::on_DeleteCourse_clicked()
{
    if(ui->SelectCourse->count()>0)
    {
        for(int counter=0;counter<6;counter++)
        {
            if(Lists[counter]->accessibleDescription()==ui->SelectCourse->currentText())
            {
                valuesOnListsSize[counter]=0;
                Lists[counter]->clear();
                Lists[counter]->setAccessibleDescription("empty");
                break;
            }
        }
        ui->SelectCourse->removeItem(ui->SelectCourse->currentIndex());
    }
    else
    {
        QMessageBox::information(this,"Error","No courses to delete");
    }
}

void MainWindow::on_AddSection_clicked()
{
    if(ui->SelectCourse->count()==0)
    {
        QMessageBox::information(this,"Error","No course is selected");
        return;
    }
    if(HoursWillIncluded==1)
    {
        QMessageBox::information(this,"Error","No hours is selected");
        return;
    }
    QListWidgetItem *newSection=new QListWidgetItem;
    for(int counter=0;counter<6;counter++)
    {
        if(ui->SelectCourse->currentText()==Lists[counter]->accessibleDescription())
        {
            valuesOnLists[counter][valuesOnListsSize[counter]]=HoursWillIncluded;
            valuesOnListsSize[counter]++;
            Lists[counter]->addItem(newSection);
            newSection->setText("Section "+QString::number(Lists[counter]->count()-1));
            break;
        }
    }
    HoursWillIncluded=1;
    SetAllRed();
    SetAllUnselected();
}


void MainWindow::on_Done_clicked()
{
    QVector<long long int> tempResults,hours1,hours2;
    int countViableLists=0,counter,counter2,counter3;
    for(int counter=0;counter<6;counter++)
    {
        if(Lists[counter]->count()>1) countViableLists++;
    }
    if(countViableLists<2)
    {
        QMessageBox::information(this,"Error","There is too few courses with sections");
        return;
    }
    countViableLists=0;
    for(counter=0;counter<6;counter++)
    {
        if(Lists[counter]->count()>1)
        {
            if(countViableLists==1)
            {
                for(counter2=0;counter2<valuesOnListsSize[counter];counter2++)
                {
                    hours2<<static_cast<long long int>(valuesOnLists[counter][counter2]);
                }
                for(counter2=0;counter2<hours1.size();counter2++)
                {
                    for(counter3=0;counter3<hours2.size();counter3++)
                    {
                        if(!HasSameHour(hours1[counter2],hours2[counter3]))
                        {
                            tempResults<<hours1[counter2]*hours2[counter3];
                        }
                    }
                }
                counter3=tempResults.size();
                hours1.clear();
                for(counter2=0;counter2<counter3;counter2++)
                {
                    hours1<<tempResults[counter2];
                }
                tempResults.clear();
            }
            else if(countViableLists==0)
            {
                for(counter2=0;counter2<valuesOnListsSize[counter];counter2++)
                {
                    hours1<<static_cast<long long int>(valuesOnLists[counter][counter2]);
                }
                countViableLists++;
            }
        }
    }
    QListWidget *results=new QListWidget;
    ui->splitter_4->addWidget(results);
    delete ui->List1;
    delete ui->List2;
    delete ui->List3;
    delete ui->List4;
    delete ui->List5;
    delete ui->List6;
    ResultValues.clear();
    for(counter=0;counter<hours1.size();counter++)
    {
        ResultValues<<hours1[counter];
    }
    for(counter=0;counter<hours1.size();counter++)
    {
        QListWidgetItem *resultItem=new QListWidgetItem;
        resultItem->setText("Section "+QString::number(counter+1));
        results->addItem(resultItem);
    }
    connect(results,SIGNAL(itemClicked(QListWidgetItem*)),this,SLOT(HighlightResults(QListWidgetItem*)));
    delete ui->AddCourseButton;
    delete ui->AddCourseLine;
    delete ui->AddSection;
    delete ui->Done;
    delete ui->DeleteCourse;
    delete ui->SelectCourse;
    //Last work, use hour1
    //Dont Highlight Course names
    //Mutex
}
