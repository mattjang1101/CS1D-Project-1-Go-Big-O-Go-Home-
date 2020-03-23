/**
 * \class DBManager
 *
 * This class contains all the database-related
 * methods. These methods manipulate the
 * corresponding database
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
#ifndef DBMANAGER_H
#define DBMANAGER_H

/// Preprocessor Directives
#include <QObject>
#include <QtSql>
#include <QObject>
#include <string>
#include <iostream>
#include <QVector>
using namespace std;

// Start of DBManager class
class DBManager
{
public:

    /** \brief DBManager()
      * \param No paramaters
      * \return Object created
      *
      * Constructor
      * This method reads in corresponding database,
      */
    DBManager();

    /** \brief ~DBManager()
      * \param No paramaters
      * \return Memory deallocated
      *
      * Destructor
      * This method deallocates memory
      */
    ~DBManager();

    /** \brief *loadCampusInfo()
      * \param No paramaters
      * \return returns pointer
      *
      * This method helps the program read the contents.
      *  from the database. This function primarily uses
      *  the query function, "select * from". The database
      *  in which it is selected from is called customer.
      *  Throughout the process, the data returned is
      *  is stored in the table created in createTable().
      *  If the database or data has trouble storing the
      *  values, it will output "error loading values to
      *  db".
      */
    QSqlQueryModel *loadCampusInfo();

    /** \brief *loadSouvenirs()
      * \param No paramaters
      * \return Souvenirs loaded
      *
      * This method loads and displays souvenirs
      * for the user's and admin's viewing
      */
    QSqlQueryModel *loadSouvenirs();

    /** \brief *loadStartingCollegeList()
      * \param No paramaters
      * \return College list loaded
      *
      * This method loads the college list
      * from the colleges we STARTED with to
      * the colleges we are ending iwth
      */
    QSqlQueryModel *loadStartingCollegeList();

    /** \brief *loadTourQueueData()
      * \param No paramaters
      * \return Tour queue data loaded
      *
      * This method loads the queue for colleges
      * into the dataabase so we could increment
      * through them
      */
    QSqlQueryModel *loadTourQueueData();

    /** \brief *loadNextDestination()
      * \param No paramaters
      * \return Next destination loaded
      *
      * This method sets and loads up the next
      * college campus.
      */
    QSqlQueryModel *loadNextDestination();

    /** \brief *loadAlreadyVisitedCollegesTable()
      * \param No paramaters
      * \return QSQLQueryModel returned
      *
      * This method returns a QSqlQueryModel consisting
      * of information from AlreadyVisitedColleges table
      */
    QSqlQueryModel *loadAlreadyVisitedCollegesTable();


    /** \brief *LoadSouvenirsByCollege(QString collegeName, bool souvenirsOnly)
      * \param QString collegeName
      * \param bool souvenirsOnly
      * \return Souvenirs have beeen loaded
      *
      * This method returns a QSqlQueryModel consisting of
      * information from Souvenirs table depending on a college.
      * Will also pass in bool variable souvenirsOnly if only
      * the souvenirs are necessary.
      */
    QSqlQueryModel *LoadSouvenirsByCollege(QString collegeName, bool souvenirsOnly);


    /** \brief GetSouvenirPrice(QString collegeName, QString itemName)
      * \param QString collegeName
      * \param QString itemName
      * \return Price returned
      *
      * Returns price of the corresponding item at a given college
      */
    double GetSouvenirPrice(QString collegeName, QString itemName);

    /** \brief BeginTrip(QString startingCollege, QVector<QString> collegesVector, double &totalDistance)
      * \param QString startingCollege
      * \param QVector<QString> collegesVector
      * \param double &totalDistance
      * \return Output that is extra useful
      *
      * This method will recusively visit the closest college campuses
      */
    void BeginTrip(QString startingCollege, QVector<QString> collegesVector, double &totalDistance);

    /** \brief InitializePurchasedSouvenirsTable()
      * \param No paramaters
      * \return Souvenirs inserted
      *
      * This method Will insert all souvenirs from
      * Souvenirs table into PurchasedSouvenirs table
      */
    void InitializePurchasedSouvenirsTable();

    /** \brief DeletePurchasedSouvenirsTable()
      * \param No paramters
      * \return Cotents have been deleted
      *
      * Will delete contents from PurchasedSouvenirs table
      */
    void DeletePurchasedSouvenirsTable();

    /** \brief IncrementQuantity(QString collegeName, QString itemName)
      * \param QString collegeName
      * \param QString itemName
      * \return Quantity of souvenir has been incremented
      *
      * This method does unbelievably useful things.
      * And returns exceptionally useful results.
      * Use it everyday with good health.
      */
    void IncrementQuantity(QString collegeName, QString itemName);

    /** \brief DeleteQuantities(QString collegeName)
      * \param QString collegeName
      * \return Quanitites have been resert
      *
      * Will reset quantities for each souvenir to
      * be 0 at a particular college
      */
    void DeleteQuantities(QString collegeName);

    /** \brief loadNewCampusInfoIntoCollegeDistances()
      * \param No parameters
      * \return New campus info updated
      *
      * Will update new campuses into databse
      */
    void loadNewCampusInfoIntoCollegeDistances();

    /** \brief deleteNewCampusInfoIntoCollegeDistances()
      * \param No parameters
      * \return New campus info deleted
      *
      * Will delete previously added campuses and update
      * the database
      */
    void deleteNewCampusInfoIntoCollegeDistances();

    /** \brief *loadAllColleges()
      * \param No paramters
      * \return Loads all colleges into table
      *
      * This method loads all the colleges for the
      * user/admin to see.
      */
    QSqlQueryModel *loadAllColleges();

    /** \brief UpdateSouvenirPrice(QString collegeName, QString souvenirName, double newPrice)
      * \param QString collegeName
      * \param QString souvenirName
      * \param double newPrice
      * \return Prices updated
      *
      * This method updates the price of a certain souvenir
      */
    void UpdateSouvenirPrice(QString collegeName, QString souvenirName, double newPrice);


private:
    QSqlDatabase m_database;    ///< m_databse, Database Link
};  // end of class dbmanager

/// End file
#endif // DBMANAGER_H
