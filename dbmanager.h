#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QObject>
#include <QtSql>
#include <QObject>
#include <string>
#include <iostream>
#include <QVector>
using namespace std;

class DBManager
{
public:
    DBManager();
    ~DBManager();

    /*******************************************************
    * loadEntries() -
    *  This function helps the program read the contents.
    *  from the database. This function primarily uses
    *  the query function, "select * from". The database
    *  in which it is selected from is called customer.
    *  Throughout the process, the data returned is
    *  is stored in the table created in createTable().
    *  If the database or data has trouble storing the
    *  values, it will output "error loading values to
    *  db". Returns pointer
    *******************************************************/
    QSqlQueryModel *loadCampusInfo();
    QSqlQueryModel *loadSouvenirs();
    QSqlQueryModel *loadStartingCollegeList();
    QSqlQueryModel *loadTourQueueData();
    QSqlQueryModel *loadNextDestination();

    // loadAlreadyVisitedCollegesTable() - Returns a QSqlQueryModel consisting of information from AlreadyVisitedColleges table
    QSqlQueryModel *loadAlreadyVisitedCollegesTable();

    // LoadSouvenirsByCollege() - Returns a QSqlQueryModel consisting of information from Souvenirs table depending on a college
    // Will also pass in bool variable souvenirsOnly if only the souvenirs are necessary
    QSqlQueryModel *LoadSouvenirsByCollege(QString collegeName, bool souvenirsOnly);

    // GetSouvenirPrice() - Returns price of the corresponding item at a given college
    double GetSouvenirPrice(QString collegeName, QString itemName);


    void BeginTrip(QString startingCollege, QVector<QString> collegesVector, double &totalDistance);

    // InitializePurchasedSouvenirsTable()- Will insert all souvenirs from Souvenirs table into PurchasedSouvenirs table
    void InitializePurchasedSouvenirsTable();

    // DeletePurchasedSouvenirsTable()- Will delete contents from PurchasedSouvenirs table
    void DeletePurchasedSouvenirsTable();

    // IncrementQuantity() - Will increment the quantity of a particular souvenir in PurchasedSouvennirs table
    void IncrementQuantity(QString collegeName, QString itemName);

    // DeleteQuantities() - Will reset quantities for each souvenir to be 0 at a particular college
    void DeleteQuantities(QString collegeName);


//------------------------Angaar's Code--------------------------------//
    void loadNewCampusInfoIntoCollegeDistances();
    void deleteNewCampusInfoIntoCollegeDistances();

    // loadAllColleges() - Loads all colleges from CollegeDistances table
    QSqlQueryModel *loadAllColleges();

    // Updates price of a certain souvenir
    void UpdateSouvenirPrice(QString collegeName, QString souvenirName, double newPrice);



private:
    QSqlDatabase m_database;
};

#endif // DBMANAGER_H
