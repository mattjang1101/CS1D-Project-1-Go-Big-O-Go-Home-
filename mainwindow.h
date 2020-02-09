#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <admin.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

    /*******************************************************
     * on_loginPushBtn2_clicked() -
     *  This function error checks for right username and
     *  password. If admin logs in, then the program will
     *  display the admin page.
     *******************************************************/
    void on_loginPushBtn_2_clicked();

    /*******************************************************
     * on_clearPushBtn_clicked() -
     *  Once a user presses the clear button, it will clear
     *  the username and password line edits
     *******************************************************/
    void on_clearPushBtn_2_clicked();

private:
    Ui::MainWindow *ui;
    Admin adminObj; // represents adminObj of class: Admin
};
#endif // MAINWINDOW_H
