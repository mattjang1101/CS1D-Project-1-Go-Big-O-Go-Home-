/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *MainMenu;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *DisplayCampusInfo;
    QPushButton *DisplaySouvenirs;
    QPushButton *StartTour;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QPushButton *loginPushBtn_2;
    QPushButton *clearPushBtn_2;
    QLabel *MainWindowLogo;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableView *tableView;
    QWidget *PlanningMenu;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QTableView *DistancesTable;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_6;
    QPushButton *SelectStartingCollegeButton;
    QLabel *label_4;
    QComboBox *StartingCollegeComboBox;
    QPushButton *PlanCustomTripButton;
    QPushButton *PrePlannedButton;
    QPushButton *backButton_1;
    QWidget *CustomTripMenu;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_12;
    QLabel *CurrentQueueLabel;
    QTableView *QueueTableView;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_11;
    QLabel *TourPlanningLabel;
    QPushButton *SelectStartingCollegeButton_3;
    QLabel *label_3;
    QPushButton *backButton_2;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_4;
    QComboBox *StartingPointBox;
    QPushButton *AddQueueButton;
    QPushButton *DeleteQueueButton;
    QLabel *CurrentLabel;
    QPushButton *SortQueue;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_28;
    QVBoxLayout *verticalLayout_7;
    QPushButton *DepartButton;
    QLabel *DistanceLabel;
    QLCDNumber *DistanceNumber;
    QWidget *PrePlannedMenu;
    QWidget *layoutWidget_23;
    QGridLayout *gridLayout_15;
    QComboBox *CollegeSelectBox;
    QLabel *CurrentLabel_20;
    QLabel *SelectCollegeCampusLabel;
    QComboBox *DesiredAmtBox;
    QPushButton *SortAmount;
    QPushButton *DeleteButton;
    QPushButton *backButton_6;
    QWidget *layoutWidget_22;
    QVBoxLayout *verticalLayout_44;
    QLabel *PrePlannedLabel;
    QPushButton *LoadData;
    QLabel *label_20;
    QLabel *label_21;
    QWidget *layoutWidget_20;
    QVBoxLayout *verticalLayout_45;
    QLabel *CurrentQueueLabel_12;
    QTableView *PrePQueueTable;
    QWidget *layoutWidget_21;
    QVBoxLayout *verticalLayout_46;
    QPushButton *DepartButton_12;
    QLabel *DistanceLabel_12;
    QLCDNumber *DistanceLCDctr;
    QWidget *CampusPage;
    QTableView *souvenirTableView;
    QPushButton *backButton_7;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_3;
    QPushButton *loadSouvenirButton;
    QComboBox *souvenirComboBox;
    QPushButton *purchaseSouvenirsButton;
    QPushButton *deleteSouvenirsButton;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_4;
    QLabel *collegeNameLabel;
    QLabel *collegePicturesLabel;
    QLabel *label_8;
    QPushButton *nextCollegeButton;
    QTextBrowser *collegeDescriptionTextBrowser;
    QLabel *label_7;
    QLCDNumber *priceLCDNumber;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(872, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 871, 601));
        MainMenu = new QWidget();
        MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        layoutWidget = new QWidget(MainMenu);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(580, 320, 212, 100));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        DisplayCampusInfo = new QPushButton(layoutWidget);
        DisplayCampusInfo->setObjectName(QString::fromUtf8("DisplayCampusInfo"));

        verticalLayout->addWidget(DisplayCampusInfo);

        DisplaySouvenirs = new QPushButton(layoutWidget);
        DisplaySouvenirs->setObjectName(QString::fromUtf8("DisplaySouvenirs"));

        verticalLayout->addWidget(DisplaySouvenirs);

        StartTour = new QPushButton(layoutWidget);
        StartTour->setObjectName(QString::fromUtf8("StartTour"));

        verticalLayout->addWidget(StartTour);

        layoutWidget_2 = new QWidget(MainMenu);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(580, 120, 251, 171));
        gridLayout = new QGridLayout(layoutWidget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 1, 1, 2);

        usernameLabel = new QLabel(layoutWidget_2);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));

        gridLayout->addWidget(usernameLabel, 1, 0, 1, 1);

        usernameLineEdit = new QLineEdit(layoutWidget_2);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));
        usernameLineEdit->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(usernameLineEdit, 1, 1, 1, 2);

        passwordLabel = new QLabel(layoutWidget_2);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));

        gridLayout->addWidget(passwordLabel, 2, 0, 1, 1);

        passwordLineEdit = new QLineEdit(layoutWidget_2);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordLineEdit, 2, 1, 1, 2);

        loginPushBtn_2 = new QPushButton(layoutWidget_2);
        loginPushBtn_2->setObjectName(QString::fromUtf8("loginPushBtn_2"));

        gridLayout->addWidget(loginPushBtn_2, 3, 0, 1, 2);

        clearPushBtn_2 = new QPushButton(layoutWidget_2);
        clearPushBtn_2->setObjectName(QString::fromUtf8("clearPushBtn_2"));

        gridLayout->addWidget(clearPushBtn_2, 3, 2, 1, 1);

        MainWindowLogo = new QLabel(layoutWidget_2);
        MainWindowLogo->setObjectName(QString::fromUtf8("MainWindowLogo"));
        MainWindowLogo->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(MainWindowLogo, 0, 0, 1, 1);

        layoutWidget_3 = new QWidget(MainMenu);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 60, 511, 481));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        tableView = new QTableView(layoutWidget_3);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout_2->addWidget(tableView);

        stackedWidget->addWidget(MainMenu);
        PlanningMenu = new QWidget();
        PlanningMenu->setObjectName(QString::fromUtf8("PlanningMenu"));
        layoutWidget_7 = new QWidget(PlanningMenu);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(30, 60, 511, 481));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_7);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_5);

        DistancesTable = new QTableView(layoutWidget_7);
        DistancesTable->setObjectName(QString::fromUtf8("DistancesTable"));

        verticalLayout_5->addWidget(DistancesTable);

        layoutWidget_8 = new QWidget(PlanningMenu);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(580, 80, 212, 174));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        SelectStartingCollegeButton = new QPushButton(layoutWidget_8);
        SelectStartingCollegeButton->setObjectName(QString::fromUtf8("SelectStartingCollegeButton"));

        verticalLayout_6->addWidget(SelectStartingCollegeButton);

        label_4 = new QLabel(layoutWidget_8);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_4);

        StartingCollegeComboBox = new QComboBox(layoutWidget_8);
        StartingCollegeComboBox->setObjectName(QString::fromUtf8("StartingCollegeComboBox"));

        verticalLayout_6->addWidget(StartingCollegeComboBox);

        PlanCustomTripButton = new QPushButton(layoutWidget_8);
        PlanCustomTripButton->setObjectName(QString::fromUtf8("PlanCustomTripButton"));

        verticalLayout_6->addWidget(PlanCustomTripButton);

        PrePlannedButton = new QPushButton(layoutWidget_8);
        PrePlannedButton->setObjectName(QString::fromUtf8("PrePlannedButton"));

        verticalLayout_6->addWidget(PrePlannedButton);

        backButton_1 = new QPushButton(PlanningMenu);
        backButton_1->setObjectName(QString::fromUtf8("backButton_1"));
        backButton_1->setGeometry(QRect(10, 10, 71, 32));
        stackedWidget->addWidget(PlanningMenu);
        CustomTripMenu = new QWidget();
        CustomTripMenu->setObjectName(QString::fromUtf8("CustomTripMenu"));
        layoutWidget1 = new QWidget(CustomTripMenu);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(390, 70, 431, 501));
        verticalLayout_12 = new QVBoxLayout(layoutWidget1);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        CurrentQueueLabel = new QLabel(layoutWidget1);
        CurrentQueueLabel->setObjectName(QString::fromUtf8("CurrentQueueLabel"));
        QFont font2;
        font2.setPointSize(18);
        CurrentQueueLabel->setFont(font2);
        CurrentQueueLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(CurrentQueueLabel);

        QueueTableView = new QTableView(layoutWidget1);
        QueueTableView->setObjectName(QString::fromUtf8("QueueTableView"));

        verticalLayout_12->addWidget(QueueTableView);

        layoutWidget2 = new QWidget(CustomTripMenu);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 70, 371, 101));
        verticalLayout_11 = new QVBoxLayout(layoutWidget2);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        TourPlanningLabel = new QLabel(layoutWidget2);
        TourPlanningLabel->setObjectName(QString::fromUtf8("TourPlanningLabel"));
        TourPlanningLabel->setFont(font2);
        TourPlanningLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(TourPlanningLabel);

        SelectStartingCollegeButton_3 = new QPushButton(layoutWidget2);
        SelectStartingCollegeButton_3->setObjectName(QString::fromUtf8("SelectStartingCollegeButton_3"));

        verticalLayout_11->addWidget(SelectStartingCollegeButton_3);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font3;
        font3.setPointSize(12);
        label_3->setFont(font3);
        label_3->setFrameShape(QFrame::Panel);
        label_3->setFrameShadow(QFrame::Plain);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_3);

        backButton_2 = new QPushButton(CustomTripMenu);
        backButton_2->setObjectName(QString::fromUtf8("backButton_2"));
        backButton_2->setGeometry(QRect(10, 10, 71, 32));
        layoutWidget3 = new QWidget(CustomTripMenu);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(40, 210, 291, 201));
        gridLayout_4 = new QGridLayout(layoutWidget3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        StartingPointBox = new QComboBox(layoutWidget3);
        StartingPointBox->setObjectName(QString::fromUtf8("StartingPointBox"));

        gridLayout_4->addWidget(StartingPointBox, 1, 0, 1, 1);

        AddQueueButton = new QPushButton(layoutWidget3);
        AddQueueButton->setObjectName(QString::fromUtf8("AddQueueButton"));

        gridLayout_4->addWidget(AddQueueButton, 2, 0, 1, 1);

        DeleteQueueButton = new QPushButton(layoutWidget3);
        DeleteQueueButton->setObjectName(QString::fromUtf8("DeleteQueueButton"));

        gridLayout_4->addWidget(DeleteQueueButton, 3, 0, 1, 1);

        CurrentLabel = new QLabel(layoutWidget3);
        CurrentLabel->setObjectName(QString::fromUtf8("CurrentLabel"));
        CurrentLabel->setFont(font2);
        CurrentLabel->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(CurrentLabel, 0, 0, 1, 1);

        SortQueue = new QPushButton(layoutWidget3);
        SortQueue->setObjectName(QString::fromUtf8("SortQueue"));

        gridLayout_4->addWidget(SortQueue, 4, 0, 1, 1);

        layoutWidget4 = new QWidget(CustomTripMenu);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(90, 460, 181, 111));
        verticalLayout_28 = new QVBoxLayout(layoutWidget4);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        DepartButton = new QPushButton(layoutWidget4);
        DepartButton->setObjectName(QString::fromUtf8("DepartButton"));

        verticalLayout_7->addWidget(DepartButton);

        DistanceLabel = new QLabel(layoutWidget4);
        DistanceLabel->setObjectName(QString::fromUtf8("DistanceLabel"));
        DistanceLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(DistanceLabel);


        verticalLayout_28->addLayout(verticalLayout_7);

        DistanceNumber = new QLCDNumber(layoutWidget4);
        DistanceNumber->setObjectName(QString::fromUtf8("DistanceNumber"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DistanceNumber->sizePolicy().hasHeightForWidth());
        DistanceNumber->setSizePolicy(sizePolicy);
        DistanceNumber->setMaximumSize(QSize(169, 16777215));
        DistanceNumber->setSmallDecimalPoint(false);
        DistanceNumber->setDigitCount(7);

        verticalLayout_28->addWidget(DistanceNumber);

        stackedWidget->addWidget(CustomTripMenu);
        PrePlannedMenu = new QWidget();
        PrePlannedMenu->setObjectName(QString::fromUtf8("PrePlannedMenu"));
        layoutWidget_23 = new QWidget(PrePlannedMenu);
        layoutWidget_23->setObjectName(QString::fromUtf8("layoutWidget_23"));
        layoutWidget_23->setGeometry(QRect(40, 231, 296, 181));
        gridLayout_15 = new QGridLayout(layoutWidget_23);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        CollegeSelectBox = new QComboBox(layoutWidget_23);
        CollegeSelectBox->setObjectName(QString::fromUtf8("CollegeSelectBox"));

        gridLayout_15->addWidget(CollegeSelectBox, 1, 0, 1, 2);

        CurrentLabel_20 = new QLabel(layoutWidget_23);
        CurrentLabel_20->setObjectName(QString::fromUtf8("CurrentLabel_20"));
        CurrentLabel_20->setFont(font2);
        CurrentLabel_20->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(CurrentLabel_20, 2, 0, 1, 1);

        SelectCollegeCampusLabel = new QLabel(layoutWidget_23);
        SelectCollegeCampusLabel->setObjectName(QString::fromUtf8("SelectCollegeCampusLabel"));
        SelectCollegeCampusLabel->setFont(font2);
        SelectCollegeCampusLabel->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(SelectCollegeCampusLabel, 0, 0, 1, 2);

        DesiredAmtBox = new QComboBox(layoutWidget_23);
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->addItem(QString());
        DesiredAmtBox->setObjectName(QString::fromUtf8("DesiredAmtBox"));

        gridLayout_15->addWidget(DesiredAmtBox, 2, 1, 1, 1);

        SortAmount = new QPushButton(layoutWidget_23);
        SortAmount->setObjectName(QString::fromUtf8("SortAmount"));

        gridLayout_15->addWidget(SortAmount, 5, 1, 1, 1);

        DeleteButton = new QPushButton(layoutWidget_23);
        DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));

        gridLayout_15->addWidget(DeleteButton, 5, 0, 1, 1);

        backButton_6 = new QPushButton(PrePlannedMenu);
        backButton_6->setObjectName(QString::fromUtf8("backButton_6"));
        backButton_6->setGeometry(QRect(10, 10, 71, 32));
        layoutWidget_22 = new QWidget(PrePlannedMenu);
        layoutWidget_22->setObjectName(QString::fromUtf8("layoutWidget_22"));
        layoutWidget_22->setGeometry(QRect(10, 70, 352, 121));
        verticalLayout_44 = new QVBoxLayout(layoutWidget_22);
        verticalLayout_44->setObjectName(QString::fromUtf8("verticalLayout_44"));
        verticalLayout_44->setContentsMargins(0, 0, 0, 0);
        PrePlannedLabel = new QLabel(layoutWidget_22);
        PrePlannedLabel->setObjectName(QString::fromUtf8("PrePlannedLabel"));
        PrePlannedLabel->setFont(font2);
        PrePlannedLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_44->addWidget(PrePlannedLabel);

        LoadData = new QPushButton(layoutWidget_22);
        LoadData->setObjectName(QString::fromUtf8("LoadData"));

        verticalLayout_44->addWidget(LoadData);

        label_20 = new QLabel(layoutWidget_22);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font3);
        label_20->setFrameShape(QFrame::Panel);
        label_20->setFrameShadow(QFrame::Plain);
        label_20->setAlignment(Qt::AlignCenter);

        verticalLayout_44->addWidget(label_20);

        label_21 = new QLabel(layoutWidget_22);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font3);
        label_21->setFrameShape(QFrame::Panel);
        label_21->setFrameShadow(QFrame::Plain);
        label_21->setAlignment(Qt::AlignCenter);

        verticalLayout_44->addWidget(label_21);

        layoutWidget_20 = new QWidget(PrePlannedMenu);
        layoutWidget_20->setObjectName(QString::fromUtf8("layoutWidget_20"));
        layoutWidget_20->setGeometry(QRect(390, 70, 431, 501));
        verticalLayout_45 = new QVBoxLayout(layoutWidget_20);
        verticalLayout_45->setObjectName(QString::fromUtf8("verticalLayout_45"));
        verticalLayout_45->setContentsMargins(0, 0, 0, 0);
        CurrentQueueLabel_12 = new QLabel(layoutWidget_20);
        CurrentQueueLabel_12->setObjectName(QString::fromUtf8("CurrentQueueLabel_12"));
        CurrentQueueLabel_12->setFont(font2);
        CurrentQueueLabel_12->setAlignment(Qt::AlignCenter);

        verticalLayout_45->addWidget(CurrentQueueLabel_12);

        PrePQueueTable = new QTableView(layoutWidget_20);
        PrePQueueTable->setObjectName(QString::fromUtf8("PrePQueueTable"));

        verticalLayout_45->addWidget(PrePQueueTable);

        layoutWidget_21 = new QWidget(PrePlannedMenu);
        layoutWidget_21->setObjectName(QString::fromUtf8("layoutWidget_21"));
        layoutWidget_21->setGeometry(QRect(90, 450, 181, 121));
        verticalLayout_46 = new QVBoxLayout(layoutWidget_21);
        verticalLayout_46->setObjectName(QString::fromUtf8("verticalLayout_46"));
        verticalLayout_46->setContentsMargins(0, 0, 0, 0);
        DepartButton_12 = new QPushButton(layoutWidget_21);
        DepartButton_12->setObjectName(QString::fromUtf8("DepartButton_12"));

        verticalLayout_46->addWidget(DepartButton_12);

        DistanceLabel_12 = new QLabel(layoutWidget_21);
        DistanceLabel_12->setObjectName(QString::fromUtf8("DistanceLabel_12"));
        DistanceLabel_12->setAlignment(Qt::AlignCenter);

        verticalLayout_46->addWidget(DistanceLabel_12);

        DistanceLCDctr = new QLCDNumber(layoutWidget_21);
        DistanceLCDctr->setObjectName(QString::fromUtf8("DistanceLCDctr"));
        DistanceLCDctr->setDigitCount(7);

        verticalLayout_46->addWidget(DistanceLCDctr);

        stackedWidget->addWidget(PrePlannedMenu);
        CampusPage = new QWidget();
        CampusPage->setObjectName(QString::fromUtf8("CampusPage"));
        souvenirTableView = new QTableView(CampusPage);
        souvenirTableView->setObjectName(QString::fromUtf8("souvenirTableView"));
        souvenirTableView->setGeometry(QRect(10, 280, 321, 271));
        backButton_7 = new QPushButton(CampusPage);
        backButton_7->setObjectName(QString::fromUtf8("backButton_7"));
        backButton_7->setGeometry(QRect(10, 10, 71, 32));
        layoutWidget5 = new QWidget(CampusPage);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(350, 310, 151, 174));
        verticalLayout_3 = new QVBoxLayout(layoutWidget5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        loadSouvenirButton = new QPushButton(layoutWidget5);
        loadSouvenirButton->setObjectName(QString::fromUtf8("loadSouvenirButton"));

        verticalLayout_3->addWidget(loadSouvenirButton);

        souvenirComboBox = new QComboBox(layoutWidget5);
        souvenirComboBox->setObjectName(QString::fromUtf8("souvenirComboBox"));

        verticalLayout_3->addWidget(souvenirComboBox);

        purchaseSouvenirsButton = new QPushButton(layoutWidget5);
        purchaseSouvenirsButton->setObjectName(QString::fromUtf8("purchaseSouvenirsButton"));

        verticalLayout_3->addWidget(purchaseSouvenirsButton);

        deleteSouvenirsButton = new QPushButton(layoutWidget5);
        deleteSouvenirsButton->setObjectName(QString::fromUtf8("deleteSouvenirsButton"));

        verticalLayout_3->addWidget(deleteSouvenirsButton);

        layoutWidget6 = new QWidget(CampusPage);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(570, 430, 265, 59));
        verticalLayout_4 = new QVBoxLayout(layoutWidget6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        collegeNameLabel = new QLabel(CampusPage);
        collegeNameLabel->setObjectName(QString::fromUtf8("collegeNameLabel"));
        collegeNameLabel->setGeometry(QRect(91, 21, 371, 19));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        collegeNameLabel->setFont(font4);
        collegePicturesLabel = new QLabel(CampusPage);
        collegePicturesLabel->setObjectName(QString::fromUtf8("collegePicturesLabel"));
        collegePicturesLabel->setGeometry(QRect(91, 49, 391, 201));
        label_8 = new QLabel(CampusPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(570, 430, 263, 28));
        nextCollegeButton = new QPushButton(CampusPage);
        nextCollegeButton->setObjectName(QString::fromUtf8("nextCollegeButton"));
        nextCollegeButton->setGeometry(QRect(570, 464, 263, 23));
        collegeDescriptionTextBrowser = new QTextBrowser(CampusPage);
        collegeDescriptionTextBrowser->setObjectName(QString::fromUtf8("collegeDescriptionTextBrowser"));
        collegeDescriptionTextBrowser->setGeometry(QRect(530, 60, 321, 341));
        QFont font5;
        font5.setPointSize(11);
        collegeDescriptionTextBrowser->setFont(font5);
        label_7 = new QLabel(CampusPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(350, 550, 51, 20));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        priceLCDNumber = new QLCDNumber(CampusPage);
        priceLCDNumber->setObjectName(QString::fromUtf8("priceLCDNumber"));
        priceLCDNumber->setGeometry(QRect(429, 531, 151, 49));
        priceLCDNumber->setDigitCount(7);
        stackedWidget->addWidget(CampusPage);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        DisplayCampusInfo->setText(QApplication::translate("MainWindow", "Campus Information", nullptr));
        DisplaySouvenirs->setText(QApplication::translate("MainWindow", "Souvenirs", nullptr));
        StartTour->setText(QApplication::translate("MainWindow", "START TOUR", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "ADMIN ONLY", nullptr));
        usernameLabel->setText(QApplication::translate("MainWindow", "Username: ", nullptr));
        passwordLabel->setText(QApplication::translate("MainWindow", "Password: ", nullptr));
        loginPushBtn_2->setText(QApplication::translate("MainWindow", "Login", nullptr));
        clearPushBtn_2->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        MainWindowLogo->setText(QString());
        label->setText(QApplication::translate("MainWindow", "WELCOME TO YOUR COLLEGE TOUR, STUDENTS!", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "DISTANCE BY COLLEGE", nullptr));
        SelectStartingCollegeButton->setText(QApplication::translate("MainWindow", "Load Data", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">Select College to view</span></p></body></html>", nullptr));
        PlanCustomTripButton->setText(QApplication::translate("MainWindow", "Custom Tour Trip", nullptr));
        PrePlannedButton->setText(QApplication::translate("MainWindow", "Pre-Planned Trip", nullptr));
        backButton_1->setText(QApplication::translate("MainWindow", "Back", nullptr));
        CurrentQueueLabel->setText(QApplication::translate("MainWindow", "Current Queue", nullptr));
        TourPlanningLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">Custom Tour Plan</span></p></body></html>", nullptr));
        SelectStartingCollegeButton_3->setText(QApplication::translate("MainWindow", "Load Data", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic;\">&quot;Plan your custom trip from point A to point B all in one!&quot;</span></p></body></html>", nullptr));
        backButton_2->setText(QApplication::translate("MainWindow", "Back", nullptr));
        AddQueueButton->setText(QApplication::translate("MainWindow", "Add", nullptr));
        DeleteQueueButton->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        CurrentLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">Select College Campus</span></p></body></html>", nullptr));
        SortQueue->setText(QApplication::translate("MainWindow", "Sort", nullptr));
        DepartButton->setText(QApplication::translate("MainWindow", "Depart", nullptr));
        DistanceLabel->setText(QApplication::translate("MainWindow", "Distance (miles)", nullptr));
        CurrentLabel_20->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Desired Amount: </span></p></body></html>", nullptr));
        SelectCollegeCampusLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">Select College Campus</span></p></body></html>", nullptr));
        DesiredAmtBox->setItemText(0, QApplication::translate("MainWindow", "1", nullptr));
        DesiredAmtBox->setItemText(1, QApplication::translate("MainWindow", "2", nullptr));
        DesiredAmtBox->setItemText(2, QApplication::translate("MainWindow", "3", nullptr));
        DesiredAmtBox->setItemText(3, QApplication::translate("MainWindow", "4", nullptr));
        DesiredAmtBox->setItemText(4, QApplication::translate("MainWindow", "5", nullptr));
        DesiredAmtBox->setItemText(5, QApplication::translate("MainWindow", "6", nullptr));
        DesiredAmtBox->setItemText(6, QApplication::translate("MainWindow", "7", nullptr));
        DesiredAmtBox->setItemText(7, QApplication::translate("MainWindow", "8", nullptr));
        DesiredAmtBox->setItemText(8, QApplication::translate("MainWindow", "9", nullptr));
        DesiredAmtBox->setItemText(9, QApplication::translate("MainWindow", "10", nullptr));
        DesiredAmtBox->setItemText(10, QApplication::translate("MainWindow", "11", nullptr));
        DesiredAmtBox->setItemText(11, QApplication::translate("MainWindow", "12", nullptr));
        DesiredAmtBox->setItemText(12, QApplication::translate("MainWindow", "13", nullptr));

        SortAmount->setText(QApplication::translate("MainWindow", "Sort", nullptr));
        DeleteButton->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        backButton_6->setText(QApplication::translate("MainWindow", "Back", nullptr));
        PrePlannedLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">Pre-Planned Trip</span></p></body></html>", nullptr));
        LoadData->setText(QApplication::translate("MainWindow", "Load Data", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic;\">&quot;Choose a pre-planned trip of your desire !&quot;</span></p></body></html>", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic;\">&quot;The </span><span style=\" font-weight:600; font-style:italic; text-decoration: underline;\">shortest </span><span style=\" font-style:italic;\">route is automatically calculated!&quot;</span></p></body></html>", nullptr));
        CurrentQueueLabel_12->setText(QApplication::translate("MainWindow", "Current Queue", nullptr));
        DepartButton_12->setText(QApplication::translate("MainWindow", "Depart", nullptr));
        DistanceLabel_12->setText(QApplication::translate("MainWindow", "Distance (miles)", nullptr));
        backButton_7->setText(QApplication::translate("MainWindow", "Back", nullptr));
        loadSouvenirButton->setText(QApplication::translate("MainWindow", "Load Data", nullptr));
        purchaseSouvenirsButton->setText(QApplication::translate("MainWindow", "Purchase", nullptr));
        deleteSouvenirsButton->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        collegeNameLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        collegePicturesLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Move on to the next Campus in Queue. . . ", nullptr));
        nextCollegeButton->setText(QApplication::translate("MainWindow", "Next", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Total: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
