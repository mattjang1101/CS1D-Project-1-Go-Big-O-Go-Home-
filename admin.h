#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include <string>
#include <iostream>
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


private:
    Ui::Admin *ui;
    QMainWindow MainObject;
};

#endif // ADMIN_H
