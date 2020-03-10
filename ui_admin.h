/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *AdminMenu;
    QWidget *layoutWidget_19;
    QVBoxLayout *verticalLayout_6;
    QLabel *AdminLabel;
    QTableView *AdminTable;
    QWidget *layoutWidget_20;
    QGridLayout *gridLayout_6;
    QPushButton *AddButton;
    QPushButton *SouvenirData;
    QComboBox *ItemComboBox;
    QPushButton *CampusData;
    QPushButton *DeleteButton;
    QPushButton *EditButton;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->resize(871, 601);
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 871, 601));
        AdminMenu = new QWidget();
        AdminMenu->setObjectName(QString::fromUtf8("AdminMenu"));
        layoutWidget_19 = new QWidget(AdminMenu);
        layoutWidget_19->setObjectName(QString::fromUtf8("layoutWidget_19"));
        layoutWidget_19->setGeometry(QRect(30, 60, 511, 481));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_19);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        AdminLabel = new QLabel(layoutWidget_19);
        AdminLabel->setObjectName(QString::fromUtf8("AdminLabel"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        AdminLabel->setFont(font);
        AdminLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(AdminLabel);

        AdminTable = new QTableView(layoutWidget_19);
        AdminTable->setObjectName(QString::fromUtf8("AdminTable"));

        verticalLayout_6->addWidget(AdminTable);

        layoutWidget_20 = new QWidget(AdminMenu);
        layoutWidget_20->setObjectName(QString::fromUtf8("layoutWidget_20"));
        layoutWidget_20->setGeometry(QRect(580, 61, 253, 242));
        gridLayout_6 = new QGridLayout(layoutWidget_20);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        AddButton = new QPushButton(layoutWidget_20);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));

        gridLayout_6->addWidget(AddButton, 4, 0, 1, 1);

        SouvenirData = new QPushButton(layoutWidget_20);
        SouvenirData->setObjectName(QString::fromUtf8("SouvenirData"));

        gridLayout_6->addWidget(SouvenirData, 0, 1, 1, 1);

        ItemComboBox = new QComboBox(layoutWidget_20);
        ItemComboBox->setObjectName(QString::fromUtf8("ItemComboBox"));

        gridLayout_6->addWidget(ItemComboBox, 2, 0, 1, 2);

        CampusData = new QPushButton(layoutWidget_20);
        CampusData->setObjectName(QString::fromUtf8("CampusData"));

        gridLayout_6->addWidget(CampusData, 0, 0, 1, 1);

        DeleteButton = new QPushButton(layoutWidget_20);
        DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));

        gridLayout_6->addWidget(DeleteButton, 4, 1, 1, 1);

        EditButton = new QPushButton(layoutWidget_20);
        EditButton->setObjectName(QString::fromUtf8("EditButton"));

        gridLayout_6->addWidget(EditButton, 3, 0, 1, 2);

        stackedWidget->addWidget(AdminMenu);
        Admin->setCentralWidget(centralwidget);

        retranslateUi(Admin);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "MainWindow", nullptr));
        AdminLabel->setText(QCoreApplication::translate("Admin", "******************** ADMINISTRATOR MENU ********************", nullptr));
        AddButton->setText(QCoreApplication::translate("Admin", "Add", nullptr));
        SouvenirData->setText(QCoreApplication::translate("Admin", "Souvenir Data", nullptr));
        CampusData->setText(QCoreApplication::translate("Admin", "Campus Data", nullptr));
        DeleteButton->setText(QCoreApplication::translate("Admin", "Delete", nullptr));
        EditButton->setText(QCoreApplication::translate("Admin", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
