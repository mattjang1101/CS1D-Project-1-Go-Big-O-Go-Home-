#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QObject>
#include <QtSql>

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
    QSqlQueryModel *loadEntries();

    /*******************************************************
    * loadEntriesByDate(QString date) -
    *   STORY #1
    *   This function will return a query model based
    *   on a certain date. Will return the table that
    *   displays a sales report for any given day.
    *******************************************************/
    QSqlQueryModel *loadEntriesByDate(QString date);

    /*******************************************************
    * GetTotalRevenue(QString date) -
    *   STORY #1/3
    *   Depending on the date input, this function will
    *   obtain the total revenue from a given date from
    *   the database. If date is empty, then the total
    *   revenue will be the grand total of all the purchases
    *   from all customers. RETURNS total revenue
    *******************************************************/
    double GetTotalRevenue(QString date);

    /*******************************************************
    * loadEntriesByType(QString date, QString memberType)=
    *   This function loads all the entries from the database
    *   by membership type. date and memberType are passed
    *   in to determine whether all the entries of either the
    *   executive or regular customers will be displayed
    *   (entire week) or all the entries of either the
    *   executive or regular customers from a certain day.
    *   RETURNS QSqlQueryModel
    *******************************************************/
    QSqlQueryModel *loadEntriesByType(QString date, QString memberType);

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
    int ReturnMemberTypeCount(QString date,QString memberType);

    /*******************************************************
    * loadDateEntriesOnly()-
    *  This function returns a QSqlQueryModel consisting
    *  of only the purchaseDate entries from the
    *  dailySalesReport table in the database.
    *  This function will be called by the store manager to
    *  set the date combo box to the returned model
    *  RETURNS QSqlQueryModel
    *******************************************************/
    QSqlQueryModel *loadDateEntriesOnly();

    //---------------------STORY 2 & 3 CODE------------------------------
    /*******************************************************
    *loadTotalMemberOrItemPurchases(QString decider)-
    *   Depending on the given decider string, this function
    *   will load the total purchases from all members or
    *   total purchases of all items
    *   RETURNS model (QSqlQueryModel)
    *******************************************************/
    QSqlQueryModel *loadTotalMemberOrItemPurchases(QString decider);

    //----------------------Story 9 and 10--------------------------------//
    /*******************************************************
    * *loadItemsOnly() -
    *  This function returns a QSqlQueryModel consisting
    *  of only the item entries from the database. The entries
    *  will be returned via QSqlQueryModel in order to set the
    *  item combo box to the specific item names
    *  RETURNS QSqlQueryModel
    *******************************************************/
    QSqlQueryModel *loadItemsOnly();

    /*******************************************************
    * *loadNamesOnly() -
    *  This function returns a QSqlQueryModel consisting
    *  of only the member name entries from the database. The entries
    *  will be returned via QSqlQueryModel in order to set the
    *  name combo box to the specific member names
    *  RETURNS QSqlQueryModel
    *******************************************************/
    QSqlQueryModel *loadNamesOnly();

    /*******************************************************
    * *ShowInfoForOneMember(QString name) -
    *  This function returns a QSqlQueryModel consisting
    *  of information about a single member by passing in
    *   the name of the member
    *******************************************************/
    QSqlQueryModel *ShowInfoForOneMember(QString name);

    /*******************************************************
    * *ShowInfoForOneItem(QString item) -
    *  This function returns a QSqlQueryModel consisting
    *  of information about a single item by passing in
    *   the name of the item
    *******************************************************/
    QSqlQueryModel *ShowInfoForOneItem(QString item);

  // -----------------STORY 7 CODE-------------------------//
    // This function adds new customers to the Customers table when admin is creating purchases
    void AddToCustomersTable(QString name, QString id, QString type, int month, int day, int year);

    // This function will add new customer info to the dailySalesReport table when admin is creating purchases
    void AddToDailySalesReport(QString id, QString item, int quantity);

    // This function returns the item price based on the itemName
    double GetItemPrice(QString itemName);

    //----------------END of Story 7 code-------------------//

    //---------------------STORY 4 and 5 CODE---------------//
       // This function will load the rebate table for executive members
    QSqlQueryModel *LoadRebateModel();

    // This function will load the expiration months into the exp month combo box
    QSqlQueryModel *loadExpirationMonthsIntoComboBox();

    // This function will return a model consisting of member information based on the given expiration month input
    QSqlQueryModel *loadMemberInfoFromExpMonth(QString expMonth);
    //-----------------------END OF STORY 4 and 5----------------------//

private:
    QSqlDatabase m_database;
};

#endif // DBMANAGER_H
