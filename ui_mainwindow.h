/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <hour.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *DeleteCourse;
    QPushButton *AddCourseButton;
    QSplitter *splitter_5;
    QWidget *layoutWidget;
    QGridLayout *ScheduleLayout;
    Hour *ThursdayNine;
    QLabel *Monday;
    QLabel *Tuesday;
    QLabel *Wednesday;
    QLabel *label_6;
    QLabel *Thursday;
    QLabel *Friday;
    QLabel *Nine;
    Hour *MondayNine;
    Hour *TuesdayNine;
    Hour *WednesdayNine;
    Hour *FridayNine;
    QLabel *Ten;
    Hour *MondayTen;
    Hour *WednesdayTen;
    Hour *FridayTen;
    QLabel *Eleven;
    Hour *ThursdayTen;
    Hour *MondayEleven;
    Hour *ThursdayEleven;
    Hour *TuesdayEleven;
    Hour *FridayEleven;
    Hour *WednesdayEleven;
    Hour *MondayTwelve;
    QLabel *Twelve;
    Hour *TuesdayTwelve;
    Hour *WednesdayTwelve;
    Hour *FridayTwelve;
    QLabel *Thirteen;
    Hour *MondayThirteen;
    Hour *ThursdayTwelve;
    Hour *TuesdayThirteen;
    Hour *ThursdayThirteen;
    Hour *FridayThirteen;
    Hour *WednesdayThirteen;
    QLabel *Fourteen;
    Hour *MondayFourteen;
    Hour *TuesdayFourteen;
    Hour *WednesdayFourteen;
    Hour *FridayFourteen;
    QLabel *Fifteen;
    Hour *ThursdayFourteen;
    Hour *MondayFifteen;
    Hour *ThursdayFifteen;
    Hour *TuesdayFifteen;
    Hour *FridayFifteen;
    Hour *WednesdayFifteen;
    Hour *MondaySixteen;
    Hour *WednesdaySixteen;
    QLabel *Sixteen;
    Hour *TuesdaySixteen;
    Hour *ThursdaySixteen;
    Hour *FridaySixteen;
    Hour *TuesdayTen;
    QSplitter *splitter_4;
    QSplitter *splitter;
    QListWidget *List1;
    QListWidget *List2;
    QSplitter *splitter_2;
    QListWidget *List3;
    QListWidget *List4;
    QSplitter *splitter_3;
    QListWidget *List5;
    QListWidget *List6;
    QComboBox *SelectCourse;
    QPushButton *AddSection;
    QLineEdit *AddCourseLine;
    QPushButton *Done;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(711, 434);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        DeleteCourse = new QPushButton(centralWidget);
        DeleteCourse->setObjectName(QStringLiteral("DeleteCourse"));

        gridLayout->addWidget(DeleteCourse, 1, 3, 1, 1);

        AddCourseButton = new QPushButton(centralWidget);
        AddCourseButton->setObjectName(QStringLiteral("AddCourseButton"));

        gridLayout->addWidget(AddCourseButton, 1, 1, 1, 1);

        splitter_5 = new QSplitter(centralWidget);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        splitter_5->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter_5);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        ScheduleLayout = new QGridLayout(layoutWidget);
        ScheduleLayout->setSpacing(6);
        ScheduleLayout->setContentsMargins(11, 11, 11, 11);
        ScheduleLayout->setObjectName(QStringLiteral("ScheduleLayout"));
        ScheduleLayout->setContentsMargins(0, 0, 0, 0);
        ThursdayNine = new Hour(layoutWidget);
        ThursdayNine->setObjectName(QStringLiteral("ThursdayNine"));
        ThursdayNine->setMouseTracking(true);
        ThursdayNine->setFrameShape(QFrame::Box);
        ThursdayNine->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        ThursdayNine->setScaledContents(true);
        ThursdayNine->setProperty("Selected", QVariant(false));
        ThursdayNine->setProperty("Value", QVariant(97));

        ScheduleLayout->addWidget(ThursdayNine, 1, 4, 1, 1);

        Monday = new QLabel(layoutWidget);
        Monday->setObjectName(QStringLiteral("Monday"));
        Monday->setFrameShape(QFrame::Box);

        ScheduleLayout->addWidget(Monday, 0, 1, 1, 1);

        Tuesday = new QLabel(layoutWidget);
        Tuesday->setObjectName(QStringLiteral("Tuesday"));
        Tuesday->setFrameShape(QFrame::Box);

        ScheduleLayout->addWidget(Tuesday, 0, 2, 1, 1);

        Wednesday = new QLabel(layoutWidget);
        Wednesday->setObjectName(QStringLiteral("Wednesday"));
        Wednesday->setFrameShape(QFrame::Box);

        ScheduleLayout->addWidget(Wednesday, 0, 3, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFrameShape(QFrame::NoFrame);

        ScheduleLayout->addWidget(label_6, 0, 0, 1, 1);

        Thursday = new QLabel(layoutWidget);
        Thursday->setObjectName(QStringLiteral("Thursday"));
        Thursday->setFrameShape(QFrame::Box);

        ScheduleLayout->addWidget(Thursday, 0, 4, 1, 1);

        Friday = new QLabel(layoutWidget);
        Friday->setObjectName(QStringLiteral("Friday"));
        Friday->setFrameShape(QFrame::Box);

        ScheduleLayout->addWidget(Friday, 0, 5, 1, 1);

        Nine = new QLabel(layoutWidget);
        Nine->setObjectName(QStringLiteral("Nine"));
        Nine->setFrameShape(QFrame::Box);

        ScheduleLayout->addWidget(Nine, 1, 0, 1, 1);

        MondayNine = new Hour(layoutWidget);
        MondayNine->setObjectName(QStringLiteral("MondayNine"));
        MondayNine->setMouseTracking(true);
        MondayNine->setFrameShape(QFrame::Box);
        MondayNine->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        MondayNine->setScaledContents(true);
        MondayNine->setProperty("Selected", QVariant(false));
        MondayNine->setProperty("Value", QVariant(2));

        ScheduleLayout->addWidget(MondayNine, 1, 1, 1, 1);

        TuesdayNine = new Hour(layoutWidget);
        TuesdayNine->setObjectName(QStringLiteral("TuesdayNine"));
        TuesdayNine->setMouseTracking(true);
        TuesdayNine->setFrameShape(QFrame::Box);
        TuesdayNine->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        TuesdayNine->setScaledContents(true);
        TuesdayNine->setProperty("Selected", QVariant(false));
        TuesdayNine->setProperty("Value", QVariant(23));

        ScheduleLayout->addWidget(TuesdayNine, 1, 2, 1, 1);

        WednesdayNine = new Hour(layoutWidget);
        WednesdayNine->setObjectName(QStringLiteral("WednesdayNine"));
        WednesdayNine->setMouseTracking(true);
        WednesdayNine->setFrameShape(QFrame::Box);
        WednesdayNine->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        WednesdayNine->setScaledContents(true);
        WednesdayNine->setProperty("Selected", QVariant(false));
        WednesdayNine->setProperty("Value", QVariant(59));

        ScheduleLayout->addWidget(WednesdayNine, 1, 3, 1, 1);

        FridayNine = new Hour(layoutWidget);
        FridayNine->setObjectName(QStringLiteral("FridayNine"));
        FridayNine->setMouseTracking(true);
        FridayNine->setFrameShape(QFrame::Box);
        FridayNine->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        FridayNine->setScaledContents(true);
        FridayNine->setProperty("Selected", QVariant(false));
        FridayNine->setProperty("Value", QVariant(137));

        ScheduleLayout->addWidget(FridayNine, 1, 5, 1, 1);

        Ten = new QLabel(layoutWidget);
        Ten->setObjectName(QStringLiteral("Ten"));
        Ten->setFrameShape(QFrame::Box);

        ScheduleLayout->addWidget(Ten, 2, 0, 1, 1);

        MondayTen = new Hour(layoutWidget);
        MondayTen->setObjectName(QStringLiteral("MondayTen"));
        MondayTen->setMouseTracking(true);
        MondayTen->setFrameShape(QFrame::Box);
        MondayTen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        MondayTen->setScaledContents(true);
        MondayTen->setProperty("Selected", QVariant(false));
        MondayTen->setProperty("Value", QVariant(3));

        ScheduleLayout->addWidget(MondayTen, 2, 1, 1, 1);

        WednesdayTen = new Hour(layoutWidget);
        WednesdayTen->setObjectName(QStringLiteral("WednesdayTen"));
        WednesdayTen->setMouseTracking(true);
        WednesdayTen->setFrameShape(QFrame::Box);
        WednesdayTen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        WednesdayTen->setScaledContents(true);
        WednesdayTen->setProperty("Selected", QVariant(false));
        WednesdayTen->setProperty("Value", QVariant(61));

        ScheduleLayout->addWidget(WednesdayTen, 2, 3, 1, 1);

        FridayTen = new Hour(layoutWidget);
        FridayTen->setObjectName(QStringLiteral("FridayTen"));
        FridayTen->setMouseTracking(true);
        FridayTen->setFrameShape(QFrame::Box);
        FridayTen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        FridayTen->setScaledContents(true);
        FridayTen->setProperty("Selected", QVariant(false));
        FridayTen->setProperty("Value", QVariant(139));

        ScheduleLayout->addWidget(FridayTen, 2, 5, 1, 1);

        Eleven = new QLabel(layoutWidget);
        Eleven->setObjectName(QStringLiteral("Eleven"));
        Eleven->setFrameShape(QFrame::Box);

        ScheduleLayout->addWidget(Eleven, 3, 0, 1, 1);

        ThursdayTen = new Hour(layoutWidget);
        ThursdayTen->setObjectName(QStringLiteral("ThursdayTen"));
        ThursdayTen->setMouseTracking(true);
        ThursdayTen->setFrameShape(QFrame::Box);
        ThursdayTen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        ThursdayTen->setScaledContents(true);
        ThursdayTen->setProperty("Selected", QVariant(false));
        ThursdayTen->setProperty("Value", QVariant(101));

        ScheduleLayout->addWidget(ThursdayTen, 2, 4, 1, 1);

        MondayEleven = new Hour(layoutWidget);
        MondayEleven->setObjectName(QStringLiteral("MondayEleven"));
        MondayEleven->setMouseTracking(true);
        MondayEleven->setFrameShape(QFrame::Box);
        MondayEleven->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        MondayEleven->setScaledContents(true);
        MondayEleven->setProperty("Selected", QVariant(false));
        MondayEleven->setProperty("Value", QVariant(5));

        ScheduleLayout->addWidget(MondayEleven, 3, 1, 1, 1);

        ThursdayEleven = new Hour(layoutWidget);
        ThursdayEleven->setObjectName(QStringLiteral("ThursdayEleven"));
        ThursdayEleven->setMouseTracking(true);
        ThursdayEleven->setFrameShape(QFrame::Box);
        ThursdayEleven->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        ThursdayEleven->setScaledContents(true);
        ThursdayEleven->setProperty("Selected", QVariant(false));
        ThursdayEleven->setProperty("Value", QVariant(103));

        ScheduleLayout->addWidget(ThursdayEleven, 3, 4, 1, 1);

        TuesdayEleven = new Hour(layoutWidget);
        TuesdayEleven->setObjectName(QStringLiteral("TuesdayEleven"));
        TuesdayEleven->setMouseTracking(true);
        TuesdayEleven->setFrameShape(QFrame::Box);
        TuesdayEleven->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        TuesdayEleven->setScaledContents(true);
        TuesdayEleven->setProperty("Selected", QVariant(false));
        TuesdayEleven->setProperty("Value", QVariant(31));

        ScheduleLayout->addWidget(TuesdayEleven, 3, 2, 1, 1);

        FridayEleven = new Hour(layoutWidget);
        FridayEleven->setObjectName(QStringLiteral("FridayEleven"));
        FridayEleven->setMouseTracking(true);
        FridayEleven->setFrameShape(QFrame::Box);
        FridayEleven->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        FridayEleven->setScaledContents(true);
        FridayEleven->setProperty("Selected", QVariant(false));
        FridayEleven->setProperty("Value", QVariant(149));

        ScheduleLayout->addWidget(FridayEleven, 3, 5, 1, 1);

        WednesdayEleven = new Hour(layoutWidget);
        WednesdayEleven->setObjectName(QStringLiteral("WednesdayEleven"));
        WednesdayEleven->setMouseTracking(true);
        WednesdayEleven->setFrameShape(QFrame::Box);
        WednesdayEleven->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        WednesdayEleven->setScaledContents(true);
        WednesdayEleven->setProperty("Selected", QVariant(false));
        WednesdayEleven->setProperty("Value", QVariant(67));

        ScheduleLayout->addWidget(WednesdayEleven, 3, 3, 1, 1);

        MondayTwelve = new Hour(layoutWidget);
        MondayTwelve->setObjectName(QStringLiteral("MondayTwelve"));
        MondayTwelve->setMouseTracking(true);
        MondayTwelve->setFrameShape(QFrame::Box);
        MondayTwelve->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        MondayTwelve->setScaledContents(true);
        MondayTwelve->setProperty("Selected", QVariant(false));
        MondayTwelve->setProperty("Value", QVariant(7));

        ScheduleLayout->addWidget(MondayTwelve, 4, 1, 1, 1);

        Twelve = new QLabel(layoutWidget);
        Twelve->setObjectName(QStringLiteral("Twelve"));
        Twelve->setFrameShape(QFrame::Box);

        ScheduleLayout->addWidget(Twelve, 4, 0, 1, 1);

        TuesdayTwelve = new Hour(layoutWidget);
        TuesdayTwelve->setObjectName(QStringLiteral("TuesdayTwelve"));
        TuesdayTwelve->setMouseTracking(true);
        TuesdayTwelve->setFrameShape(QFrame::Box);
        TuesdayTwelve->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        TuesdayTwelve->setScaledContents(true);
        TuesdayTwelve->setProperty("Selected", QVariant(false));
        TuesdayTwelve->setProperty("Value", QVariant(37));

        ScheduleLayout->addWidget(TuesdayTwelve, 4, 2, 1, 1);

        WednesdayTwelve = new Hour(layoutWidget);
        WednesdayTwelve->setObjectName(QStringLiteral("WednesdayTwelve"));
        WednesdayTwelve->setMouseTracking(true);
        WednesdayTwelve->setFrameShape(QFrame::Box);
        WednesdayTwelve->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        WednesdayTwelve->setScaledContents(true);
        WednesdayTwelve->setProperty("Selected", QVariant(false));
        WednesdayTwelve->setProperty("Value", QVariant(71));

        ScheduleLayout->addWidget(WednesdayTwelve, 4, 3, 1, 1);

        FridayTwelve = new Hour(layoutWidget);
        FridayTwelve->setObjectName(QStringLiteral("FridayTwelve"));
        FridayTwelve->setMouseTracking(true);
        FridayTwelve->setFrameShape(QFrame::Box);
        FridayTwelve->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        FridayTwelve->setScaledContents(true);
        FridayTwelve->setProperty("Selected", QVariant(false));
        FridayTwelve->setProperty("Value", QVariant(151));

        ScheduleLayout->addWidget(FridayTwelve, 4, 5, 1, 1);

        Thirteen = new QLabel(layoutWidget);
        Thirteen->setObjectName(QStringLiteral("Thirteen"));
        Thirteen->setFrameShape(QFrame::Box);

        ScheduleLayout->addWidget(Thirteen, 5, 0, 1, 1);

        MondayThirteen = new Hour(layoutWidget);
        MondayThirteen->setObjectName(QStringLiteral("MondayThirteen"));
        MondayThirteen->setMouseTracking(true);
        MondayThirteen->setFrameShape(QFrame::Box);
        MondayThirteen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        MondayThirteen->setScaledContents(true);
        MondayThirteen->setProperty("Selected", QVariant(false));
        MondayThirteen->setProperty("Value", QVariant(11));

        ScheduleLayout->addWidget(MondayThirteen, 5, 1, 1, 1);

        ThursdayTwelve = new Hour(layoutWidget);
        ThursdayTwelve->setObjectName(QStringLiteral("ThursdayTwelve"));
        ThursdayTwelve->setMouseTracking(true);
        ThursdayTwelve->setFrameShape(QFrame::Box);
        ThursdayTwelve->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        ThursdayTwelve->setScaledContents(true);
        ThursdayTwelve->setProperty("Selected", QVariant(false));
        ThursdayTwelve->setProperty("Value", QVariant(107));

        ScheduleLayout->addWidget(ThursdayTwelve, 4, 4, 1, 1);

        TuesdayThirteen = new Hour(layoutWidget);
        TuesdayThirteen->setObjectName(QStringLiteral("TuesdayThirteen"));
        TuesdayThirteen->setMouseTracking(true);
        TuesdayThirteen->setFrameShape(QFrame::Box);
        TuesdayThirteen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        TuesdayThirteen->setScaledContents(true);
        TuesdayThirteen->setProperty("Selected", QVariant(false));
        TuesdayThirteen->setProperty("Value", QVariant(41));

        ScheduleLayout->addWidget(TuesdayThirteen, 5, 2, 1, 1);

        ThursdayThirteen = new Hour(layoutWidget);
        ThursdayThirteen->setObjectName(QStringLiteral("ThursdayThirteen"));
        ThursdayThirteen->setMouseTracking(true);
        ThursdayThirteen->setFrameShape(QFrame::Box);
        ThursdayThirteen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        ThursdayThirteen->setScaledContents(true);
        ThursdayThirteen->setProperty("Selected", QVariant(false));
        ThursdayThirteen->setProperty("Value", QVariant(109));

        ScheduleLayout->addWidget(ThursdayThirteen, 5, 4, 1, 1);

        FridayThirteen = new Hour(layoutWidget);
        FridayThirteen->setObjectName(QStringLiteral("FridayThirteen"));
        FridayThirteen->setMouseTracking(true);
        FridayThirteen->setFrameShape(QFrame::Box);
        FridayThirteen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        FridayThirteen->setScaledContents(true);
        FridayThirteen->setProperty("Selected", QVariant(false));
        FridayThirteen->setProperty("Value", QVariant(157));

        ScheduleLayout->addWidget(FridayThirteen, 5, 5, 1, 1);

        WednesdayThirteen = new Hour(layoutWidget);
        WednesdayThirteen->setObjectName(QStringLiteral("WednesdayThirteen"));
        WednesdayThirteen->setMouseTracking(true);
        WednesdayThirteen->setFrameShape(QFrame::Box);
        WednesdayThirteen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        WednesdayThirteen->setScaledContents(true);
        WednesdayThirteen->setProperty("Selected", QVariant(false));
        WednesdayThirteen->setProperty("Value", QVariant(73));

        ScheduleLayout->addWidget(WednesdayThirteen, 5, 3, 1, 1);

        Fourteen = new QLabel(layoutWidget);
        Fourteen->setObjectName(QStringLiteral("Fourteen"));
        Fourteen->setFrameShape(QFrame::Box);

        ScheduleLayout->addWidget(Fourteen, 6, 0, 1, 1);

        MondayFourteen = new Hour(layoutWidget);
        MondayFourteen->setObjectName(QStringLiteral("MondayFourteen"));
        MondayFourteen->setMouseTracking(true);
        MondayFourteen->setFrameShape(QFrame::Box);
        MondayFourteen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        MondayFourteen->setScaledContents(true);
        MondayFourteen->setProperty("Selected", QVariant(false));
        MondayFourteen->setProperty("Value", QVariant(13));

        ScheduleLayout->addWidget(MondayFourteen, 6, 1, 1, 1);

        TuesdayFourteen = new Hour(layoutWidget);
        TuesdayFourteen->setObjectName(QStringLiteral("TuesdayFourteen"));
        TuesdayFourteen->setMouseTracking(true);
        TuesdayFourteen->setFrameShape(QFrame::Box);
        TuesdayFourteen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        TuesdayFourteen->setScaledContents(true);
        TuesdayFourteen->setProperty("Selected", QVariant(false));
        TuesdayFourteen->setProperty("Value", QVariant(43));

        ScheduleLayout->addWidget(TuesdayFourteen, 6, 2, 1, 1);

        WednesdayFourteen = new Hour(layoutWidget);
        WednesdayFourteen->setObjectName(QStringLiteral("WednesdayFourteen"));
        WednesdayFourteen->setMouseTracking(true);
        WednesdayFourteen->setFrameShape(QFrame::Box);
        WednesdayFourteen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        WednesdayFourteen->setScaledContents(true);
        WednesdayFourteen->setProperty("Selected", QVariant(false));
        WednesdayFourteen->setProperty("Value", QVariant(79));

        ScheduleLayout->addWidget(WednesdayFourteen, 6, 3, 1, 1);

        FridayFourteen = new Hour(layoutWidget);
        FridayFourteen->setObjectName(QStringLiteral("FridayFourteen"));
        FridayFourteen->setMouseTracking(true);
        FridayFourteen->setFrameShape(QFrame::Box);
        FridayFourteen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        FridayFourteen->setScaledContents(true);
        FridayFourteen->setProperty("Selected", QVariant(false));
        FridayFourteen->setProperty("Value", QVariant(163));

        ScheduleLayout->addWidget(FridayFourteen, 6, 5, 1, 1);

        Fifteen = new QLabel(layoutWidget);
        Fifteen->setObjectName(QStringLiteral("Fifteen"));
        Fifteen->setFrameShape(QFrame::Box);

        ScheduleLayout->addWidget(Fifteen, 7, 0, 1, 1);

        ThursdayFourteen = new Hour(layoutWidget);
        ThursdayFourteen->setObjectName(QStringLiteral("ThursdayFourteen"));
        ThursdayFourteen->setMouseTracking(true);
        ThursdayFourteen->setFrameShape(QFrame::Box);
        ThursdayFourteen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        ThursdayFourteen->setScaledContents(true);
        ThursdayFourteen->setProperty("Selected", QVariant(false));
        ThursdayFourteen->setProperty("Value", QVariant(113));

        ScheduleLayout->addWidget(ThursdayFourteen, 6, 4, 1, 1);

        MondayFifteen = new Hour(layoutWidget);
        MondayFifteen->setObjectName(QStringLiteral("MondayFifteen"));
        MondayFifteen->setMouseTracking(true);
        MondayFifteen->setFrameShape(QFrame::Box);
        MondayFifteen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        MondayFifteen->setScaledContents(true);
        MondayFifteen->setProperty("Selected", QVariant(false));
        MondayFifteen->setProperty("Value", QVariant(17));

        ScheduleLayout->addWidget(MondayFifteen, 7, 1, 1, 1);

        ThursdayFifteen = new Hour(layoutWidget);
        ThursdayFifteen->setObjectName(QStringLiteral("ThursdayFifteen"));
        ThursdayFifteen->setMouseTracking(true);
        ThursdayFifteen->setFrameShape(QFrame::Box);
        ThursdayFifteen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        ThursdayFifteen->setScaledContents(true);
        ThursdayFifteen->setProperty("Selected", QVariant(false));
        ThursdayFifteen->setProperty("Value", QVariant(127));

        ScheduleLayout->addWidget(ThursdayFifteen, 7, 4, 1, 1);

        TuesdayFifteen = new Hour(layoutWidget);
        TuesdayFifteen->setObjectName(QStringLiteral("TuesdayFifteen"));
        TuesdayFifteen->setMouseTracking(true);
        TuesdayFifteen->setFrameShape(QFrame::Box);
        TuesdayFifteen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        TuesdayFifteen->setScaledContents(true);
        TuesdayFifteen->setProperty("Selected", QVariant(false));
        TuesdayFifteen->setProperty("Value", QVariant(47));

        ScheduleLayout->addWidget(TuesdayFifteen, 7, 2, 1, 1);

        FridayFifteen = new Hour(layoutWidget);
        FridayFifteen->setObjectName(QStringLiteral("FridayFifteen"));
        FridayFifteen->setMouseTracking(true);
        FridayFifteen->setFrameShape(QFrame::Box);
        FridayFifteen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        FridayFifteen->setScaledContents(true);
        FridayFifteen->setProperty("Selected", QVariant(false));
        FridayFifteen->setProperty("Value", QVariant(167));

        ScheduleLayout->addWidget(FridayFifteen, 7, 5, 1, 1);

        WednesdayFifteen = new Hour(layoutWidget);
        WednesdayFifteen->setObjectName(QStringLiteral("WednesdayFifteen"));
        WednesdayFifteen->setMouseTracking(true);
        WednesdayFifteen->setFrameShape(QFrame::Box);
        WednesdayFifteen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        WednesdayFifteen->setScaledContents(true);
        WednesdayFifteen->setProperty("Selected", QVariant(false));
        WednesdayFifteen->setProperty("Value", QVariant(83));

        ScheduleLayout->addWidget(WednesdayFifteen, 7, 3, 1, 1);

        MondaySixteen = new Hour(layoutWidget);
        MondaySixteen->setObjectName(QStringLiteral("MondaySixteen"));
        MondaySixteen->setMouseTracking(true);
        MondaySixteen->setFrameShape(QFrame::Box);
        MondaySixteen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        MondaySixteen->setScaledContents(true);
        MondaySixteen->setProperty("Selected", QVariant(false));
        MondaySixteen->setProperty("Value", QVariant(19));

        ScheduleLayout->addWidget(MondaySixteen, 8, 1, 1, 1);

        WednesdaySixteen = new Hour(layoutWidget);
        WednesdaySixteen->setObjectName(QStringLiteral("WednesdaySixteen"));
        WednesdaySixteen->setMouseTracking(true);
        WednesdaySixteen->setFrameShape(QFrame::Box);
        WednesdaySixteen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        WednesdaySixteen->setScaledContents(true);
        WednesdaySixteen->setProperty("Selected", QVariant(false));
        WednesdaySixteen->setProperty("Value", QVariant(89));

        ScheduleLayout->addWidget(WednesdaySixteen, 8, 3, 1, 1);

        Sixteen = new QLabel(layoutWidget);
        Sixteen->setObjectName(QStringLiteral("Sixteen"));
        Sixteen->setFrameShape(QFrame::Box);

        ScheduleLayout->addWidget(Sixteen, 8, 0, 1, 1);

        TuesdaySixteen = new Hour(layoutWidget);
        TuesdaySixteen->setObjectName(QStringLiteral("TuesdaySixteen"));
        TuesdaySixteen->setMouseTracking(true);
        TuesdaySixteen->setFrameShape(QFrame::Box);
        TuesdaySixteen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        TuesdaySixteen->setScaledContents(true);
        TuesdaySixteen->setProperty("Selected", QVariant(false));
        TuesdaySixteen->setProperty("Value", QVariant(53));

        ScheduleLayout->addWidget(TuesdaySixteen, 8, 2, 1, 1);

        ThursdaySixteen = new Hour(layoutWidget);
        ThursdaySixteen->setObjectName(QStringLiteral("ThursdaySixteen"));
        ThursdaySixteen->setMouseTracking(true);
        ThursdaySixteen->setFrameShape(QFrame::Box);
        ThursdaySixteen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        ThursdaySixteen->setScaledContents(true);
        ThursdaySixteen->setProperty("Selected", QVariant(false));
        ThursdaySixteen->setProperty("Value", QVariant(131));

        ScheduleLayout->addWidget(ThursdaySixteen, 8, 4, 1, 1);

        FridaySixteen = new Hour(layoutWidget);
        FridaySixteen->setObjectName(QStringLiteral("FridaySixteen"));
        FridaySixteen->setMouseTracking(true);
        FridaySixteen->setFrameShape(QFrame::Box);
        FridaySixteen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        FridaySixteen->setScaledContents(true);
        FridaySixteen->setProperty("Selected", QVariant(false));
        FridaySixteen->setProperty("Value", QVariant(173));

        ScheduleLayout->addWidget(FridaySixteen, 8, 5, 1, 1);

        TuesdayTen = new Hour(layoutWidget);
        TuesdayTen->setObjectName(QStringLiteral("TuesdayTen"));
        TuesdayTen->setMouseTracking(true);
        TuesdayTen->setFrameShape(QFrame::Box);
        TuesdayTen->setPixmap(QPixmap(QString::fromUtf8(":/RoadEnd.png")));
        TuesdayTen->setScaledContents(true);
        TuesdayTen->setProperty("Selected", QVariant(false));
        TuesdayTen->setProperty("Value", QVariant(29));

        ScheduleLayout->addWidget(TuesdayTen, 2, 2, 1, 1);

        splitter_5->addWidget(layoutWidget);
        splitter_4 = new QSplitter(splitter_5);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_4);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        List1 = new QListWidget(splitter);
        List1->setObjectName(QStringLiteral("List1"));
        splitter->addWidget(List1);
        List2 = new QListWidget(splitter);
        List2->setObjectName(QStringLiteral("List2"));
        splitter->addWidget(List2);
        splitter_4->addWidget(splitter);
        splitter_2 = new QSplitter(splitter_4);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        List3 = new QListWidget(splitter_2);
        List3->setObjectName(QStringLiteral("List3"));
        splitter_2->addWidget(List3);
        List4 = new QListWidget(splitter_2);
        List4->setObjectName(QStringLiteral("List4"));
        splitter_2->addWidget(List4);
        splitter_4->addWidget(splitter_2);
        splitter_3 = new QSplitter(splitter_4);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        List5 = new QListWidget(splitter_3);
        List5->setObjectName(QStringLiteral("List5"));
        splitter_3->addWidget(List5);
        List6 = new QListWidget(splitter_3);
        List6->setObjectName(QStringLiteral("List6"));
        splitter_3->addWidget(List6);
        splitter_4->addWidget(splitter_3);
        splitter_5->addWidget(splitter_4);

        gridLayout->addWidget(splitter_5, 0, 0, 1, 7);

        SelectCourse = new QComboBox(centralWidget);
        SelectCourse->setObjectName(QStringLiteral("SelectCourse"));
        SelectCourse->setEditable(false);
        SelectCourse->setDuplicatesEnabled(false);

        gridLayout->addWidget(SelectCourse, 1, 2, 1, 1);

        AddSection = new QPushButton(centralWidget);
        AddSection->setObjectName(QStringLiteral("AddSection"));

        gridLayout->addWidget(AddSection, 1, 6, 1, 1);

        AddCourseLine = new QLineEdit(centralWidget);
        AddCourseLine->setObjectName(QStringLiteral("AddCourseLine"));

        gridLayout->addWidget(AddCourseLine, 1, 0, 1, 1);

        Done = new QPushButton(centralWidget);
        Done->setObjectName(QStringLiteral("Done"));

        gridLayout->addWidget(Done, 3, 6, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 711, 17));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        DeleteCourse->setText(QApplication::translate("MainWindow", "Delete Course", Q_NULLPTR));
        AddCourseButton->setText(QApplication::translate("MainWindow", "Add Course", Q_NULLPTR));
        ThursdayNine->setText(QString());
        Monday->setText(QApplication::translate("MainWindow", "Monday", Q_NULLPTR));
        Tuesday->setText(QApplication::translate("MainWindow", "Tuesday", Q_NULLPTR));
        Wednesday->setText(QApplication::translate("MainWindow", "Wednesday", Q_NULLPTR));
        label_6->setText(QString());
        Thursday->setText(QApplication::translate("MainWindow", "Thursday", Q_NULLPTR));
        Friday->setText(QApplication::translate("MainWindow", "Friday", Q_NULLPTR));
        Nine->setText(QApplication::translate("MainWindow", "9:00", Q_NULLPTR));
        MondayNine->setText(QString());
        TuesdayNine->setText(QString());
        WednesdayNine->setText(QString());
        FridayNine->setText(QString());
        Ten->setText(QApplication::translate("MainWindow", "10:00", Q_NULLPTR));
        MondayTen->setText(QString());
        WednesdayTen->setText(QString());
        FridayTen->setText(QString());
        Eleven->setText(QApplication::translate("MainWindow", "11:00", Q_NULLPTR));
        ThursdayTen->setText(QString());
        MondayEleven->setText(QString());
        ThursdayEleven->setText(QString());
        TuesdayEleven->setText(QString());
        FridayEleven->setText(QString());
        WednesdayEleven->setText(QString());
        MondayTwelve->setText(QString());
        Twelve->setText(QApplication::translate("MainWindow", "12:00", Q_NULLPTR));
        TuesdayTwelve->setText(QString());
        WednesdayTwelve->setText(QString());
        FridayTwelve->setText(QString());
        Thirteen->setText(QApplication::translate("MainWindow", "13:00", Q_NULLPTR));
        MondayThirteen->setText(QString());
        ThursdayTwelve->setText(QString());
        TuesdayThirteen->setText(QString());
        ThursdayThirteen->setText(QString());
        FridayThirteen->setText(QString());
        WednesdayThirteen->setText(QString());
        Fourteen->setText(QApplication::translate("MainWindow", "14:00", Q_NULLPTR));
        MondayFourteen->setText(QString());
        TuesdayFourteen->setText(QString());
        WednesdayFourteen->setText(QString());
        FridayFourteen->setText(QString());
        Fifteen->setText(QApplication::translate("MainWindow", "15:00", Q_NULLPTR));
        ThursdayFourteen->setText(QString());
        MondayFifteen->setText(QString());
        ThursdayFifteen->setText(QString());
        TuesdayFifteen->setText(QString());
        FridayFifteen->setText(QString());
        WednesdayFifteen->setText(QString());
        MondaySixteen->setText(QString());
        WednesdaySixteen->setText(QString());
        Sixteen->setText(QApplication::translate("MainWindow", "16:00", Q_NULLPTR));
        TuesdaySixteen->setText(QString());
        ThursdaySixteen->setText(QString());
        FridaySixteen->setText(QString());
        TuesdayTen->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        List1->setAccessibleDescription(QApplication::translate("MainWindow", "empty", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        List2->setAccessibleDescription(QApplication::translate("MainWindow", "empty", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        List3->setAccessibleDescription(QApplication::translate("MainWindow", "empty", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        List4->setAccessibleDescription(QApplication::translate("MainWindow", "empty", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        List5->setAccessibleDescription(QApplication::translate("MainWindow", "empty", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        List6->setAccessibleDescription(QApplication::translate("MainWindow", "empty", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        AddSection->setText(QApplication::translate("MainWindow", "Add Section", Q_NULLPTR));
        Done->setText(QApplication::translate("MainWindow", "Done", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
