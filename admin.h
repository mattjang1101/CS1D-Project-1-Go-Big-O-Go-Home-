#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include <string>
#include <iostream>
#include "dbmanager.h"
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

private:
    Ui::Admin *ui;
    QMainWindow MainObject;
    DBManager databaseObj;

};

#endif // ADMIN_H
