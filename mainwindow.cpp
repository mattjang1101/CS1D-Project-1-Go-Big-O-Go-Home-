#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix(":/Images/MainWindow_Logo.png");

    int w = ui->MainWindowLogo->width();
    int h = ui->MainWindowLogo->height();
    ui->MainWindowLogo->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->stackedWidget->setCurrentWidget(ui->MainMenu);
}

MainWindow::~MainWindow()
{
    delete ui;
}

    //---------------------------MAIN MENU CODE-----------------------------------------//


/*******************************************************
 * on_loginPushBtn2_clicked() -
 *  This function error checks for right username and
 *  password. If admin logs in, then the program will
 *  display the admin page.
 *******************************************************/
void MainWindow::on_loginPushBtn_2_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if(username == "admin" && password == "admin")
    {
        // Changes to admin page
        qDebug() << "Access granted";
        adminObj.show();
    }
    else
    {
        // Displays error message
        QMessageBox::warning(this, "Login", "Username or password is not correct");
    }
}

void MainWindow::keyPressEvent(QKeyEvent* pe)
{
if(pe->key() == Qt::Key_Return) on_loginPushBtn_2_clicked();                   //Enter Key works as input for buttonLogin()
}

/*******************************************************
 * on_clearPushBtn_clicked() -
 *  Once a user presses the clear button, it will clear
 *  the username and password line edits
 *******************************************************/
void MainWindow::on_clearPushBtn_2_clicked()
{
    ui->usernameLineEdit->clear();
    ui->passwordLineEdit->clear();
}

//void MainWindow::showTable(QSqlQueryModel *model)
//{
//    ui->tableView->setModel(model);     // showTable() shows the QSqlQueryModel database model to the tableview
//    ui->QueueTableView->setModel(model);
//}

