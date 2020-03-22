#include "admin.h"
#include "ui_admin.h"

//testing1

Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->AdminMenu);
    this->setWindowTitle("Maintenance");
    ui->tabWidget->setTabText(0, "Campuses");
    ui->tabWidget->setTabText(1, "Souvenirs");
    ui->tabWidget_2->setTabText(0, "Add/Delete");
    ui->tabWidget_2->setTabText(1, "Edit");


}

Admin::~Admin()
{
    delete ui;
}


















// Add button
void Admin::on_AddButton_clicked()
{
    /*
    ui->AdminTable->setModel(databaseObj.loadNewCampusInfoIntoCollegeDistances());
    ui->AdminTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    */
    databaseObj.loadNewCampusInfoIntoCollegeDistances();

}

// Delete button
void Admin::on_revertButton_clicked()
{
    /*
    ui->AdminTable->setModel(databaseObj.deleteNewCampusInfoIntoCollegeDistances());
    ui->AdminTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    */
    databaseObj.deleteNewCampusInfoIntoCollegeDistances();
}


// Change prices souvenir
void Admin::on_ChangePricesButton_clicked()
{
    //databaseObj.changeCampusSouvenirPrices();


}


// Add New Souvenirs
void Admin::on_pushButton_clicked()
{

}



// Delete Souvenirs
void Admin::on_pushButton_2_clicked()
{

}
