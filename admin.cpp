#include "admin.h"
#include "ui_admin.h"

//testing1

Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->AdminMenu);
}

Admin::~Admin()
{
    delete ui;
}

