/**
 * \class MainWindow
 *
 * This class sets up the complete GUI and back-end code
 * for the main menu page, planning page, custom tour page,
 * campus visit page, and pre-planned tour page.
 *
 * \note Updated before pre-demo demonstration
 *
 * \author $Authors: bv Matt Jang, Angaar Hamid, Lamson Bui, Suqi Hu$
 *
 * \date $Date: 2020/03/20 08:52:20 $
 *
 * Contact:
 *          lbui5@saddleback.edu
 *          shu4@saddleback.edu
 *          mjang23@saddleback.edu
 *          ahamid2@saddleback.edu
 *
 * Created on: Sun Mar 23 12:21:03 2020
 *
 */

/// Start file
#ifndef MAINWINDOW_H
#define MAINWINDOW_H


/// Preprocessor Directives
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

/*! \namespace UI
 * \brief A MainWindow UI
 */
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

// Start of MainWindow class
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    /** \brief MainWindow(QWidget *parent = nullptr)
      * \param QWidget *parent
      * \return Object created
      *
      * This method introduces the MainWindow window
      */
    MainWindow(QWidget *parent = nullptr);

    /** \brief ~MainWindow()
      * \param No paramters
      * \return Memory deallocated
      *
      * This method deletes the mainwindow ui
      */
    ~MainWindow();

    /** \brief GetPicturePath(QString collegeName)
      * \param QString collegeName
      * \return College picture obtained
      *
      * This method finds and inserts college picture
      */
    QString GetPicturePath(QString collegeName);

    /** \brief GetCollegeDescription(QString collegeName)
      * \param No paramters
      * \return Colege description obtained
      *
      * This method finds and inserts college description
      */
    QString GetCollegeDescription(QString collegeName);


