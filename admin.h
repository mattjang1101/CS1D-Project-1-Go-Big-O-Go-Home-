#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include <string>
#include <iostream>
#include "dbmanager.h"
#include <QMessageBox>
using namespace std;

namespace Ui {
class Admin;
}

class Admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();


private slots:

    void on_AddButton_clicked();

    void on_revertButton_clicked();

    void on_ChangePricesButton_clicked();

    void on_loadSouvenirsAdminBtn_clicked();

    void on_collegeListComboBox_currentIndexChanged(const QString &arg1);

    void on_changePriceBtn_clicked();



    void on_backBtn_clicked();

    void on_backBtn_2_clicked();

    void on_addSouvenirs_clicked();

    void on_deleteSouvenirs_clicked();

private:
    Ui::Admin *ui;
    QMainWindow MainObject;
    DBManager databaseObj;

};

#endif // ADMIN_H
