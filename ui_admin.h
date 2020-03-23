/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *addSouvenirs;
    QPushButton *deleteSouvenirs;
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
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_6;
    QComboBox *chooseCampusList;
    QComboBox *deleteSouvenirList;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QStringLiteral("Admin"));
        Admin->resize(720, 333);
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab1 = new QWidget();
        tab1->setObjectName(QStringLiteral("tab1"));
        tab1->setEnabled(true);
        tab1->setAutoFillBackground(false);
        tab1->setStyleSheet(QStringLiteral(""));
        stackedWidget = new QStackedWidget(tab1);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 681, 281));
        AdminMenu = new QWidget();
        AdminMenu->setObjectName(QStringLiteral("AdminMenu"));
        CampusTable = new QTableView(AdminMenu);
        CampusTable->setObjectName(QStringLiteral("CampusTable"));
        CampusTable->setGeometry(QRect(10, 10, 461, 281));
        layoutWidget = new QWidget(AdminMenu);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(490, 120, 170, 108));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(AdminMenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(490, 117, 168, 21));
        revertButton = new QPushButton(AdminMenu);
        revertButton->setObjectName(QStringLiteral("revertButton"));
        revertButton->setGeometry(QRect(490, 200, 168, 23));
        AddButton = new QPushButton(AdminMenu);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setGeometry(QRect(490, 144, 168, 23));
        label_2 = new QLabel(AdminMenu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(490, 173, 168, 21));
        stackedWidget->addWidget(AdminMenu);
        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QStringLiteral("tab2"));
        stackedWidget_3 = new QStackedWidget(tab2);
        stackedWidget_3->setObjectName(QStringLiteral("stackedWidget_3"));
        stackedWidget_3->setGeometry(QRect(0, 0, 691, 301));
        AddDeleteSouvenir = new QWidget();
        AddDeleteSouvenir->setObjectName(QStringLiteral("AddDeleteSouvenir"));
        tabWidget_2 = new QTabWidget(AddDeleteSouvenir);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(450, 0, 241, 281));
        addOrDeleteSouvenirs = new QWidget();
        addOrDeleteSouvenirs->setObjectName(QStringLiteral("addOrDeleteSouvenirs"));
        widget = new QWidget(addOrDeleteSouvenirs);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 30, 122, 64));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        addSouvenirs = new QPushButton(widget);
        addSouvenirs->setObjectName(QStringLiteral("addSouvenirs"));

        verticalLayout_2->addWidget(addSouvenirs);

        deleteSouvenirs = new QPushButton(widget);
        deleteSouvenirs->setObjectName(QStringLiteral("deleteSouvenirs"));

        verticalLayout_2->addWidget(deleteSouvenirs);

        tabWidget_2->addTab(addOrDeleteSouvenirs, QString());
        Edit = new QWidget();
        Edit->setObjectName(QStringLiteral("Edit"));
        loadSouvenirsAdminBtn = new QPushButton(Edit);
        loadSouvenirsAdminBtn->setObjectName(QStringLiteral("loadSouvenirsAdminBtn"));
        loadSouvenirsAdminBtn->setGeometry(QRect(20, 30, 101, 23));
        label_3 = new QLabel(Edit);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 80, 91, 16));
        collegeListComboBox = new QComboBox(Edit);
        collegeListComboBox->setObjectName(QStringLiteral("collegeListComboBox"));
        collegeListComboBox->setGeometry(QRect(10, 110, 151, 20));
        label_4 = new QLabel(Edit);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 140, 91, 16));
        changePriceBtn = new QPushButton(Edit);
        changePriceBtn->setObjectName(QStringLiteral("changePriceBtn"));
        changePriceBtn->setGeometry(QRect(90, 220, 75, 23));
        priceLineEdit = new QLineEdit(Edit);
        priceLineEdit->setObjectName(QStringLiteral("priceLineEdit"));
        priceLineEdit->setGeometry(QRect(70, 190, 61, 20));
        souvenirListComboBox = new QComboBox(Edit);
        souvenirListComboBox->setObjectName(QStringLiteral("souvenirListComboBox"));
        souvenirListComboBox->setGeometry(QRect(10, 160, 141, 20));
        editSouvenirPricesLabel = new QLabel(Edit);
        editSouvenirPricesLabel->setObjectName(QStringLiteral("editSouvenirPricesLabel"));
        editSouvenirPricesLabel->setGeometry(QRect(20, 10, 121, 16));
        editPriceLabel = new QLabel(Edit);
        editPriceLabel->setObjectName(QStringLiteral("editPriceLabel"));
        editPriceLabel->setGeometry(QRect(25, 190, 31, 20));
        tabWidget_2->addTab(Edit, QString());
        souvenirAdminTable = new QTableView(AddDeleteSouvenir);
        souvenirAdminTable->setObjectName(QStringLiteral("souvenirAdminTable"));
        souvenirAdminTable->setGeometry(QRect(-9, 1, 421, 281));
        stackedWidget_3->addWidget(AddDeleteSouvenir);
        AddSouvenir = new QWidget();
        AddSouvenir->setObjectName(QStringLiteral("AddSouvenir"));
        addSouvenirLabel = new QLabel(AddSouvenir);
        addSouvenirLabel->setObjectName(QStringLiteral("addSouvenirLabel"));
        addSouvenirLabel->setGeometry(QRect(0, 0, 161, 21));
        backBtn = new QPushButton(AddSouvenir);
        backBtn->setObjectName(QStringLiteral("backBtn"));
        backBtn->setGeometry(QRect(10, 210, 75, 23));
        addSouvenirTableView = new QTableView(AddSouvenir);
        addSouvenirTableView->setObjectName(QStringLiteral("addSouvenirTableView"));
        addSouvenirTableView->setGeometry(QRect(230, 10, 461, 271));
        addPriceLineEdit = new QLineEdit(AddSouvenir);
        addPriceLineEdit->setObjectName(QStringLiteral("addPriceLineEdit"));
        addPriceLineEdit->setGeometry(QRect(50, 160, 151, 20));
        addNameLineEdit = new QLineEdit(AddSouvenir);
        addNameLineEdit->setObjectName(QStringLiteral("addNameLineEdit"));
        addNameLineEdit->setGeometry(QRect(50, 130, 151, 20));
        label_5 = new QLabel(AddSouvenir);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 50, 91, 16));
        collegeListComboBox_2 = new QComboBox(AddSouvenir);
        collegeListComboBox_2->setObjectName(QStringLiteral("collegeListComboBox_2"));
        collegeListComboBox_2->setGeometry(QRect(50, 80, 151, 20));
        priceLabel = new QLabel(AddSouvenir);
        priceLabel->setObjectName(QStringLiteral("priceLabel"));
        priceLabel->setGeometry(QRect(10, 160, 27, 16));
        addButton = new QPushButton(AddSouvenir);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(130, 210, 75, 23));
        nameLabel = new QLabel(AddSouvenir);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(10, 130, 31, 16));
        stackedWidget_3->addWidget(AddSouvenir);
        DeleteSouvenir = new QWidget();
        DeleteSouvenir->setObjectName(QStringLiteral("DeleteSouvenir"));
        addSouvenirLabel_2 = new QLabel(DeleteSouvenir);
        addSouvenirLabel_2->setObjectName(QStringLiteral("addSouvenirLabel_2"));
        addSouvenirLabel_2->setGeometry(QRect(1, 1, 175, 21));
        backBtn_2 = new QPushButton(DeleteSouvenir);
        backBtn_2->setObjectName(QStringLiteral("backBtn_2"));
        backBtn_2->setGeometry(QRect(10, 230, 75, 23));
        deleteSouvenirTableView = new QTableView(DeleteSouvenir);
        deleteSouvenirTableView->setObjectName(QStringLiteral("deleteSouvenirTableView"));
        deleteSouvenirTableView->setGeometry(QRect(190, 10, 501, 281));
        deleteChosenSouvenir = new QPushButton(DeleteSouvenir);
        deleteChosenSouvenir->setObjectName(QStringLiteral("deleteChosenSouvenir"));
        deleteChosenSouvenir->setGeometry(QRect(30, 100, 75, 23));
        layoutWidget1 = new QWidget(DeleteSouvenir);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(1, 31, 151, 56));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        chooseCampusList = new QComboBox(layoutWidget1);
        chooseCampusList->setObjectName(QStringLiteral("chooseCampusList"));

        verticalLayout_6->addWidget(chooseCampusList);

        deleteSouvenirList = new QComboBox(layoutWidget1);
        deleteSouvenirList->setObjectName(QStringLiteral("deleteSouvenirList"));

        verticalLayout_6->addWidget(deleteSouvenirList);

        stackedWidget_3->addWidget(DeleteSouvenir);
        tabWidget->addTab(tab2, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        Admin->setCentralWidget(centralwidget);

        retranslateUi(Admin);

        tabWidget->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(0);
        stackedWidget_3->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QApplication::translate("Admin", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("Admin", "Add New Pending Campuses", Q_NULLPTR));
        revertButton->setText(QApplication::translate("Admin", "Revert", Q_NULLPTR));
        AddButton->setText(QApplication::translate("Admin", "Add", Q_NULLPTR));
        label_2->setText(QApplication::translate("Admin", "Revert to Original State", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("Admin", "Tab 1", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        tab2->setAccessibleName(QApplication::translate("Admin", "tab2", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        addSouvenirs->setText(QApplication::translate("Admin", "Add Souvenirs", Q_NULLPTR));
        deleteSouvenirs->setText(QApplication::translate("Admin", "Delete Souvenirs", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(addOrDeleteSouvenirs), QApplication::translate("Admin", "Tab 1", Q_NULLPTR));
        loadSouvenirsAdminBtn->setText(QApplication::translate("Admin", "Load Souvenirs", Q_NULLPTR));
        label_3->setText(QApplication::translate("Admin", "Select College", Q_NULLPTR));
        label_4->setText(QApplication::translate("Admin", "Select Souvenir", Q_NULLPTR));
        changePriceBtn->setText(QApplication::translate("Admin", "Change", Q_NULLPTR));
        editSouvenirPricesLabel->setText(QApplication::translate("Admin", "Edit Souvenir Prices", Q_NULLPTR));
        editPriceLabel->setText(QApplication::translate("Admin", "Price:", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Edit), QApplication::translate("Admin", "Tab 2", Q_NULLPTR));
        addSouvenirLabel->setText(QApplication::translate("Admin", "<html><head/><body><p><span style=\" font-size:16pt;\">Add Souvenir</span></p></body></html>", Q_NULLPTR));
        backBtn->setText(QApplication::translate("Admin", "Back", Q_NULLPTR));
        label_5->setText(QApplication::translate("Admin", "Select College", Q_NULLPTR));
        priceLabel->setText(QApplication::translate("Admin", "Price:", Q_NULLPTR));
        addButton->setText(QApplication::translate("Admin", "Add", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("Admin", "Name:", Q_NULLPTR));
        addSouvenirLabel_2->setText(QApplication::translate("Admin", "<html><head/><body><p><span style=\" font-size:16pt;\">Delete Souvenir(s)</span><br/></p></body></html>", Q_NULLPTR));
        backBtn_2->setText(QApplication::translate("Admin", "Back", Q_NULLPTR));
        deleteChosenSouvenir->setText(QApplication::translate("Admin", "Delete", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("Admin", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
