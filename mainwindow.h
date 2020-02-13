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

    //-----------------------------PRE PLANNED TOUR PAGE CODE-----------------------------------------//

    void on_backButton_6_clicked();

    void on_LoadData_clicked();



private:
    Ui::MainWindow *ui;
    Admin adminObj; // represents adminObj of class: Admin
    DBManager databaseObj;

protected:
        void keyPressEvent(QKeyEvent* pe);
};
#endif // MAINWINDOW_H
