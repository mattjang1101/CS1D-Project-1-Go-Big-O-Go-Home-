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
    databaseObj.loadNewCampusInfoIntoCollegeDistances();    // Adds new campuses into original colleges table
    ui->CampusTable->setModel(databaseObj.loadAllColleges());   // sets campusTable

}

// Delete button
void Admin::on_revertButton_clicked()
{
    /*
    ui->AdminTable->setModel(databaseObj.deleteNewCampusInfoIntoCollegeDistances());
    ui->AdminTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    */
    databaseObj.deleteNewCampusInfoIntoCollegeDistances();      // Reverts back to original college data
    ui->CampusTable->setModel(databaseObj.loadAllColleges());   // sets campusTable
}


// Change prices souvenir
void Admin::on_ChangePricesButton_clicked()
{
    //databaseObj.changeCampusSouvenirPrices();


}


// Add New Souvenirs
//void Admin::on_pushButton_clicked()
//{

//}



// Delete Souvenirs
//void Admin::on_pushButton_2_clicked()
//{

//}

// Will load all college souvenirs to the table and the distinct colleges to the collegeList combo box
void Admin::on_loadSouvenirsAdminBtn_clicked()
{
    ui->souvenirAdminTable->setModel(databaseObj.loadSouvenirs());
    ui->collegeListComboBox->setModel(databaseObj.loadStartingCollegeList());
    ui->priceLineEdit->setText("0");

}

// Will set up souvenir based on the collegeList combo box's index being changed
void Admin::on_collegeListComboBox_currentIndexChanged(const QString &arg1)
{
    QString college = ui->collegeListComboBox->currentText();
    ui->souvenirListComboBox->setModel(databaseObj.LoadSouvenirsByCollege(college, true));

}

// Will change the price of the corresponding item
void Admin::on_changePriceBtn_clicked()
{
    double newPrice = ui->priceLineEdit->text().toDouble();

    // If the priceInput's value is 0, then display an error message
    if(newPrice <= 0 || newPrice >= 1000) {
         QMessageBox::warning(this, "Warning", "Please input a valid price!");
    }
    // Otherwise update the price of the selected souvenir
    else {
        QString college = ui->collegeListComboBox->currentText();
        QString souvenir = ui->souvenirListComboBox->currentText();

        // Updates souvenir price
        databaseObj.UpdateSouvenirPrice(college, souvenir, newPrice);
        ui->souvenirAdminTable->setModel(databaseObj.loadSouvenirs());  // Updates souvenirTable view
    }
}

void Admin::on_backBtn_clicked()
{
    ui->stackedWidget_3->setCurrentWidget(ui->AddDeleteSouvenir);
}

void Admin::on_backBtn_2_clicked()
{
    on_backBtn_clicked();
}

// Transfers to AddSouvenir widget page
void Admin::on_addSouvenirs_clicked()
{
   ui->stackedWidget_3->setCurrentWidget(ui->AddSouvenir);
   ui->addSouvenirTableView->setModel(databaseObj.loadSouvenirs());
}

// Transfers to DeleteSouvenirs widget page
void Admin::on_deleteSouvenirs_clicked()
{
    ui->stackedWidget_3->setCurrentWidget(ui->DeleteSouvenir);
    ui->deleteSouvenirTableView->setModel(databaseObj.loadSouvenirs());
}
