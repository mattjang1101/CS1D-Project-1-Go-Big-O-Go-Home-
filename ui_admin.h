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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QStackedWidget *stackedWidget;
    QWidget *AdminMenu;
    QTableView *CampusTable;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *revertButton;
    QPushButton *AddButton;
    QLabel *label_2;
    QWidget *tab2;
    QStackedWidget *stackedWidget_3;
    QWidget *AddDeleteSouvenir;
    QTabWidget *tabWidget_2;
    QWidget *addOrDeleteSouvenirs;
    QPushButton *deleteSouvenirs;
    QPushButton *addSouvenirs;
    QWidget *Edit;
    QPushButton *loadSouvenirsAdminBtn;
    QLabel *label_3;
    QComboBox *collegeListComboBox;
    QLabel *label_4;
    QPushButton *changePriceBtn;
    QLineEdit *priceLineEdit;
    QComboBox *souvenirListComboBox;
    QLabel *editSouvenirPricesLabel;
    QLabel *editPriceLabel;
    QTableView *souvenirAdminTable;
    QWidget *AddSouvenir;
    QLabel *addSouvenirLabel;
    QPushButton *backBtn;
    QTableView *addSouvenirTableView;
    QLineEdit *addPriceLineEdit;
    QLineEdit *addNameLineEdit;
    QLabel *label_5;
    QComboBox *collegeListComboBox_2;
    QLabel *priceLabel;
    QPushButton *addButton;
    QLabel *nameLabel;
    QWidget *DeleteSouvenir;
    QLabel *addSouvenirLabel_2;
    QPushButton *backBtn_2;
    QTableView *deleteSouvenirTableView;
    QPushButton *deleteChosenSouvenir;
    QWidget *widget;
    QVBoxLayout *verticalLayout_6;
    QComboBox *chooseCampusList;
    QComboBox *deleteSouvenirList;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->resize(720, 333);
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        tab1->setEnabled(true);
        tab1->setAutoFillBackground(false);
        tab1->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(tab1);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 681, 281));
        AdminMenu = new QWidget();
        AdminMenu->setObjectName(QString::fromUtf8("AdminMenu"));
        CampusTable = new QTableView(AdminMenu);
        CampusTable->setObjectName(QString::fromUtf8("CampusTable"));
        CampusTable->setGeometry(QRect(10, 10, 461, 281));
        layoutWidget = new QWidget(AdminMenu);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(490, 120, 170, 108));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(AdminMenu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(490, 117, 168, 21));
        revertButton = new QPushButton(AdminMenu);
        revertButton->setObjectName(QString::fromUtf8("revertButton"));
        revertButton->setGeometry(QRect(490, 200, 168, 23));
        AddButton = new QPushButton(AdminMenu);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        AddButton->setGeometry(QRect(490, 144, 168, 23));
        label_2 = new QLabel(AdminMenu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(490, 173, 168, 21));
        stackedWidget->addWidget(AdminMenu);
        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        stackedWidget_3 = new QStackedWidget(tab2);
        stackedWidget_3->setObjectName(QString::fromUtf8("stackedWidget_3"));
        stackedWidget_3->setGeometry(QRect(0, 0, 691, 301));
        AddDeleteSouvenir = new QWidget();
        AddDeleteSouvenir->setObjectName(QString::fromUtf8("AddDeleteSouvenir"));
        tabWidget_2 = new QTabWidget(AddDeleteSouvenir);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(450, 0, 241, 281));
        addOrDeleteSouvenirs = new QWidget();
        addOrDeleteSouvenirs->setObjectName(QString::fromUtf8("addOrDeleteSouvenirs"));
        deleteSouvenirs = new QPushButton(addOrDeleteSouvenirs);
        deleteSouvenirs->setObjectName(QString::fromUtf8("deleteSouvenirs"));
        deleteSouvenirs->setGeometry(QRect(60, 110, 89, 23));
        addSouvenirs = new QPushButton(addOrDeleteSouvenirs);
        addSouvenirs->setObjectName(QString::fromUtf8("addSouvenirs"));
        addSouvenirs->setGeometry(QRect(60, 30, 81, 31));
        tabWidget_2->addTab(addOrDeleteSouvenirs, QString());
        Edit = new QWidget();
        Edit->setObjectName(QString::fromUtf8("Edit"));
        loadSouvenirsAdminBtn = new QPushButton(Edit);
        loadSouvenirsAdminBtn->setObjectName(QString::fromUtf8("loadSouvenirsAdminBtn"));
        loadSouvenirsAdminBtn->setGeometry(QRect(20, 30, 101, 23));
        label_3 = new QLabel(Edit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 80, 91, 16));
        collegeListComboBox = new QComboBox(Edit);
        collegeListComboBox->setObjectName(QString::fromUtf8("collegeListComboBox"));
        collegeListComboBox->setGeometry(QRect(10, 110, 151, 20));
        label_4 = new QLabel(Edit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 140, 91, 16));
        changePriceBtn = new QPushButton(Edit);
        changePriceBtn->setObjectName(QString::fromUtf8("changePriceBtn"));
        changePriceBtn->setGeometry(QRect(90, 220, 75, 23));
        priceLineEdit = new QLineEdit(Edit);
        priceLineEdit->setObjectName(QString::fromUtf8("priceLineEdit"));
        priceLineEdit->setGeometry(QRect(70, 190, 61, 20));
        souvenirListComboBox = new QComboBox(Edit);
        souvenirListComboBox->setObjectName(QString::fromUtf8("souvenirListComboBox"));
        souvenirListComboBox->setGeometry(QRect(10, 160, 141, 20));
        editSouvenirPricesLabel = new QLabel(Edit);
        editSouvenirPricesLabel->setObjectName(QString::fromUtf8("editSouvenirPricesLabel"));
        editSouvenirPricesLabel->setGeometry(QRect(20, 10, 94, 16));
        editPriceLabel = new QLabel(Edit);
        editPriceLabel->setObjectName(QString::fromUtf8("editPriceLabel"));
        editPriceLabel->setGeometry(QRect(29, 190, 27, 16));
        tabWidget_2->addTab(Edit, QString());
        souvenirAdminTable = new QTableView(AddDeleteSouvenir);
        souvenirAdminTable->setObjectName(QString::fromUtf8("souvenirAdminTable"));
        souvenirAdminTable->setGeometry(QRect(-9, 1, 421, 281));
        stackedWidget_3->addWidget(AddDeleteSouvenir);
        AddSouvenir = new QWidget();
        AddSouvenir->setObjectName(QString::fromUtf8("AddSouvenir"));
        addSouvenirLabel = new QLabel(AddSouvenir);
        addSouvenirLabel->setObjectName(QString::fromUtf8("addSouvenirLabel"));
        addSouvenirLabel->setGeometry(QRect(0, 0, 161, 21));
        backBtn = new QPushButton(AddSouvenir);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(10, 210, 75, 23));
        addSouvenirTableView = new QTableView(AddSouvenir);
        addSouvenirTableView->setObjectName(QString::fromUtf8("addSouvenirTableView"));
        addSouvenirTableView->setGeometry(QRect(230, 10, 461, 271));
        addPriceLineEdit = new QLineEdit(AddSouvenir);
        addPriceLineEdit->setObjectName(QString::fromUtf8("addPriceLineEdit"));
        addPriceLineEdit->setGeometry(QRect(50, 160, 151, 20));
        addNameLineEdit = new QLineEdit(AddSouvenir);
        addNameLineEdit->setObjectName(QString::fromUtf8("addNameLineEdit"));
        addNameLineEdit->setGeometry(QRect(50, 130, 151, 20));
        label_5 = new QLabel(AddSouvenir);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 50, 91, 16));
        collegeListComboBox_2 = new QComboBox(AddSouvenir);
        collegeListComboBox_2->setObjectName(QString::fromUtf8("collegeListComboBox_2"));
        collegeListComboBox_2->setGeometry(QRect(50, 80, 151, 20));
        priceLabel = new QLabel(AddSouvenir);
        priceLabel->setObjectName(QString::fromUtf8("priceLabel"));
        priceLabel->setGeometry(QRect(10, 160, 27, 16));
        addButton = new QPushButton(AddSouvenir);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(130, 210, 75, 23));
        nameLabel = new QLabel(AddSouvenir);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(10, 130, 31, 16));
        stackedWidget_3->addWidget(AddSouvenir);
        DeleteSouvenir = new QWidget();
        DeleteSouvenir->setObjectName(QString::fromUtf8("DeleteSouvenir"));
        addSouvenirLabel_2 = new QLabel(DeleteSouvenir);
        addSouvenirLabel_2->setObjectName(QString::fromUtf8("addSouvenirLabel_2"));
        addSouvenirLabel_2->setGeometry(QRect(1, 1, 175, 21));
        backBtn_2 = new QPushButton(DeleteSouvenir);
        backBtn_2->setObjectName(QString::fromUtf8("backBtn_2"));
        backBtn_2->setGeometry(QRect(10, 230, 75, 23));
        deleteSouvenirTableView = new QTableView(DeleteSouvenir);
        deleteSouvenirTableView->setObjectName(QString::fromUtf8("deleteSouvenirTableView"));
        deleteSouvenirTableView->setGeometry(QRect(190, 10, 501, 281));
        deleteChosenSouvenir = new QPushButton(DeleteSouvenir);
        deleteChosenSouvenir->setObjectName(QString::fromUtf8("deleteChosenSouvenir"));
        deleteChosenSouvenir->setGeometry(QRect(30, 100, 75, 23));
        widget = new QWidget(DeleteSouvenir);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(1, 31, 151, 48));
        verticalLayout_6 = new QVBoxLayout(widget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        chooseCampusList = new QComboBox(widget);
        chooseCampusList->setObjectName(QString::fromUtf8("chooseCampusList"));

        verticalLayout_6->addWidget(chooseCampusList);

        deleteSouvenirList = new QComboBox(widget);
        deleteSouvenirList->setObjectName(QString::fromUtf8("deleteSouvenirList"));

        verticalLayout_6->addWidget(deleteSouvenirList);

        stackedWidget_3->addWidget(DeleteSouvenir);
        tabWidget->addTab(tab2, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        Admin->setCentralWidget(centralwidget);

        retranslateUi(Admin);

        tabWidget->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(0);
        stackedWidget_3->setCurrentIndex(2);
        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Admin", "Add New Pending Campuses", nullptr));
        revertButton->setText(QCoreApplication::translate("Admin", "Revert", nullptr));
        AddButton->setText(QCoreApplication::translate("Admin", "Add", nullptr));
        label_2->setText(QCoreApplication::translate("Admin", "Revert to Original State", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QCoreApplication::translate("Admin", "Tab 1", nullptr));
#if QT_CONFIG(accessibility)
        tab2->setAccessibleName(QCoreApplication::translate("Admin", "tab2", nullptr));
#endif // QT_CONFIG(accessibility)
        deleteSouvenirs->setText(QCoreApplication::translate("Admin", "Delete Souvenirs", nullptr));
        addSouvenirs->setText(QCoreApplication::translate("Admin", "Add Souvenirs", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(addOrDeleteSouvenirs), QCoreApplication::translate("Admin", "Tab 1", nullptr));
        loadSouvenirsAdminBtn->setText(QCoreApplication::translate("Admin", "Load Souvenirs", nullptr));
        label_3->setText(QCoreApplication::translate("Admin", "Select College", nullptr));
        label_4->setText(QCoreApplication::translate("Admin", "Select Souvenir", nullptr));
        changePriceBtn->setText(QCoreApplication::translate("Admin", "Change", nullptr));
        editSouvenirPricesLabel->setText(QCoreApplication::translate("Admin", "Edit Souvenir Prices", nullptr));
        editPriceLabel->setText(QCoreApplication::translate("Admin", "Price:", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Edit), QCoreApplication::translate("Admin", "Tab 2", nullptr));
        addSouvenirLabel->setText(QCoreApplication::translate("Admin", "<html><head/><body><p><span style=\" font-size:16pt;\">Add Souvenir</span></p></body></html>", nullptr));
        backBtn->setText(QCoreApplication::translate("Admin", "Back", nullptr));
        label_5->setText(QCoreApplication::translate("Admin", "Select College", nullptr));
        priceLabel->setText(QCoreApplication::translate("Admin", "Price:", nullptr));
        addButton->setText(QCoreApplication::translate("Admin", "Add", nullptr));
        nameLabel->setText(QCoreApplication::translate("Admin", "Name:", nullptr));
        addSouvenirLabel_2->setText(QCoreApplication::translate("Admin", "<html><head/><body><p><span style=\" font-size:16pt;\">Delete Souvenir(s)</span><br/></p></body></html>", nullptr));
        backBtn_2->setText(QCoreApplication::translate("Admin", "Back", nullptr));
        deleteChosenSouvenir->setText(QCoreApplication::translate("Admin", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QCoreApplication::translate("Admin", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
