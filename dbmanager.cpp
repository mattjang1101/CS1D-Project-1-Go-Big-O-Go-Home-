#include "dbmanager.h"

DBManager::DBManager()
{
    // Connecting to database
    m_database = QSqlDatabase::addDatabase("QSQLITE");
    m_database.setDatabaseName("/Users/LamsonBui/Desktop/CS1C-Project-2-Bulk-Club-2.0-master/CS1CProject2.db");
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
QSqlQueryModel *DBManager::loadEntries()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select name, type, dailySalesReport.ID, purchaseDate, item, price, quantity "
                "from Customers, dailySalesReport where Customers.ID = dailySalesReport.ID;");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

/*******************************************************
* loadEntriesByDate(QString date) -
*   STORY #1
*   This function will return a query model based
*   on a certain date. Will return the table that
*   displays a sales report for any given day.
*******************************************************/
QSqlQueryModel *DBManager::loadEntriesByDate(QString date)
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;

    if(date == "")
    {
        qry.prepare("select name, type, dailySalesReport.ID, purchaseDate, item, price, quantity "
                    "from Customers, dailySalesReport where Customers.ID = dailySalesReport.ID;");
    }
    else
    {
        qry.prepare("select name, type, dailySalesReport.ID, purchaseDate, item, price, quantity "
                    "from Customers, dailySalesReport where Customers.ID = dailySalesReport.ID"
                    " and purchaseDate = \""+date+"\";");
    }

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

/*******************************************************
* GetTotalRevenue(QString date) -
*   STORY #1/3
*   Depending on the date input, this function will
*   obtain the total revenue from a given date from
*   the database. If date is empty, then the total
*   revenue will be the grand total of all the purchases
*   from all customers. RETURNS total revenue
*******************************************************/
double DBManager::GetTotalRevenue(QString date)
{
    double totalRevenue = 0;
    QSqlQuery qry;

    // PROCESSING - Depending on the date, the qry variable executes the specified query statement. Then totalRevenue obtains
    // the value of the total revenue from the date
    if(date == "")
    {
        qry.prepare("select printf(\"%.2f\",sum(price * quantity)*1.0775) as \"Total revenue\" from dailySalesReport;");
        qry.exec();
        if(qry.next())
        {
            totalRevenue = qry.value(0).toDouble(); // Storing the value from the table into totalRevenue variable
        }
    }
    else
    {
        qry.prepare("select printf(\"%.2f\", sum(price * quantity)*1.0775) "
                    "as \"Total revenue\" from dailySalesReport where purchaseDate = \""+date+"\";");
        qry.exec();
        if(qry.next())
        {
            totalRevenue = qry.value(0).toDouble();
        }
    }
    return totalRevenue;
}

/*******************************************************
* loadEntriesByType(QString date, QString memberType)=
*   This function loads all the entries from the database
*   by membership type. date and memberType are passed
*   in to determine whether all the entries of either the
*   executive or regular customers will be displayed
*   (entire week) or all the entries of either the
*   executive or regular customers from a certain day.
*   Returns model
*******************************************************/
QSqlQueryModel *DBManager::loadEntriesByType(QString date, QString memberType)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery qry;

    // PROCESSING - If date is empty, then the query will select all the entries of either the
    // executive or regular customers
    if(date == "")
    {
        if(memberType == "Executive")
        {
            qry.prepare("select name, type, dailySalesReport.ID, purchaseDate, item, price, quantity "
                        "from Customers, dailySalesReport where Customers.ID = dailySalesReport.ID"
                        " and type = \"Executive\";");
        }
        else
        {
            qry.prepare("select name, type, dailySalesReport.ID, purchaseDate, item, price, quantity "
                        "from Customers, dailySalesReport where Customers.ID = dailySalesReport.ID"
                        " and type = \"Regular\";");
        }
    }
    // PROCESSING - Otherwise, the query will select all the entries from a given date of either the
    // executive or regular customers
    else
    {
        if(memberType == "Executive")
        {
            qry.prepare("select name, type, dailySalesReport.ID, purchaseDate, item, price, quantity "
                        "from Customers, dailySalesReport where Customers.ID = dailySalesReport.ID"
                        " and type = \"Executive\" and purchaseDate = \""+date+"\";");
        }
        else
        {
            qry.prepare("select name, type, dailySalesReport.ID, purchaseDate, item, price, quantity "
                        "from Customers, dailySalesReport where Customers.ID = dailySalesReport.ID"
                        " and type = \"Regular\" and purchaseDate = \""+date+"\";");
        }
    }

    // PROCESSING - Checks to see if query doesn't execute, then will set the model to be the query and return it
    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;

}