void MainWindow::on_DisplayCampusInfo_clicked()
{
    //showTable(databaseObj.loadCampusInfo());
    ui->tableView->setModel(databaseObj.loadCampusInfo());
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void MainWindow::on_DisplaySouvenirs_clicked()
{
    //showTable(databaseObj.loadSouvenirs());
    ui->tableView->setModel(databaseObj.loadSouvenirs());
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void MainWindow::on_StartTour_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

    //----------------------------PLANNING PAGE CODE-----------------------------------------//

void MainWindow::on_SelectStartingCollegeButton_clicked()
{
    ui->StartingCollegeComboBox->setModel(databaseObj.loadStartingCollegeList());
    ui->DistancesTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void MainWindow::on_StartingCollegeComboBox_currentIndexChanged(const QString &arg1)
{
    QString SelectedCollege = ui->StartingCollegeComboBox->currentText();

    qDebug() << SelectedCollege;

    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("SELECT startingCollege, endingCollege, distanceBetween FROM CollegeDistances where startingCollege='"+SelectedCollege+"'");

    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }

    model->setQuery(qry);

    ui->DistancesTable->setModel(model);

}

void MainWindow::on_PlanCustomTripButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_PrePlannedButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_backButton_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

    //----------------------------CUSTOM TOUR PAGE CODE-----------------------------------------//


void MainWindow::on_SelectStartingCollegeButton_3_clicked()
{
    ui->StartingPointBox->setModel(databaseObj.loadStartingCollegeList());
    ui->QueueTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
<<<<<<< HEAD
=======

    Delete_Tour_Data();                         // Deletes TourData table so it can be reused
    ui->QueueTableView->setModel(databaseObj.loadTourQueueData());  // clears TourTableView
    DeleteAlreadyVisitedCollegesTable();        // Will clear the AlreadyVisitedColleges table
    selectedCollegesVector.clear();             // clears the selected colleges vector
    ui->DistanceNumber->display("0");           // Initially sets the DistanceNumber widget to be 0
>>>>>>> matt
}

void MainWindow::on_AddQueueButton_clicked()
{
<<<<<<< HEAD

    QString AddToQueue = ui->StartingPointBox->currentText();
=======
    QString AddToQueue = ui->StartingPointBox->currentText();

    // If the vector already contains the college, then it won't add
    // Otherwise, it adds
    if(selectedCollegesVector.contains(AddToQueue)) {
        qDebug() << "Can't add duplicates!";
    }
    else {
        selectedCollegesVector.append(AddToQueue);
    }
>>>>>>> matt

    QSqlQuery qry;
    qry.prepare("INSERT INTO TourData(Queue) VALUES('"+AddToQueue+"')");

    if(!qry.exec())
    {
        qDebug() <<"Error! Could not add to Queue. . ." << endl;
    }
    else
        qDebug() << "Successful insertion into Database" << endl;

<<<<<<< HEAD
    ui->QueueTableView->setModel(databaseObj.loadTourQueueData());
=======
   // ui->QueueTableView->setModel(databaseObj.loadTourQueueData());

    // Because databaseObj.loadTourQueueData() displays in an incorrect form in QueueTableView, we set
    // the model to be based off the vector (in correct order)
    ui->QueueTableView->setModel(new QStringListModel(QList<QString>::fromVector(selectedCollegesVector)));

>>>>>>> matt

//    qry.prepare("SELECT COUNT(Queue)  FROM TourData");                    *GETS COUNT OF Queue COLUMN*
}

void MainWindow::on_DeleteQueueButton_clicked()
{
<<<<<<< HEAD
    QSqlQuery qry;
//    qry.prepare("DELETE FROM TourData WHERE Queue = (SELECT MAX(Queue) FROM TourData);");            *CLEARS ENTIRE QUEUE*

    qry.prepare("DELETE FROM TourData "
                "WHERE Queue = (SELECT Queue"
                "               FROM TourData"
                "               ORDER BY Queue DESC"
                "               LIMIT 1)");
=======
    QString removingCollege = selectedCollegesVector.last(); // returns the last item in the vector
    QSqlQuery qry;
//    qry.prepare("DELETE FROM TourData WHERE Queue = (SELECT MAX(Queue) FROM TourData);");            *CLEARS ENTIRE QUEUE*

//    qry.prepare("DELETE FROM TourData "
//                "WHERE Queue = (SELECT Queue"
//                "               FROM TourData"
//                "               ORDER BY Queue DESC"
//                "               LIMIT 1)");
    qry.prepare("Delete from TourData where Queue = '"+removingCollege+"';");
>>>>>>> matt

    if(!qry.exec())
    {
        qDebug() <<"Error! Could not delete Queue data. . ." << endl;

    }

<<<<<<< HEAD
    ui->QueueTableView->setModel(databaseObj.loadTourQueueData());
}

void MainWindow::on_backButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
=======
    selectedCollegesVector.pop_back(); // removes from the vector the last element that was added

    // Sets table view to be the vector contents
    ui->QueueTableView->setModel(new QStringListModel(QList<QString>::fromVector(selectedCollegesVector)));
}

/*on_SortQueue_clicked() - Once clicked, it will sort the Queue Table View by
order of efficiency */
void MainWindow::on_SortQueue_clicked()
{
    QSqlQuery qry;

    // Inserts into the already visited colleges table the first college
    QString startingCollege = selectedCollegesVector.at(0);    // Gets first college from table

    qry.prepare("INSERT into AlreadyVisitedColleges(CollegeName) VALUES('"+ startingCollege + "');");
    if(!qry.exec()) {
         qDebug() <<"Error! Could not insert into AlreadyVisitedColleges!. . ." << endl;
    }

    double totalDistance = 0;

    databaseObj.BeginTrip(startingCollege, selectedCollegesVector, totalDistance);

    ui->QueueTableView->setModel(databaseObj.loadAlreadyVisitedCollegesTable());    // Displays newly sorted table
    ui->DistanceNumber->display(QString::number(totalDistance));    // Displays the totalDistance onto the DistanceNumber widget
}


void MainWindow::on_backButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

/* Delete_Tour_Data() - Will clear everything from TourData table
 */
void MainWindow::Delete_Tour_Data()
{
    QSqlQuery qry;
    qry.prepare("DELETE FROM TourData;");
    if(!qry.exec()) {
        qDebug() << "Can't delete from TourData";
    }
}

/* DeleteAlreadyVisitedTable() - Will clear everything from AlreadyVisitedTable
 */
void MainWindow::DeleteAlreadyVisitedCollegesTable()
{
    QSqlQuery qry;
    qry.prepare("DELETE FROM AlreadyVisitedColleges;");
    if(!qry.exec()) {
        qDebug() << "Can't delete from AlreadyVisitedColleges table!";
    }
}

    //-----------------------------PRE PLANNED TOUR PAGE CODE-----------------------------------------//


void MainWindow::on_backButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_LoadData_clicked()
{
    ui->CollegeSelectBox->setModel(databaseObj.loadStartingCollegeList());
    ui->PrePQueueTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
>>>>>>> matt
}


    //-----------------------------PRE PLANNED TOUR PAGE CODE-----------------------------------------//


void MainWindow::on_backButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_LoadData_clicked()
{
    ui->CollegeSelectBox->setModel(databaseObj.loadStartingCollegeList());
    ui->PrePQueueTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}


void MainWindow::on_SortQueue_clicked()
{

}
