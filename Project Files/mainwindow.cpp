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
    for(int counter=0;counter<5;counter++)
    {
        HoursWillIncluded[counter]=1;
    }
    Hours <<ui->MondayNine<<ui->MondayTen<<ui->MondayEleven<<ui->MondayTwelve<<ui->MondayThirteen<<ui->MondayFourteen<<ui->MondayFifteen<<ui->MondaySixteen<<ui->TuesdayNine<<ui->TuesdayTen<<ui->TuesdayEleven<<ui->TuesdayTwelve<<ui->TuesdayThirteen<<ui->TuesdayFourteen<<ui->TuesdayFifteen<<ui->TuesdaySixteen<<ui->WednesdayNine<<ui->WednesdayTen<<ui->WednesdayEleven<<ui->WednesdayTwelve<<ui->WednesdayThirteen<<ui->WednesdayFourteen<<ui->WednesdayFifteen<<ui->WednesdaySixteen<<ui->ThursdayNine<<ui->ThursdayTen<<ui->ThursdayEleven<<ui->ThursdayTwelve<<ui->ThursdayThirteen<<ui->ThursdayFourteen<<ui->ThursdayFifteen<<ui->ThursdaySixteen<<ui->FridayNine<<ui->FridayTen<<ui->FridayEleven<<ui->FridayTwelve<<ui->FridayThirteen<<ui->FridayFourteen<<ui->FridayFifteen<<ui->FridaySixteen;
    Lists <<ui->List1<<ui->List2<<ui->List3<<ui->List4<<ui->List5<<ui->List6;
    ListLabels<<ui->ListName1<<ui->ListName2<<ui->ListName3<<ui->ListName4<<ui->ListName5<<ui->ListName6;
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
    int counter3=0;
    for(int counter2=0;counter2<5;counter2++)
    {
        for(int counter=0;counter<8;counter++)
        {
            Hours[counter3]->Value=values[counter];
            Hours[counter3]->Selected=false;
            Hours[counter3]->day=counter2;
            ++counter3;
        }
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

bool MainWindow::HasSameHour(long int value1, long int value2)
{
    for(int counter=0;counter<8;counter++)
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
    QPixmap Red(":/RoadEnd.png");
    QPixmap Green(":/CarSpawn.png");
    SetAllRed();
    for(int counter=0;counter<40;counter++)
    {
        if(Hours[counter]->Selected)
            Hours[counter]->setPixmap(Green);
    }
    if(!Referance->Selected)
    {
        Referance->Selected=true;      
        Referance->setPixmap(Green);
        HoursWillIncluded[Referance->day]*=Referance->Value;
    }
    else
    {
        Referance->Selected=false;    
        Referance->setPixmap(Red);
        HoursWillIncluded[Referance->day]/=Referance->Value;
    }
}

void MainWindow::Highlight(QListWidgetItem *chosen)
{
    QPixmap Green(":/CarSpawn.png");
    SetAllRed();
    SetAllUnselected();
    int list;
    if(chosen->listWidget()->objectName()=="List1") list=0;
    else if(chosen->listWidget()->objectName()=="List2") list=1;
    else if(chosen->listWidget()->objectName()=="List3") list=2;
    else if(chosen->listWidget()->objectName()=="List4") list=3;
    else if(chosen->listWidget()->objectName()=="List5") list=4;
    else if(chosen->listWidget()->objectName()=="List6") list=5;
    for(int counter=0;counter<5;counter++)
    {
        for(int counter2=0;counter2<8;counter2++)
        {
           if(valuesOnLists[list][chosen->listWidget()->currentRow()][counter]%values[counter2]==0)
           {
               Hours[counter*8+counter2]->setPixmap(Green);
           }
        }
    }
//    QThread *myThread= new QThread;
//    DelayedConvertToRed *DCTW=new DelayedConvertToRed(Hours);
//    connect(myThread,SIGNAL(started()),DCTW,SLOT(StartT()));
//    DCTW->moveToThread(myThread);
//    myThread->start();
}

void MainWindow::HighlightResults(QListWidgetItem *chosen)
{
    QPixmap Green(":/CarSpawn.png");
    SetAllRed();
    SetAllUnselected();
    for(int counter=0;counter<8;counter++)
    {
       for(int counter2=0;counter2<5;counter2++)
       {
           if(valuesOnLists[finalList][chosen->listWidget()->currentRow()][counter2]%values[counter]==0)
           {
               Hours[counter2*8+counter]->setPixmap(Green);
           }
       }
    }
//    QThread *myThread= new QThread;
//    DelayedConvertToRed *DCTW=new DelayedConvertToRed(Hours);
//    connect(myThread,SIGNAL(started()),DCTW,SLOT(StartT()));
//    DCTW->moveToThread(myThread);
//    myThread->start();
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
    for(int counter=0;counter<6;counter++)
    {
        if(Lists[counter]->accessibleDescription()=="empty")
        {
            ListLabels[counter]->setText(ui->AddCourseLine->text());
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
                ListLabels[counter]->setText("Empty");
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
    for(int counter=0;counter<5;counter++)
    {
        if(HoursWillIncluded[counter]!=1)
        {
            break;
        }
        if(counter==4)
        {
            QMessageBox::information(this,"Error","No hours is selected");
            return;
        }
    }

    QListWidgetItem *newSection=new QListWidgetItem;
    for(int counter=0;counter<6;counter++)
    {
        if(ui->SelectCourse->currentText()==Lists[counter]->accessibleDescription())
        {
            for(int counter2=0;counter2<5;counter2++)
            {
                valuesOnLists[counter][valuesOnListsSize[counter]][counter2]=HoursWillIncluded[counter2];
            }
            valuesOnListsSize[counter]++;
            Lists[counter]->addItem(newSection);
            newSection->setText("Section "+QString::number(Lists[counter]->count()));
            break;
        }
    }
    for(int counter3=0;counter3<5;counter3++)
    {
        HoursWillIncluded[counter3]=1;
    }
    SetAllRed();
    SetAllUnselected();
}
void MainWindow::on_Done_clicked()
{
    int list1,list2,tempresultsSize=0;
    long int tempresults[500][5];
    int countViableLists=0,counter,counter2,counter3;
    for(int counter=0;counter<6;counter++)
    {
        if(Lists[counter]->count()>0) countViableLists++;
    }
    if(countViableLists<2)
    {
        QMessageBox::information(this,"Error","There is too few courses with sections");
        return;
    }
    countViableLists=0;
    for(counter=0;counter<6;counter++)
    {
        if(Lists[counter]->count()>0) //if list is not empty
        {
            if(countViableLists==1)
            {
                list2=counter;
                for(counter2=0;counter2<valuesOnListsSize[list1];counter2++)
                {
                    for(counter3=0;counter3<valuesOnListsSize[list2];counter3++)
                    {
                        for(int counter4=0;counter4<5;counter4++)
                        {
                            if(HasSameHour(valuesOnLists[list1][counter2][counter4],valuesOnLists[list2][counter3][counter4]))
                            {
                                 break;
                            }
                            if(counter4==4)
                            {
                                for(int counter5=0;counter5<tempresultsSize;counter5++)
                                {
                                    int identical=0;
                                    for(int counter6=0;counter6<5;counter6++)
                                    {   
                                        if(tempresults[counter5][counter6]==valuesOnLists[list1][counter2][counter6]*valuesOnLists[list2][counter3][counter6])
                                        {
                                            ++identical;
                                            if(identical==5)
                                            {
                                                counter5=tempresultsSize;
                                                break;
                                            }
                                        }
                                    }
                                    if(counter5==tempresultsSize-1)
                                    {
                                        for(int counter6=0;counter6<5;counter6++)
                                        {
                                            tempresults[tempresultsSize][counter6]=valuesOnLists[list1][counter2][counter6]*valuesOnLists[list2][counter3][counter6];
                                        }
                                        ++tempresultsSize;
                                    }
                                }
                                if(tempresultsSize==0)
                                {
                                    for(int counter6=0;counter6<5;counter6++)
                                    {
                                        tempresults[0][counter6]=valuesOnLists[list1][counter2][counter6]*valuesOnLists[list2][counter3][counter6];
                                    }
                                    ++tempresultsSize;
                                }
                            }
                        }
                    }
                }
                for(counter2=0;counter2<tempresultsSize;counter2++)
                {
                    for(counter3=0;counter3<5;counter3++)
                    {
                        valuesOnLists[list1][counter2][counter3]=tempresults[counter2][counter3];
                    }
                }
                valuesOnListsSize[list1]=tempresultsSize;
                tempresultsSize=0;
            }
            else if(countViableLists==0)
            {
                list1=counter;
                countViableLists++;
            }
        }
    }
    QListWidget *results=new QListWidget;   
    delete ui->List1;
    delete ui->List2;
    delete ui->List3;
    delete ui->List4;
    delete ui->List5;
    delete ui->List6;
    delete ui->ListName1;
    delete ui->ListName2;
    delete ui->ListName3;
    delete ui->ListName4;
    delete ui->ListName5;
    delete ui->ListName6;
    ui->splitter_4->addWidget(results);
    DisconnectMouseEvents();
    finalList=list1;
    for(counter=0;counter<valuesOnListsSize[list1];counter++)
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
