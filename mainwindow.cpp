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
}

MainWindow::~MainWindow()
{
    delete ui;
}

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

void MainWindow::showTable(QSqlQueryModel *model)
{
    ui->tableView->setModel(model);     // showTable() shows the QSqlQueryModel database model to the tableview
}

void MainWindow::on_DisplayCampusInfo_clicked()
{
    showTable(databaseObj.loadCampusInfo());
}



void MainWindow::on_DisplaySouvenirs_clicked()
{
    showTable(databaseObj.loadSouvenirs());
}
