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
    ui->stackedWidget->setCurrentWidget(ui->MainWindow_2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

    //---------------------------MAIN WINDOW CODE-----------------------------------------//


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
}

void MainWindow::on_DisplaySouvenirs_clicked()
{
    //showTable(databaseObj.loadSouvenirs());
    ui->tableView->setModel(databaseObj.loadSouvenirs());
}

void MainWindow::on_StartTour_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

    //----------------------------TOUR PAGE 2 CODE-----------------------------------------//

void MainWindow::on_SelectStartingCollegeButton_clicked()
{
    ui->StartingCollegeComboBox->setModel(databaseObj.loadStartingCollegeList());
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

    //----------------------------TOUR PAGE 2 CODE-----------------------------------------//


void MainWindow::on_SelectStartingCollegeButton_3_clicked()
{
    ui->StartingPointBox->setModel(databaseObj.loadStartingCollegeList());
    ui->NextDestinationBox->setModel(databaseObj.loadNextDestination());

}

void MainWindow::on_AddQueueButton_clicked()
{
    QString StartPoint = ui->StartingPointBox->currentText();
    QString EndPoint = ui->NextDestinationBox->currentText();

    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("INSERT INTO TourData (StartingPoint, Destination) VALUES ('"+StartPoint+"', '"+EndPoint+"')");

    if(!qry.exec())
    {
        qDebug() <<"Error! Could not add to Queue. . ." << endl;

    }

    //showTable(databaseObj.loadTourQueueData());
    ui->QueueTableView->setModel(databaseObj.loadTourQueueData());

}

