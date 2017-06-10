#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "sectionitem.h"

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
    //connect(ui->List1,SIGNAL(itemClicked(SectionItem*)),this,SLOT(Highlight(SectionItem*)));
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
    for(int counter=0;counter<40;counter++)
    {
        connect(Hours[counter],SIGNAL(MousePressed(Hour*)),this,SLOT(AddOrDiscardHour(Hour*)));
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

void MainWindow::Highlight(SectionItem* chosen)
{
    QPixmap Green(":/CarSpawn.png");
    if(chosen->value%2==0)
    {
        ui->MondayNine->setPixmap(Green);
    }
    if(chosen->value%3==0)
    {
        ui->MondayTen->setPixmap(Green);
    }
    if(chosen->value%5==0)
    {
        ui->MondayEleven->setPixmap(Green);
    }
    if(chosen->value%7==0)
    {
        ui->MondayTwelve->setPixmap(Green);
    }
    if(chosen->value%11==0)
    {
        ui->MondayThirteen->setPixmap(Green);
    }
    if(chosen->value%13==0)
    {
        ui->MondayFourteen->setPixmap(Green);
    }
    if(chosen->value%17==0)
    {
        ui->MondayFifteen->setPixmap(Green);
    }
    if(chosen->value%19==0)
    {
        ui->MondaySixteen->setPixmap(Green);
    }
    if(chosen->value%23==0)
    {
        ui->TuesdayNine->setPixmap(Green);
    }
    if(chosen->value%29==0)
    {
         ui->TuesdayTen->setPixmap(Green);
    }
    if(chosen->value%31==0)
    {
         ui->TuesdayEleven->setPixmap(Green);
    }
    if(chosen->value%37==0)
    {
         ui->TuesdayTwelve->setPixmap(Green);
    }
    if(chosen->value%41==0)
    {
         ui->TuesdayThirteen->setPixmap(Green);
    }
    if(chosen->value%43==0)
    {
         ui->TuesdayFourteen->setPixmap(Green);
    }
    if(chosen->value%47==0)
    {
         ui->TuesdayFifteen->setPixmap(Green);
    }
    if(chosen->value%53==0)
    {
         ui->TuesdaySixteen->setPixmap(Green);
    }
    if(chosen->value%59==0)
    {
         ui->WednesdayNine->setPixmap(Green);
    }
    if(chosen->value%61==0)
    {
        ui->WednesdayTen->setPixmap(Green);
    }
    if(chosen->value%67==0)
    {
        ui->WednesdayEleven->setPixmap(Green);
    }
    if(chosen->value%71==0)
    {
        ui->WednesdayTwelve->setPixmap(Green);
    }
    if(chosen->value%73==0)
    {
        ui->WednesdayThirteen->setPixmap(Green);
    }
    if(chosen->value%79==0)
    {
        ui->WednesdayFourteen->setPixmap(Green);
    }
    if(chosen->value%83==0)
    {
        ui->WednesdayFifteen->setPixmap(Green);
    }
    if(chosen->value%89==0)
    {
        ui->WednesdaySixteen->setPixmap(Green);
    }
    if(chosen->value%97==0)
    {
        ui->ThursdayNine->setPixmap(Green);
    }
    if(chosen->value%101==0)
    {
        ui->ThursdayTen->setPixmap(Green);
    }
    if(chosen->value%103==0)
    {
        ui->ThursdayEleven->setPixmap(Green);
    }
    if(chosen->value%107==0)
    {
        ui->ThursdayTwelve->setPixmap(Green);
    }
    if(chosen->value%109==0)
    {
        ui->ThursdayThirteen->setPixmap(Green);
    }
    if(chosen->value%113==0)
    {
        ui->ThursdayFourteen->setPixmap(Green);
    }
    if(chosen->value%127==0)
    {
        ui->ThursdayFifteen->setPixmap(Green);
    }
    if(chosen->value%131==0)
    {
        ui->ThursdaySixteen->setPixmap(Green);
    }
    if(chosen->value%137==0)
    {
        ui->FridayNine->setPixmap(Green);
    }
    if(chosen->value%139==0)
    {
        ui->FridayTen->setPixmap(Green);
    }
    if(chosen->value%149==0)
    {
        ui->FridayEleven->setPixmap(Green);
    }
    if(chosen->value%151==0)
    {
        ui->FridayTwelve->setPixmap(Green);
    }
    if(chosen->value%157==0)
    {
        ui->FridayThirteen->setPixmap(Green);
    }
    if(chosen->value%163==0)
    {
        ui->FridayFourteen->setPixmap(Green);
    }
    if(chosen->value%167==0)
    {
        ui->FridayFifteen->setPixmap(Green);
    }
    if(chosen->value%173==0)
    {
        ui->FridaySixteen->setPixmap(Green);
    }
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
    if(ui->SelectCourse->currentIndex()>-1)
    {
        for(int counter=0;counter<6;counter++)
        {
            if(Lists[counter]->accessibleDescription()==ui->SelectCourse->currentText())
            {
                while(Lists[counter]->count()>0)
                {
                    delete ui->List1->item(0);
                }
                Lists[counter]->setAccessibleDescription("empty");
                break;
            }
        }
        ui->SelectCourse->removeItem(ui->SelectCourse->currentIndex());
    }
}

void MainWindow::on_AddSection_clicked()
{
    SectionItem *newSection=new SectionItem;
    newSection->value=HoursWillIncluded;
    for(int counter=0;counter<6;counter++)
    {
        if(ui->SelectCourse->currentText()==Lists[counter]->accessibleDescription())
        {
            Lists[counter]->addItem(static_cast<QListWidgetItem*>(newSection));
            newSection->setText("Section "+QString::number(Lists[counter]->count()-1));
            break;
        }
    }
    HoursWillIncluded=1;
    SetAllRed();
    SetAllUnselected();
}