private slots:
    ///---------------------------MAIN MENU CODE-----------------------------------------//

    /** \brief on_loginPushBtn_2_clicked()
      * \param No paramters
      * \return Method error checked
      *
      * This method error checks for right username and
      * password. If admin logs in, then the program will
      * display the admin page.
      */
    void on_loginPushBtn_2_clicked();

    /** \brief on_clearPushBtn_2_clicked()
      * \param No paramters
      * \return Username and password cleared
      *
      * This method makes sure once a user presses the
      * clear button, it will clear the username and
      * password line edits
      */
    void on_clearPushBtn_2_clicked();

    /** \brief on_DisplayCampusInfo_clicked()
      * \param No paramters
      * \return Info displayed
      *
      * This method diplays campus info into table for
      * admin's and user' viewing
      */
    void on_DisplayCampusInfo_clicked();

    /** \brief on_DisplaySouvenirs_clicked()
      * \param No paramters
      * \return Info displayed
      *
      * This method diplays souvenir info into table for
      * admin's and user's viewing
      */
    void on_DisplaySouvenirs_clicked();

    /** \brief on_StartTour_clicked()
      * \param No paramters
      * \return Start tour page
      *
      * This method goes to start tour page
      */
    void on_StartTour_clicked();

    ///----------------------------PLANNING PAGE CODE-----------------------------------------//

    /** \brief on_SelectStartingCollegeButton_clicked()
      * \param No paramters
      * \return Starting college selected
      *
      * This method selects your starting college
      */
    void on_SelectStartingCollegeButton_clicked();

    /** \brief on_StartingCollegeComboBox_currentIndexChanged(const QString &arg1)
      * \param const QString &arg1
      * \return Model and Query created
      *
      * This method sets the model and query of the starting
      * college combo box
      */
    void on_StartingCollegeComboBox_currentIndexChanged(const QString &arg1);

    /** \brief on_PlanCustomTripButton_clicked()
      * \param const QString &arg1
      * \return Go to custom trip page
      *
      * This method goes to the custom trip page
      */
    void on_PlanCustomTripButton_clicked();

    /** \brief on_PrePlannedButton_clicked()
      * \param No paramters
      * \return Go to pre-planned trip page
      *
      * This method goes to the pre-planned page
      */
    void on_PrePlannedButton_clicked();

    /** \brief on_backButton_1_clicked()
      * \param No paramters
      * \return Go back
      *
      * This method goes back one page
      */
    void on_backButton_1_clicked();


    ///----------------------------CUSTOM TOUR PAGE CODE-----------------------------------------//

    /** \brief on_SelectStartingCollegeButton_3_clicked()
      * \param No paramters
      * \return Object created
      *
      * This method resets TourData table so it can be reused.
      * Clears TourTableView, clears college vector, and initially
      * sets the DistanceNumber widget to 0
      */
    void on_SelectStartingCollegeButton_3_clicked();

    /** \brief on_AddQueueButton_clicked()
      * \param No paramters
      * \return Queue added
      *
      * This method adds to the queue
      */
    void on_AddQueueButton_clicked();

    /** \brief on_DeleteQueueButton_clicked()
      * \param No paramters
      * \return Queue deleted
      *
      * This method deletes the queue
      */
    void on_DeleteQueueButton_clicked();

    /** \brief on_backButton_2_clicked()
      * \param No paramters
      * \return Go back
      *
      * This method goes back one page
      */
    void on_backButton_2_clicked();

    /** \brief on_SortQueue_clicked()
      * \param No paramters
      * \return Table sorted
      *
      * This method make sure that once clicked,
      * it will sort the Queue Table View by
      * order of efficiencyintroduces the maintenance
      * window
      */
    void on_SortQueue_clicked();

    /** \brief Delete_Tour_Data()
      * \param No paramters
      * \return Data cleared
      *
      * This method will clear everything from TourData table
      */
    void Delete_Tour_Data();

    /** \brief DeleteAlreadyVisitedCollegesTable()
      * \param No paramters
      * \return Data cleared
      *
      * This method will clear everything from AlreadyVisitedTable
      */
    void DeleteAlreadyVisitedCollegesTable();

    /** \brief on_DepartButton_clicked()
      * \param No paramters
      * \return Trip started
      *
      * This method will officially start the trip
      */
    void on_DepartButton_clicked();

    //----------------------------CAMPUS VISIT PAGE CODE-----------------------------------------//

    /** \brief on_backButton_7_clicked()
      * \param No paramters
      * \return Go back
      *
      * This method goes back one page
      */
    void on_backButton_7_clicked();

    /** \brief on_loadSouvenirButton_clicked()
      * \param No paramters
      * \return Object created
      *
      * This method loads souvenirComboBox
      * with souvenirs corresponding to the college
      */
    void on_loadSouvenirButton_clicked();

    /** \brief on_purchaseSouvenirsButton_clicked()
      * \param No paramters
      * \return Souvenir purchases
      *
      * This method enables one to purchase
      * chosen souvenir at a given college
      */
    void on_purchaseSouvenirsButton_clicked();

    /** \brief  on_deleteSouvenirsButton_clicked()
      * \param No paramters
      * \return Souvenir deleted
      *
      * This method make sure if the user clicks
      * delete while purchasing souvenirs, will
      * modify currentPrice and totalPrice
      */
    void on_deleteSouvenirsButton_clicked();

    /** \brief on_nextCollegeButton_clicked()
      * \param No paramters
      * \return Next college displayed
      *
      * This method goes to the next college
      */
    void on_nextCollegeButton_clicked();

    ///-----------------------------PRE PLANNED TOUR PAGE CODE-----------------------------------------//

    /** \brief on_backButton_6_clicked()
      * \param No paramters
      * \return Go back one
      *
      * This method goes back one page
      */
    void on_backButton_6_clicked();

    /** \brief on_LoadData_clicked()
      * \param No paramters
      * \return Data table prepped
      *
      * This method loads the new tour data
      * by resetting all previous data
      */
    void on_LoadData_clicked();

    /** \brief on_SortAmount_clicked()
      * \param No paramters
      * \return Page and amount crewated
      *
      * This method begins pre-planned trip page
      * and sorts the distance amount
      */
    void on_SortAmount_clicked();

    /** \brief on_DeleteButton_clicked()
      * \param No paramters
      * \return Tour data deleted
      *
      * This method deletes tour data
      */
    void on_DeleteButton_clicked();

    /** \brief on_DepartButton_12_clicked()
      * \param No paramters
      * \return Trip started
      *
      * This method introduces a new window
      * that goes through all the colleges chosen,
      * with souvenirs, description, image, and price.
      */
    void on_DepartButton_12_clicked();

private:
    Ui::MainWindow *ui;                         ///< *ui, MainWindow's UI
    QVector<QString> selectedCollegesVector;    ///< vector to store selected colleges
    Admin adminObj;                             ///< represents adminObj of class: Admin
    DBManager databaseObj;                      ///< databaseObj, Database Link
    double totalPrice;                          ///< total price from trip
    double currentPrice;                        ///< current price from each college trip


protected:
    /** \brief keyPressEvent(QKeyEvent* pe)
      * \param QKeyEvent* pe
      * \return Even started
      *
      * This method reacts to login push being clicked
      */
      void keyPressEvent(QKeyEvent* pe);
};
#endif // MAINWINDOW_H