/*******************************************************
*ReturnMemberTypeCount(QString date, QString memberType)-
*   Depending on the date and memberType, this function
*   will count either the executive or regular members
*   from the database. If date is empty, it will count
*   both members throughout the entire week. Otherwise,
*   it will count the number of members based on a certain
*   day
*   RETURNS memberCount (int)
*******************************************************/
int DBManager::ReturnMemberTypeCount(QString date, QString memberType)
{
    int memberCount = 0;
    QSqlQuery qry;
    if(date == "")
    {
        if(memberType == "Executive")
        {
            qry.prepare("select count(distinct(name)) from Customers, dailySalesReport "
                        "where Customers.ID = dailySalesReport.ID and type = \"Executive\";");
        }
        else
        {
            qry.prepare("select count(distinct(name)) from Customers, dailySalesReport "
                        "where Customers.ID = dailySalesReport.ID and type = \"Regular\";");
        }
    }
    else
    {
        if(memberType == "Executive")
        {
            qry.prepare("select count(distinct(name)) from Customers, dailySalesReport "
                         "where Customers.ID = dailySalesReport.ID and "
                         "type = \"Executive\" and purchaseDate = \""+date+"\";");

        }
        else
        {
            qry.prepare("select count(distinct(name)) from Customers, dailySalesReport "
                         "where Customers.ID = dailySalesReport.ID and "
                         "type = \"Regular\" and purchaseDate = \""+date+"\";");
        }
    }

    // executes query, stores the value in the qry into memberCount by converting to an integer
    qry.exec();
    if(qry.next())
    {
        memberCount = qry.value(0).toInt();
    }

    return memberCount;

}

/*******************************************************
* loadDateEntriesOnly()-
*  This function returns a QSqlQueryModel consisting
*  of only the purchaseDate entries from the
*  dailySalesReport table in the database.
*  This function will be called by the store manager to
*  set the date combo box to the returned model
*  RETURNS QSqlQueryModel
*******************************************************/
QSqlQueryModel *DBManager::loadDateEntriesOnly()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery qry;

    qry.prepare("select purchaseDate from dailySalesReport group by purchaseDate;");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;
    }
    model->setQuery(qry);

    return model;
}

//------------------------------------------STORY 2 & 3 CODE-------------------------------------//
/*******************************************************
*loadTotalMemberOrItemPurchases(QString decider)-
*   Depending on the given decider string, this function
*   will load the total purchases from all members or
*   total purchases of all items
*   RETURNS model (QSqlQueryModel)
*******************************************************/
QSqlQueryModel *DBManager::loadTotalMemberOrItemPurchases(QString decider)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery qry;

    if(decider == "Members" || decider == "members")
    {
        qry.prepare("SELECT name, type, Customers.ID, \"$\" || printf(\"%.2f\", ifnull(sum(price * quantity)*1.0775, 0))"
                   " as \"Total revenue (7.75%)\" from Customers left JOIN dailySalesReport on Customers.ID = dailySalesReport.ID "
                   " group by Customers.ID order by Customers.ID;");
    }
    else
    {
        qry.prepare("SELECT item, sum(quantity) as \"quantity sold\", \"$\" || printf(\"%.2f\",sum(price * quantity)*1.0775) "
                    "as \"Total revenue\" from dailySalesReport group by item order by item;");

    }
    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }
    model->setQuery(qry);

    return model;
}

//----------------------Story 9 and 10--------------------------------//
/*******************************************************
* *loadItemsOnly() -
*  This function returns a QSqlQueryModel consisting
*  of only the item entries from the database. The entries
*  will be returned via QSqlQueryModel in order to set the
*  item combo box to the specific item names
*  RETURNS QSqlQueryModel
*******************************************************/
QSqlQueryModel *DBManager::loadItemsOnly()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery qry;

    qry.prepare("select item from inventory order by item;");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;
    }
    model->setQuery(qry);

    return model;
}

QSqlQueryModel *DBManager::loadNamesOnly()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery qry;

    qry.prepare("select name from Customers order by name;");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;
    }
    model->setQuery(qry);

    return model;
}

