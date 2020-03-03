#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QObject>
#include <QtSql>
#include <QObject>
#include <string>
#include <iostream>
<<<<<<< HEAD
=======
#include <QVector>
>>>>>>> matt
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

    void BeginTrip(QString startingCollege, QVector<QString> collegesVector, double &totalDistance);



private:
    QSqlDatabase m_database;
};

#endif // DBMANAGER_H
