#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <QtSql>
#include <QObject>
#include <admin.h>
#include <QKeyEvent>
#include <QVector>
#include "dbmanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // Gets name of the pixel
    QString GetPicturePath(QString collegeName);

    // Gets college's description
    QString GetCollegeDescription(QString collegeName);


private slots:
    //---------------------------MAIN MENU CODE-----------------------------------------//

    /*******************************************************
     * on_loginPushBtn2_clicked() -
     *  This function error checks for right username and
     *  password. If admin logs in, then the program will
     *  display the admin page.
     *******************************************************/
    void on_loginPushBtn_2_clicked();

    /*******************************************************
     * on_clearPushBtn_clicked() -
     *  Once a user presses the clear button, it will clear
     *  the username and password line edits
     *******************************************************/
    void on_clearPushBtn_2_clicked();

    void on_DisplayCampusInfo_clicked();

    void on_DisplaySouvenirs_clicked();

    void on_StartTour_clicked();

    //----------------------------PLANNING PAGE CODE-----------------------------------------//

    void on_SelectStartingCollegeButton_clicked();

    void on_StartingCollegeComboBox_currentIndexChanged(const QString &arg1);

    void on_PlanCustomTripButton_clicked();

    void on_PrePlannedButton_clicked();

    void on_backButton_1_clicked();


    //----------------------------CUSTOM TOUR PAGE CODE-----------------------------------------//

    void on_SelectStartingCollegeButton_3_clicked();

    void on_AddQueueButton_clicked();

    void on_DeleteQueueButton_clicked();

    void on_backButton_2_clicked();

    /* on_SortQueue_clicked() - Once clicked, it will sort the Queue Table View by
     order of efficiency */
    void on_SortQueue_clicked();

    // Delete_Tour_Data() - Will clear everything from TourData table
    void Delete_Tour_Data();

    // DeleteAlreadyVisitedTable() - Will clear everything from AlreadyVisitedTable
    void DeleteAlreadyVisitedCollegesTable();

    // DepartButton() - Will officially start the trip
    void on_DepartButton_clicked();

    //----------------------------CAMPUS VISIT PAGE CODE-----------------------------------------//

    void on_backButton_7_clicked();

    // loads souvenirComboBox with souvenirs corresponding to the college
    void on_loadSouvenirButton_clicked();

    // enables one to purchase chosen souvenir at a given college
    void on_purchaseSouvenirsButton_clicked();

    // If user clicks delete while purchasing souvenirs, will modify currentPrice and totalPrice
    void on_deleteSouvenirsButton_clicked();

    // Will go to next college during the tour trip
    void on_nextCollegeButton_clicked();

    //-----------------------------PRE PLANNED TOUR PAGE CODE-----------------------------------------//

    void on_backButton_6_clicked();

    void on_LoadData_clicked();

    void on_SortAmount_clicked();

    void on_DeleteButton_clicked();

    void on_DepartButton_12_clicked();

private:
    Ui::MainWindow *ui;
    QVector<QString> selectedCollegesVector;    // vector to store selected colleges
    Admin adminObj;                             // represents adminObj of class: Admin
    DBManager databaseObj;
    double totalPrice;                          // total price from trip
    double currentPrice;                        // current price from each college trip


protected:
        void keyPressEvent(QKeyEvent* pe);
};
#endif // MAINWINDOW_H