QSqlQueryModel *DBManager::ShowInfoForOneMember(QString name)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery qry;


     qry.prepare("SELECT name, type, Customers.ID, \"$\" || printf(\"%.2f\", ifnull(sum(price * quantity)*1.0775, 0))"
                " as \"Total revenue (7.75%)\" from Customers left JOIN dailySalesReport on Customers.ID = dailySalesReport.ID "
                "where name = \""+name+"\";");

     if(!qry.exec())
     {
         qDebug() <<"error Loading values to db" << endl;
     }

    model->setQuery(qry);
    return model;

}

QSqlQueryModel *DBManager::ShowInfoForOneItem(QString item)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery qry;

    qry.prepare("SELECT item, quantity as \"total quantity sold\", \"$\" || printf(\"%.2f\",(price * quantity)*1.0775) "
                "as \"Total revenue\" from inventory where item = \""+item+"\";");

     if(!qry.exec())
     {
         qDebug() <<"error Loading values to db" << endl;
     }

    model->setQuery(qry);
    return model;
}

    // -----------------STORY 7 CODE-------------------------//
// This function adds new customers to the Customers table when admin is creating purchases
void DBManager::AddToCustomersTable(QString name, QString id, QString type, int month, int day, int year)
{
    QSqlQuery qry;
    qry.prepare("INSERT INTO Customers (name, ID, type, expMonth, expDay, expYear) VALUES (?, ?, ?, ?, ?, ?);");

    qry.addBindValue(name);
    qry.addBindValue(id);
    qry.addBindValue(type);
    qry.addBindValue(month);
    qry.addBindValue(day);
    qry.addBindValue(year);

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;
    }
}

void DBManager::AddToDailySalesReport(QString id, QString item, int quantity)
{
    QString purchaseDate = "12/09/2019"; // will be the default purchase date
    QSqlQuery qry;

    double price = DBManager::GetItemPrice(item);  // will return the price of a given item

    // Adds new info to the table
    qry.prepare("INSERT INTO dailySalesReport (purchaseDate, ID, item, price, quantity) VALUES (?, ?, ?, ?, ?);");
    qry.addBindValue(purchaseDate);
    qry.addBindValue(id);
    qry.addBindValue(item);
    qry.addBindValue(price);
    qry.addBindValue(quantity);

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;
    }

}

// This function returns the item price based on the itemName
double DBManager::GetItemPrice(QString itemName)
{
    QSqlQuery qry;
    double itemPrice = 0;

    qry.prepare("SELECT price from inventory where item = \""+itemName+"\";");

    qry.exec();
    if(qry.next())
    {
        itemPrice = qry.value(0).toDouble();
    }

    return itemPrice;

}

                    //---------------------STORY 4 and 5 CODE------------------------//

// This function will load the rebate table for executive members using a sql query
QSqlQueryModel *DBManager::LoadRebateModel()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery qry;


    qry.prepare("select name, Customers.ID, type, \"$\" || printf(\"%.2f\", ifnull((sum(price * quantity)+120)*.02, 120*.02)) as \"Rebate amount\""
                " from Customers left join dailySalesReport"
                " on Customers.ID = dailySalesReport.ID where type = \"Executive\" group by Customers.ID order by Customers.ID;");

     if(!qry.exec())
     {
         qDebug() <<"error Loading values to db" << endl;
     }

    model->setQuery(qry);
    return model;
}

// This function will load the expiration months into the exp month combo box
QSqlQueryModel *DBManager::loadExpirationMonthsIntoComboBox()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery qry;

    qry.prepare("select expMonth from Customers group by expMonth order by expMonth;");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;
    }

   model->setQuery(qry);
   return model;
}

// This function will return a model consisting of member information based on the given expiration month input
QSqlQueryModel *DBManager::loadMemberInfoFromExpMonth(QString expMonth)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery qry;

    qry.prepare("select name, ID, type, expMonth, \"$65\" as \"Renew Price\" from Customers where type = \"Regular\" and expMonth = "+expMonth+" UNION "
                "select name, ID, type, expMonth, \"$120\" as \"Renew Price\" from Customers where type = \"Executive\" and expMonth = "+expMonth+";");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;
    }

   model->setQuery(qry);
   return model;
}
                //---------------------------END OF STORY 4 and 5------------------------------------//
