#include "dbmanager.h"

DBManager::DBManager()
{
    // Connecting to database
    m_database = QSqlDatabase::addDatabase("QSQLITE");
    m_database.setDatabaseName("C:/Users/hyunm/OneDrive/Documents/GitHub/CS1D-Project-1-Go-Big-O-Go-Home-/CS1DProject1.db");
    //C:/Users/hyunm/OneDrive/Documents/GitHub/CS1D-Project-1-Go-Big-O-Go-Home-     // Matt's
//    /Users/LamsonBui/Documents/GitHub/CS1D-Project-1-Go-Big-O-Go-Home-            // Lamson's
    if(!m_database.open())
    {
        qDebug() << "problem opening database" << endl;
    }
}

DBManager::~DBManager(){}

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
QSqlQueryModel *DBManager::loadCampusInfo()
{
    QString Saddleback = "Saddleback College";

    qDebug() << Saddleback;

    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("SELECT startingCollege, endingCollege, distanceBetween FROM CollegeDistances where startingCollege='"+Saddleback+"'");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

QSqlQueryModel *DBManager::loadSouvenirs()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("SELECT college, traditionalSouvenirs, cost FROM Souvenirs");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

QSqlQueryModel *DBManager::loadStartingCollegeList()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("SELECT DISTINCT startingCollege FROM CollegeDistances");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

QSqlQueryModel *DBManager::loadTourQueueData()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("SELECT Queue FROM TourData");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

QSqlQueryModel *DBManager::loadNextDestination()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("SELECT DISTINCT endingCollege FROM CollegeDistances");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

// loadAlreadyVisitedCollegesTable() - Returns a QSqlQueryModel consisting of information from AlreadyVisitedColleges table
QSqlQueryModel *DBManager::loadAlreadyVisitedCollegesTable()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("SELECT CollegeName from AlreadyVisitedColleges;");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

/* BeginTrip() - Will recursively order the trip in terms of efficiency
 */
void DBManager::BeginTrip(QString startingCollege, QVector<QString> collegesVector)
{
    QSqlQuery qry;
    collegesVector.pop_front(); // pops front of the vector

    // Base case: if vector is empty, exit
    if(collegesVector.isEmpty()) {
        return;
    }

    // General case
    QString closestCollege;
    qry.prepare("Select endingCollege from CollegeDistances where distanceBetween = "
                "(Select min(distanceBetween) from CollegeDistances where startingCollege = '"+startingCollege+"' and "
                "endingCollege not in (Select CollegeName from AlreadyVisitedColleges) and endingCollege in "
                "(Select Queue from TourData)) and startingCollege = '"+startingCollege+"';");

    // Stores the closest college into the string
    if(!qry.exec()) {
        qDebug() << "Can't execute closes college sql statement!";
    }
    if(qry.next()) {
        closestCollege = qry.value(0).toString();
     }

    // Insert into AlreadyVisitedColleges table the closest college
    qry.prepare("Insert into AlreadyVisitedColleges(CollegeName) VALUES('"+closestCollege+"');");
    if(!qry.exec()) {
        qDebug() << "Can't insert closestCollege into AlreadyVisitedColleges";
    }

    startingCollege = closestCollege;
    BeginTrip(startingCollege, collegesVector);
}
