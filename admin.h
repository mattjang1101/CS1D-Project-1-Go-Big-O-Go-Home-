/**
 * \class Admin
 *
 * This class sets up the complete GUI and back-end code
 * for the maintenance of college campuses that is only
 * accessible to an admin. This class features adding/deleting
 * souvenirs, changing prices of souvenirs, and adding/deleting
 * campuses. Any and all changes made is updated in the
 * corresponding database.
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
#ifndef ADMIN_H
#define ADMIN_H

/// Preprocessor Directives
#include <QMainWindow>
#include <string>
#include <iostream>
#include "dbmanager.h"
#include <QMessageBox>
using namespace std;

/*! \namespace UI
 * \brief An Admin UI
 */
namespace Ui {
class Admin;
}

// Start of Admin Class
class Admin : public QMainWindow
{
    Q_OBJECT

public:

    /** \brief Admin(QWidget *parent = nullptr)
      * \param QWidget *parent
      * \return Object created
      *
      * This method introduces the maintenance window
      */
    explicit Admin(QWidget *parent = nullptr);


    /** \brief ~Admin()
      * \param No paramters
      * \return Memory deallocated
      *
      * This method deletes the admin ui
      */
    ~Admin();


private slots:

    /** \brief on_AddButton_clicked()
      * \param No paramters
      * \return Loads new campus info
      *
      * This method loads new campus info into
      * database
      */
    void on_AddButton_clicked();

    /** \brief on_revertButton_clicked()
      * \param No paramters
      * \return on_AddButton_clicked() reverted
      *
      * This method reverts decision of
      * on_AddButton_clicked()
      */
    void on_revertButton_clicked();

    /** \brief on_loadSouvenirsAdminBtn_clicked()
      * \param No paramters
      * \return College souvenirs loaded
      *
      * This method will load all college
      * souvenirs to the table and the distinct
      * colleges to the collegeList combo box
      */
    void on_loadSouvenirsAdminBtn_clicked();

    /** \brief on_collegeListComboBox_currentIndexChanged(const QString &arg1)
      * \param const QString &arg1
      * \return Souvenirs based on combo box set up
      *
      * Will set up souvenir based on the
      * collegeList combo box's index being changed
      */
    void on_collegeListComboBox_currentIndexChanged(const QString &arg1);

    /** \brief on_changePriceBtn_clicked()
      * \param No paramters
      * \return Price changes
      *
      * This method will change the price of the corresponding item

      */
    void on_changePriceBtn_clicked();

    /** \brief on_backBtn_clicked()
      * \param No paramters
      * \return Go back one page
      *
      * This method goes back one page
      */
    void on_backBtn_clicked();

    /** \brief on_backBtn_2_clicked()
      * \param No paramters
      * \return Go back one page
      *
      * This method goes back one page
      */
    void on_backBtn_2_clicked();

    /** \brief on_addSouvenirs_clicked()
      * \param No paramters
      * \return Souvenirs transferred to widget pae
      *
      * This method transfers to AddSouvenir widget page
      */
    void on_addSouvenirs_clicked();

    /** \brief on_deleteSouvenirs_clicked()
      * \param No paramters
      * \return Souvenirs deleted
      *
      * This method deletes the souvenirs that
      * have been chosen
      */
    void on_deleteSouvenirs_clicked();

    /** \brief on_addButton_clicked()
      * \param No paramters
      * \return Data added
      *
      * This method adds the colleges, souvenirs,
      * and prices
      */
    void on_addButton_clicked();

    /** \brief on_chooseCampusList_currentIndexChanged(const QString &arg1)
      * \param const QString &arg1
      * \return campuses chosen
      *
      * This method chooses the campus list to be deleted
      */
    void on_chooseCampusList_currentIndexChanged(const QString &arg1);

    /** \brief on_deleteChosenSouvenir_clicked()
      * \param No paramters
      * \return souvenirs chosen
      *
      * This method chooses the souvenir list to be deleted
      */
    void on_deleteChosenSouvenir_clicked();

private:
    Ui::Admin *ui;              ///< *ui, Admin's UI
    QMainWindow MainObject;     ///< MainObject
    DBManager databaseObj;      ///< databaseObj, Database Link

};                              // end of class Admin

#endif // ADMIN_H
// End file
