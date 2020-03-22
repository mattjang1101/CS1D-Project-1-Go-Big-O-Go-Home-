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
    qry.prepare("SELECT college, traditionalSouvenirs, cost FROM Souvenirs order by college");

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

QSqlQueryModel *DBManager::LoadSouvenirsByCollege(QString collegeName, bool souvenirsOnly)
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;

    if(!souvenirsOnly) {
       // qry.prepare("SELECT * from Souvenirs where college = '"+collegeName+"';");
        qry.prepare("select Souvenirs.college, traditionalSouvenirs, cost, quantity from Souvenirs, PurchasedSouvenirs where "
                    "Souvenirs.college = PurchasedSouvenirs.college and Souvenirs.traditionalSouvenirs = PurchasedSouvenirs.souvenir "
                    "and Souvenirs.college = '"+collegeName+"' group by traditionalSouvenirs");
    }
    else {
        qry.prepare("Select traditionalSouvenirs from Souvenirs where college = '"+collegeName+"';");
    }

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

    // GetSouvenirPrice() - Returns price of the corresponding item at a given college
double DBManager::GetSouvenirPrice(QString collegeName, QString itemName)
{
    double price;
    QSqlQuery qry;

    qry.prepare("select printf(\"%.2f\", sum(cost)) as \"Price\" from Souvenirs where college = '"+collegeName+"' "
                "and traditionalSouvenirs = '"+itemName+"';");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }

    if(qry.next()) {
        price = qry.value(0).toDouble();
    }
    return price;
}

// BeginTrip() - Will recursively order the trip in terms of efficiency
void DBManager::BeginTrip(QString startingCollege, QVector<QString> collegesVector, double &totalDistance)
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

    // Will accumulate distance traveled from startingCollege to closestCollege
    qry.prepare("Select distanceBetween from CollegeDistances where startingCollege = '"+startingCollege+"' and endingCollege = '"+closestCollege+"';");
    if(!qry.exec()) {
        qDebug() << "Can't compute total distance!";
    }
    double distanceTraveled;
    if(qry.next()) {
       distanceTraveled = qry.value(0).toDouble();
    }
    totalDistance += distanceTraveled;
    qDebug() << totalDistance;


    // Insert into AlreadyVisitedColleges table the closest college
    qry.prepare("Insert into AlreadyVisitedColleges(CollegeName) VALUES('"+closestCollege+"');");
    if(!qry.exec()) {
        qDebug() << "Can't insert closestCollege into AlreadyVisitedColleges";
    }

    // changes startingCollege to be closestCollege, and calls the function again
    startingCollege = closestCollege;
    BeginTrip(startingCollege, collegesVector, totalDistance);
}

// InitializePurchasedSouvenirsTable()- Will insert all souvenirs from Souvenirs table into PurchasedSouvenirs table
void DBManager::InitializePurchasedSouvenirsTable()
{
    QSqlQuery qry;

    qry.prepare("insert into PurchasedSouvenirs (college, souvenir, quantity) select college, traditionalSouvenirs, 0 from Souvenirs;");
    if(!qry.exec()) {
        qDebug() << "Can't insert into PurchasedSouvenirs table!";
    }
}

// DeletePurchasedSouvenirsTable()- Will delete contents from PurchasedSouvenirs table
void DBManager::DeletePurchasedSouvenirsTable()
{
    QSqlQuery qry;

    qry.prepare("delete from PurchasedSouvenirs;");
    if(!qry.exec()) {
        qDebug() << "Can't delete contents in PurchasedSouvenirs table!";
    }
}


// IncrementQuantity() - Will increment the quantity of a particular souvenir in PurchasedSouvennirs table
void DBManager::IncrementQuantity(QString collegeName, QString itemName)
{
    QSqlQuery qry;

    qry.prepare("UPDATE PurchasedSouvenirs set quantity = quantity + 1 "
                "where college = '"+collegeName+"' and souvenir = '"+itemName+"';");
    if(!qry.exec()) {
        qDebug() << "Can't increment quantity!";
    }
}

  // DeleteQuantities() - Will reset quantities for each souvenir to be 0 at a particular college
void DBManager::DeleteQuantities(QString collegeName)
{
    QSqlQuery qry;

    qry.prepare("UPDATE PurchasedSouvenirs set quantity = 0 where college = '"+collegeName+"';");
    if(!qry.exec()) {
        qDebug() << "Can't resent quantity to 0!";
    }
}



//------------------------Angaar's Code--------------------------------//
void DBManager::loadNewCampusInfoIntoCollegeDistances()
{


    QSqlQuery qry;
    qry.prepare("INSERT INTO CollegeDistances(startingCollege, endingCollege, distanceBetween) SELECT startingCollege, endingCollege, distanceBetween FROM NewCampuses");

    if(!qry.exec())
    {
        qDebug() <<"Error! Could not add to Queue. . ." << endl;
    }
    else
        qDebug() << "Successful insertion into Database" << endl;

}

void DBManager::deleteNewCampusInfoIntoCollegeDistances()
{

    QSqlQuery qry;

     qry.prepare("DELETE FROM CollegeDistances "
                 "WHERE (startingCollege, endingCollege, distanceBetween)"
                 " IN (SELECT startingCollege, endingCollege, distanceBetween FROM NewCampuses);");

    if(!qry.exec())
    {
        qDebug() <<"Error! Could not delete new Database. . ." << endl;
    }
    else
        qDebug() << "Successful deletion into Database" << endl;

}

// loadAllColleges() - Loads all colleges from CollegeDistances table
QSqlQueryModel *DBManager::loadAllColleges()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery qry;

    qry.prepare("Select * from CollegeDistances;");
    if(!qry.exec()) {
       qDebug() <<"Error! Could not load CollegeDistances . ." << endl;
    }

    model->setQuery(qry);
    return model;
}

   // Updates price of a certain souvenir
void DBManager::UpdateSouvenirPrice(QString collegeName, QString souvenirName, double newPrice)
{
    QSqlQuery qry;

    // Updates price of the given souvenir
    qry.prepare("UPDATE Souvenirs SET cost = "+QString::number(newPrice)+" where college = '"+collegeName+"' and traditionalSouvenirs = '"+souvenirName+"';");
    if(!qry.exec())
    {
        qDebug() <<"Error! Could not change souvenir prices in database. . ." << endl;
    }
    else {
        qDebug() << "Successful change souvenir prices in database" << endl;
    }

}

