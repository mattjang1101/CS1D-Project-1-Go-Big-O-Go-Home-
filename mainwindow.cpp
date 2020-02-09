#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
