#include "userinterface.h"
#include "ui_userinterface.h"

UserInterface::UserInterface(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserInterface)
{
    ui->setupUi(this);
    ui->UIStackWidget->setCurrentIndex(0);
    ui->LoginStackedWidget->setCurrentIndex(0);
}

UserInterface::~UserInterface()
{
    delete ui;
}

void UserInterface::on_LoginButton_clicked()
{
    currentUser = uc.Login(ui->LoginUsernameLineEdit->text(),ui->LoginPasswordLineEdit->text());

    if (currentUser.getUsername()=="")
    {
        QMessageBox::information(this, "Login failed","Either the username or password entered were incorrect, please try again.");
    }
    else
    {
        ui->LoginUsernameLineEdit->setText("");
        ui->LoginPasswordLineEdit->setText("");
        if (currentUser.getUserType().getDescription() == "Customer")
        {
            ui->CustomerHomeUsernameLabel->setText(currentUser.getForename()+" "+currentUser.getSurname());
            ui->UIStackWidget->setCurrentIndex(2);
            ui->CustomerStackedWidget->setCurrentIndex(0);
        }
        else if (currentUser.getUserType().getDescription() == "Administrator")
        {
            ui->AdminTabWidget->setTabEnabled(3, true);
            ui->AdminTabWidget->setTabEnabled(4, true);
            ui->StockTakeButton->setEnabled(true);
            ui->ReportingButton->setEnabled(true);
            ui->ManageUsersButton->setEnabled(true);
            ui->ManageStockAddProductButton->setEnabled(true);
            ui->UIStackWidget->setCurrentIndex(1);
            ui->AdminTabWidget->setCurrentIndex(0);
            pc.SendLowStockEmail();
        }
        else if (currentUser.getUserType().getDescription() == "Apprentice")
        {
            ui->AdminTabWidget->setTabEnabled(3, false);
            ui->AdminTabWidget->setTabEnabled(4, false);
            ui->StockTakeButton->setEnabled(false);
            ui->ReportingButton->setEnabled(false);
            ui->ManageUsersButton->setEnabled(false);
            ui->ManageStockAddProductButton->setEnabled(false);
            ui->UIStackWidget->setCurrentIndex(1);
            ui->AdminTabWidget->setCurrentIndex(0);
        }
    }


}

void UserInterface::on_ManageStockButton_clicked()
{

    ui->AdminTabWidget->setCurrentIndex(1);
}

void UserInterface::on_StockTakeButton_clicked()
{
    ui->AdminTabWidget->setCurrentIndex(2);
}

void UserInterface::on_ReportingButton_clicked()
{
    ui->AdminTabWidget->setCurrentIndex(3);
}

void UserInterface::on_ManageUsersButton_clicked()
{
    ui->AdminTabWidget->setCurrentIndex(4);
}

void UserInterface::on_ShopButton_clicked()
{
    ui->AdminTabWidget->setCurrentIndex(5);
}

void UserInterface::on_LogOutButton_clicked()
{
    ui->UIStackWidget->setCurrentIndex(0);
    ui->LoginStackedWidget->setCurrentIndex(0);
}

void UserInterface::on_AdminTabWidget_currentChanged(int index)
{
    switch (index)
    {
        case 1:
            ManageStockTab("");
            break;
        case 2:
        {
            ui->StockTakeFinishButton->setVisible(false);

            ui->StockTakeTable->clearContents();
            QList<Product> p = pc.SelectProducts();

            ui->StockTakeTable->setRowCount(p.size());
            if (!p.empty())
            {
                for(int i = 0; i< p.size(); i++)
                {
                    ui->StockTakeTable->setItem(i,0,new QTableWidgetItem(p[i].getProdCode()));
                    ui->StockTakeTable->setItem(i,1,new QTableWidgetItem(p[i].getProdDesc()));
                    ui->StockTakeTable->setItem(i,2,new QTableWidgetItem(QString::number(p[i].getStockLevel())));
                }
                ui->StockTakeProdCodeLineEdit->setText(p[0].getProdCode());
                ui->StockTakeProdDescLineEdit->setText(p[0].getProdDesc());
                ui->StockTakeCurrentStockLevelLineEdit->setText(QString::number(p[0].getStockLevel()));
                ui->StockTakeStockLevelSpinBox->setValue(p[0].getStockLevel());

                ui->StockTakeTable->selectRow(0);

                ui->StockTakeUpdateButton->setEnabled(true);
                ui->StockTakeNextButton->setEnabled(false);
                ui->StockTakeStockLevelSpinBox->setEnabled(true);
                ui->StockTakeTable->resizeColumnsToContents();
            }

            break;
        }
        case 3:
            ui->ReportsStackedWidget->setCurrentIndex(0);
            break;
        case 4:
            ManageUsersTab("");
            break;

    }
}

void UserInterface::on_ManageStockTable_cellClicked(int row, int column)
{
    ui->ManageStockProdCodeLineEdit->setText(ui->ManageStockTable->item(row,0)->text());
    ui->ManageStockProdDescLineEdit->setText(ui->ManageStockTable->item(row,1)->text());
    ui->ManageStockCaseQuantitySpinBox->setValue(ui->ManageStockTable->item(row,2)->text().toInt());
    ui->ManageStockUnitPriceSpinBox->setValue(ui->ManageStockTable->item(row,3)->text().toDouble());
    ui->ManageStockStockLevelLineEdit->setText(ui->ManageStockTable->item(row,4)->text());
    ui->ManageStockLowStockSpinBox->setValue(ui->ManageStockTable->item(row,5)->text().toInt());
    ui->ManageStockVATPercentSpinBox->setValue(ui->ManageStockTable->item(row,6)->text().toInt());

    if(currentUser.getUserType().getDescription() == "Administrator")
    {
        ui->ManageStockCancelButton->setEnabled(true);
        ui->ManageStockLowStockSpinBox->setEnabled(true);
        ui->ManageStockProdDescLineEdit->setEnabled(true);
        ui->ManageStockUnitPriceSpinBox->setEnabled(true);
        ui->ManageStockUpdateButton->setEnabled(true);
        ui->ManageStockVATPercentSpinBox->setEnabled(true);
        ui->ManageStockCaseQuantitySpinBox->setEnabled(true);
    }
    ui->ManageStockAddStockButton->setEnabled(true);
}

void UserInterface::on_ManageStockCancelButton_clicked()
{
    ui->ManageStockCancelButton->setEnabled(false);
    ui->ManageStockLowStockSpinBox->setEnabled(false);
    ui->ManageStockProdDescLineEdit->setEnabled(false);
    ui->ManageStockUnitPriceSpinBox->setEnabled(false);
    ui->ManageStockUpdateButton->setEnabled(false);
    ui->ManageStockVATPercentSpinBox->setEnabled(false);
    ui->ManageStockCaseQuantitySpinBox->setEnabled(false);
    ui->ManageStockAddStockButton->setEnabled(false);
}

void UserInterface::on_ManageStockUpdateButton_clicked()
{
    if (ui->ManageStockProdDescLineEdit->text()=="")
    {
        QMessageBox::information(this, "Stock Update Failed","Please enter a Product Description.");
    }
    else
    {
        if (QMessageBox::question(this, "Are you sure?","Are you sure you wish to update the product?", QMessageBox::Yes, QMessageBox::No)==QMessageBox::Yes)
        {
            if (!pc.UpdateProduct(Product(ui->ManageStockProdCodeLineEdit->text(), ui->ManageStockProdDescLineEdit->text(),
                                     ui->ManageStockCaseQuantitySpinBox->value(), ui->ManageStockUnitPriceSpinBox->value(),
                                     ui->ManageStockStockLevelLineEdit->text().toInt(), ui->ManageStockLowStockSpinBox->value(),
                                     ui->ManageStockVATPercentSpinBox->value(),"")))
            {
                QMessageBox::information(this, "Product update failed","Failed to update product.");
            }
            else
            {
                QMessageBox::information(this, "Product successfully updated","The product has successfully been updated.");
                ManageStockTab("");
            }

        }
    }

}

void UserInterface::ManageStockTab(QString prodcode)
{
    ui->ManageStockCancelButton->setEnabled(false);
    ui->ManageStockLowStockSpinBox->setEnabled(false);
    ui->ManageStockProdDescLineEdit->setEnabled(false);
    ui->ManageStockUnitPriceSpinBox->setEnabled(false);
    ui->ManageStockUpdateButton->setEnabled(false);
    ui->ManageStockVATPercentSpinBox->setEnabled(false);
    ui->ManageStockCaseQuantitySpinBox->setEnabled(false);
    ui->ManageStockAddStockButton->setEnabled(false);
    ui->ManageStockStackedWidget->setCurrentIndex(0);

    ui->ManageStockTable->clearContents();
    QList<Product> p;
    if (prodcode== "")
    {
        ui->ManageStockSearchLineEdit->setText("");
        p=pc.SelectProducts();
    }
    else
    {
        p=pc.SelectFilteredProducts(prodcode);
    }
    ui->ManageStockTable->setRowCount(p.size());
    if (!p.empty())
    {
        for(int i = 0; i< p.size(); i++)
        {
            ui->ManageStockTable->setItem(i,0,new QTableWidgetItem(p[i].getProdCode()));
            ui->ManageStockTable->setItem(i,1,new QTableWidgetItem(p[i].getProdDesc()));
            ui->ManageStockTable->setItem(i,2,new QTableWidgetItem(QString::number(p[i].getCaseQuantity())));
            ui->ManageStockTable->setItem(i,3,new QTableWidgetItem(QString::number(p[i].getUnitPrice())));
            ui->ManageStockTable->setItem(i,4,new QTableWidgetItem(QString::number(p[i].getStockLevel())));
            ui->ManageStockTable->setItem(i,5,new QTableWidgetItem(QString::number(p[i].getLowStockLevel())));
            ui->ManageStockTable->setItem(i,6,new QTableWidgetItem(QString::number(p[i].getVATPercent())));
        }
        ui->ManageStockTable->resizeColumnsToContents();

    }

    if (prodcode== "")
    {
        LowStockProductsNotification();
    }

}

void UserInterface::on_CusOrdRepCancelButton_clicked()
{
    ui->ReportsStackedWidget->setCurrentIndex(0);
}

void UserInterface::on_StockAdjRepCancelButton_clicked()
{
    ui->ReportsStackedWidget->setCurrentIndex(0);
}

void UserInterface::on_ShrinkageRepCancelButton_clicked()
{
    ui->ReportsStackedWidget->setCurrentIndex(0);
}

void UserInterface::on_ExpenditureRepCancelButton_clicked()
{
    ui->ReportsStackedWidget->setCurrentIndex(0);
}

void UserInterface::on_SalesRepCancelButton_clicked()
{
    ui->ReportsStackedWidget->setCurrentIndex(0);
}

void UserInterface::on_StockTakeRepCancelButton_clicked()
{
    ui->ReportsStackedWidget->setCurrentIndex(0);
}

void UserInterface::on_StockTakeRepButton_clicked()
{
    ui->StockTakeRepTable->setRowCount(0);
    ui->StockTakeRepTable->clearContents();
    QList<Product> rows = rc.CreateStockTakeReport();
    ui->StockTakeRepTable->setRowCount(rows.size());
    if (!rows.empty())
    {
        for(int i = 0; i< rows.size(); i++)
        {
            ui->StockTakeRepTable->setItem(i,0,new QTableWidgetItem(rows[i].getProdCode()));
            ui->StockTakeRepTable->setItem(i,1,new QTableWidgetItem(rows[i].getProdDesc()));
            ui->StockTakeRepTable->setItem(i,2,new QTableWidgetItem(QString::number(rows[i].getStockLevel())));
            ui->StockTakeRepTable->setItem(i,3,new QTableWidgetItem(QString::number(rows[i].getLowStockLevel())));
        }
        ui->StockTakeRepTable->resizeColumnsToContents();
    }
    ui->ReportsStackedWidget->setCurrentIndex(6);
}

void UserInterface::on_ExpenditureRepButton_clicked()
{
    ui->ExpenditureRepTable->clearContents();
    ui->ExpenditureRepTable->setRowCount(0);
    ui->ReportsStackedWidget->setCurrentIndex(4);
}

void UserInterface::on_SalesRepButton_clicked()
{
    ui->SalesRepTable->clearContents();
    ui->SalesRepTable->setRowCount(0);
    ui->SalesRepDepartmentCombo->clear();
    ui->SalesRepDepartmentCombo->addItem("All");
    QList<Departments> dep = uc.SelectDepartments();
    for (int i=0; i<dep.size(); i++)
    {
        ui->SalesRepDepartmentCombo->addItem(dep[i].getDepartment());
    }

    ui->ReportsStackedWidget->setCurrentIndex(5);
}

void UserInterface::on_ShrinkageRepButton_clicked()
{
    ui->ShrinkageRepTable->clearContents();
    ui->ShrinkageRepTable->setRowCount(0);
    ui->ReportsStackedWidget->setCurrentIndex(3);
}

void UserInterface::on_CusOrdRepButton_clicked()
{
    ui->CusOrdRepTable->clearContents();
    ui->CusOrdRepTable->setRowCount(0);
    ui->CusOrdRepUsernameCombo->clear();
    ui->CusOrdRepUsernameCombo->addItem("All");
    QList<Users> u = uc.SelectUsers();
    for (int i=0; i<u.size(); i++)
    {
        ui->CusOrdRepUsernameCombo->addItem(u[i].getUsername());
    }

    ui->ReportsStackedWidget->setCurrentIndex(1);
}

void UserInterface::on_StockAdjRepButton_clicked()
{
    ui->StockAdjRepTable->clearContents();
    ui->StockAdjRepTable->setRowCount(0);

    ui->StockAdjRepAmendTypeCombo->clear();
    ui->StockAdjRepAmendTypeCombo->addItem("All");
    QList<AmendTypes> t = pc.SelectAmendTypes();
    for (int i=0; i<t.size(); i++)
    {
        ui->StockAdjRepAmendTypeCombo->addItem(t[i].getDescription());
    }

    ui->StockAdjRepProdCodeCombo->clear();
    ui->StockAdjRepProdCodeCombo->addItem("All");
    QList<Product> p = pc.SelectProducts();
    for (int j=0; j<p.size(); j++)
    {
        ui->StockAdjRepProdCodeCombo->addItem(p[j].getProdCode());
    }

    ui->ReportsStackedWidget->setCurrentIndex(2);
}

void UserInterface::on_StockTakeRepExportButton_clicked()
{
    QUrl filename = QFileDialog::getSaveFileUrl(this,"Save Stock Take Report", QUrl(""), "*.xlsx");
    if (filename!=QUrl(""))
    {
        rc.ExportStockTakeReport(filename);
        QMessageBox::information(this, "Report successfully saved","The report has successfully been saved.");
    }
}

void UserInterface::on_ExpenditureRepRunButton_clicked()
{
    ui->ExpenditureRepTable->clearContents();
    QList<ExpenditureRow> rows = rc.CreateExpenditureReport(ui->ExpenditureRepStartDateDateTimeEdit->text(), ui->ExpenditureRepEndDateDateTimeEdit->text());
    ui->ExpenditureRepTable->setRowCount(rows.size());
    if (!rows.empty())
    {
        for(int i = 0; i< rows.size(); i++)
        {
            ui->ExpenditureRepTable->setItem(i,0,new QTableWidgetItem(rows[i].getProd().getProdCode()));
            ui->ExpenditureRepTable->setItem(i,1,new QTableWidgetItem(rows[i].getProd().getProdDesc()));
            ui->ExpenditureRepTable->setItem(i,2,new QTableWidgetItem(QString::number(rows[i].getQuantity())));
            ui->ExpenditureRepTable->setItem(i,3,new QTableWidgetItem(QString::number(rows[i].getTotalPrice())));
        }
        ui->ExpenditureRepTable->resizeColumnsToContents();
    }
}

void UserInterface::on_ExpenditureRepExportButton_clicked()
{
    QUrl filename = QFileDialog::getSaveFileUrl(this,"Save Expenditure Report", QUrl(""), "*.xlsx");
    if (filename!=QUrl(""))
    {
        rc.ExportExpenditureReport(filename, ui->ExpenditureRepStartDateDateTimeEdit->text(), ui->ExpenditureRepEndDateDateTimeEdit->text());
        QMessageBox::information(this, "Report successfully saved","The report has successfully been saved.");
    }
}

void UserInterface::on_SalesRepRunButton_clicked()
{
    ui->SalesRepTable->clearContents();
    QList<SalesRow> rows = rc.CreateSalesReport(ui->SalesRepDepartmentCombo->currentText()== "All" ? "" : ui->SalesRepDepartmentCombo->currentText(),
                                                ui->SalesRepStartDateDateTimeEdit->text(), ui->SalesRepEndDateDateTimeEdit->text());
    ui->SalesRepTable->setRowCount(rows.size());
    if (!rows.empty())
    {
        for(int i = 0; i< rows.size(); i++)
        {
            ui->SalesRepTable->setItem(i,0,new QTableWidgetItem(rows[i].getProd().getProdCode()));
            ui->SalesRepTable->setItem(i,1,new QTableWidgetItem(rows[i].getProd().getProdDesc()));
            ui->SalesRepTable->setItem(i,2,new QTableWidgetItem(QString::number(rows[i].getQuantity())));
            ui->SalesRepTable->setItem(i,3,new QTableWidgetItem(QString::number(rows[i].getTotalPrice())));
        }
        ui->SalesRepTable->resizeColumnsToContents();
    }
}

void UserInterface::on_SalesRepExportButton_clicked()
{
    QUrl filename = QFileDialog::getSaveFileUrl(this,"Save Sales Report", QUrl(""), "*.xlsx");
    if (filename!=QUrl(""))
    {
        rc.ExportSalesReport(filename, ui->SalesRepDepartmentCombo->currentText()== "All" ? "" : ui->SalesRepDepartmentCombo->currentText(),
                             ui->SalesRepStartDateDateTimeEdit->text(), ui->SalesRepEndDateDateTimeEdit->text());
        QMessageBox::information(this, "Report successfully saved","The report has successfully been saved.");
    }
}

void UserInterface::on_CusOrdRepRunButton_clicked()
{
    ui->CusOrdRepTable->clearContents();
    QList<SalesRow> rows = rc.CreateCustomerOrderSummaryReport(ui->CusOrdRepUsernameCombo->currentText()== "All" ? "" : ui->CusOrdRepUsernameCombo->currentText(),
                                                ui->CusOrdRepStartDateDateTimeEdit->text(), ui->CusOrdRepEndDateDateTimeEdit->text());
    ui->CusOrdRepTable->setRowCount(rows.size());
    if (!rows.empty())
    {
        for(int i = 0; i< rows.size(); i++)
        {
            ui->CusOrdRepTable->setItem(i,0,new QTableWidgetItem(rows[i].getProd().getProdCode()));
            ui->CusOrdRepTable->setItem(i,1,new QTableWidgetItem(rows[i].getProd().getProdDesc()));
            ui->CusOrdRepTable->setItem(i,2,new QTableWidgetItem(QString::number(rows[i].getQuantity())));
            ui->CusOrdRepTable->setItem(i,3,new QTableWidgetItem(QString::number(rows[i].getTotalPrice())));
        }
        ui->CusOrdRepTable->resizeColumnsToContents();
    }
}

void UserInterface::on_CusOrdRepExportButton_clicked()
{
    QUrl filename = QFileDialog::getSaveFileUrl(this,"Save Customer Order Summary Report", QUrl(""), "*.xlsx");
    if (filename!=QUrl(""))
    {
        rc.ExportCustomerOrderSummaryReport(filename, ui->CusOrdRepUsernameCombo->currentText()== "All" ? "" : ui->CusOrdRepUsernameCombo->currentText(),
                             ui->CusOrdRepStartDateDateTimeEdit->text(), ui->CusOrdRepEndDateDateTimeEdit->text());
        QMessageBox::information(this, "Report successfully saved","The report has successfully been saved.");
    }
}

void UserInterface::on_ShrinkageRepRunButton_clicked()
{
    ui->ShrinkageRepTable->clearContents();
    QList<ShrinkageRow> rows = rc.CreateShrinkageReport(ui->ShrinkageRepStartDateDateTimeEdit->text(), ui->ShrinkageRepEndDateDateTimeEdit->text());
    ui->ShrinkageRepTable->setRowCount(rows.size());
    if (!rows.empty())
    {
        for(int i = 0; i< rows.size(); i++)
        {
            ui->ShrinkageRepTable->setItem(i,0,new QTableWidgetItem(rows[i].getProd().getProdCode()));
            ui->ShrinkageRepTable->setItem(i,1,new QTableWidgetItem(rows[i].getProd().getProdDesc()));
            ui->ShrinkageRepTable->setItem(i,2,new QTableWidgetItem(QString::number(rows[i].getQuantity())));
        }
        ui->ShrinkageRepTable->resizeColumnsToContents();
    }
}

void UserInterface::on_ShrinkageRepExportButton_clicked()
{
    QUrl filename = QFileDialog::getSaveFileUrl(this,"Save Shrinkage Report", QUrl(""), "*.xlsx");
    if (filename!=QUrl(""))
    {
        rc.ExportShrinkageReport(filename, ui->ShrinkageRepStartDateDateTimeEdit->text(), ui->ShrinkageRepEndDateDateTimeEdit->text());
        QMessageBox::information(this, "Report successfully saved","The report has successfully been saved.");
    }
}

void UserInterface::on_StockAdjRepRunButton_clicked()
{
    ui->StockAdjRepTable->clearContents();
    QList<StockHistory> rows = rc.CreateAdjustmentReport(ui->StockAdjRepStartDateDateTimeEdit->text(), ui->StockAdjRepEndDateDateTimeEdit->text(),
                                                          ui->StockAdjRepAmendTypeCombo->currentText()== "All" ? "" : ui->StockAdjRepAmendTypeCombo->currentText(),
                                                          ui->StockAdjRepProdCodeCombo->currentText()== "All" ? "" : ui->StockAdjRepProdCodeCombo->currentText());
    ui->StockAdjRepTable->setRowCount(rows.size());
    if (!rows.empty())
    {
        for(int i = 0; i< rows.size(); i++)
        {
            ui->StockAdjRepTable->setItem(i,0,new QTableWidgetItem(rows[i].getProd().getProdCode()));
            ui->StockAdjRepTable->setItem(i,1,new QTableWidgetItem(rows[i].getProd().getProdDesc()));
            ui->StockAdjRepTable->setItem(i,2,new QTableWidgetItem(rows[i].getAmendType().getDescription()));
            ui->StockAdjRepTable->setItem(i,3,new QTableWidgetItem(QString::number(rows[i].getQuantity())));
            ui->StockAdjRepTable->setItem(i,4,new QTableWidgetItem(rows[i].getAmendDate()));
        }
        ui->StockAdjRepTable->resizeColumnsToContents();
    }
}

void UserInterface::on_StockAdjRepExportButton_clicked()
{
    QUrl filename = QFileDialog::getSaveFileUrl(this,"Save Stock Adjustment Report", QUrl(""), "*.xlsx");
    if (filename!=QUrl(""))
    {
        rc.ExportAdjustmentReport(filename, ui->StockAdjRepStartDateDateTimeEdit->text(), ui->StockAdjRepEndDateDateTimeEdit->text(),
                                  ui->StockAdjRepAmendTypeCombo->currentText()== "All" ? "" : ui->StockAdjRepAmendTypeCombo->currentText(),
                                  ui->StockAdjRepProdCodeCombo->currentText()== "All" ? "" : ui->StockAdjRepProdCodeCombo->currentText());
        QMessageBox::information(this, "Report successfully saved","The report has successfully been saved.");
    }
}

void UserInterface::on_ManageStockAddProductButton_clicked()
{
    ui->ManageStockStackedWidget->setCurrentIndex(1);
    ui->AddProductCaseQuantitySpinBox->setValue(1);
    ui->AddProductLowStockLevelSpinBox->setValue(1);
    ui->AddProductStockLevelSpinBox->setValue(0);
    ui->AddProductProdCodeLineEdit->setText("");
    ui->AddProductProdDescLineEdit->setText("");
    ui->AddProductUnitPriceSpinBox->setValue(0.0);
    ui->AddProductVATPercentSpinBox->setValue(0);
    ui->AddProductImageLineEdit->setText("");
}

void UserInterface::on_AddProductCancelButton_clicked()
{
    ManageStockTab("");
}

void UserInterface::on_AddProductAddButton_clicked()
{
    if (ui->AddProductProdCodeLineEdit->text()=="")
    {
        QMessageBox::information(this, "Failed to add Product","Please enter a Product Code.");
    }
    else if (ui->AddProductProdDescLineEdit->text()=="")
    {
        QMessageBox::information(this, "Failed to add Product","Please enter a Product Description.");
    }
    else if(ui->AddProductImageLineEdit->text()=="")
    {
        QMessageBox::information(this,"Failed to add Product","Please choose an Image file for the Product.");
    }
    else
    {
        int result = pc.AddProduct(Product(ui->AddProductProdCodeLineEdit->text(),ui->AddProductProdDescLineEdit->text(),ui->AddProductCaseQuantitySpinBox->value(),
                                           ui->AddProductUnitPriceSpinBox->value(),ui->AddProductStockLevelSpinBox->value(),ui->AddProductLowStockLevelSpinBox->value(),
                                           ui->AddProductVATPercentSpinBox->value(),ui->AddProductImageLineEdit->text()));

        switch (result)
        {
            case 0:
                QMessageBox::information(this, "Failed to add Product","Failed to add Product.");
                break;
            case 1:
                QMessageBox::information(this, "Product succesfully added","The Product has succesfully been added.");
                ManageStockTab("");
                break;
            case 2:
                QMessageBox::information(this, "Failed to add Product","Product Code already exists.");
                break;

        }
    }
}

void UserInterface::on_AddProductProdCodeLineEdit_textChanged(const QString &text)
{
    ui->AddProductProdCodeLineEdit->setText(text.toUpper());
}

void UserInterface::on_LoginUsernameLineEdit_textChanged(const QString &text)
{
    ui->LoginUsernameLineEdit->setText(text.toLower());
}

void UserInterface::on_ManageStockAddStockButton_clicked()
{
    ui->AddStockProdCodeLineEdit->setText(ui->ManageStockProdCodeLineEdit->text());
    Product p = pc.SelectProduct(ui->ManageStockProdCodeLineEdit->text());

    ui->AddStockProdDescLineEdit->setText(p.getProdDesc());
    ui->AddStockCaseQuantityLineEdit->setText(QString::number(p.getCaseQuantity()));
    ui->AddStockStockLevelLineEdit->setText(QString::number(p.getStockLevel()));
    ui->AddStockNewStockLevelLineEdit->setText(QString::number(p.getStockLevel()+p.getCaseQuantity()));

    ui->ManageStockStackedWidget->setCurrentIndex(2);
}

void UserInterface::on_AddStockCancelButton_clicked()
{
    ManageStockTab("");
}

void UserInterface::on_AddStockCasesToAddSpinBox_valueChanged(int cases)
{
    ui->AddStockNewStockLevelLineEdit->setText(QString::number(ui->AddStockStockLevelLineEdit->text().toInt()+(ui->AddStockCaseQuantityLineEdit->text().toInt()*cases)));
}

void UserInterface::on_AddStockConfirmButton_clicked()
{
    int result = pc.UpdateStockLevel(ui->AddStockProdCodeLineEdit->text(), ui->AddStockNewStockLevelLineEdit->text().toInt());

    switch (result)
    {
        case 0:
            QMessageBox::information(this, "Failed to add Stock History","Failed to add Stock History.");
            break;
        case 1:
            QMessageBox::information(this, "Stock Level succesfully update","The Product's Stock Level has succesfully been updated.");
            ManageStockTab("");
            break;
        case 2:
            QMessageBox::information(this, "Failed to update Product","Product doesn't exist.");
            break;
        case 3:
            QMessageBox::information(this, "Failed to update Stock Level","Failed to update Product's Stock Level.");
            break;

    }
}

void UserInterface::on_ManageStockSearchButton_clicked()
{
    ManageStockTab(ui->ManageStockSearchLineEdit->text());
}

void UserInterface::on_ManageStockSearchLineEdit_textChanged(const QString &text)
{
    ui->ManageStockSearchLineEdit->setText(text.toUpper());
}

void UserInterface::on_StockTakeUpdateButton_clicked()
{
    ui->StockTakeUpdateButton->setEnabled(false);
    ui->StockTakeStockLevelSpinBox->setEnabled(false);

    if(ui->StockTakeCurrentStockLevelLineEdit->text().toInt()!=ui->StockTakeStockLevelSpinBox->value())
    {
        pc.UpdateStockLevel(ui->StockTakeProdCodeLineEdit->text(),ui->StockTakeStockLevelSpinBox->value());
        ui->StockTakeTable->item(ui->StockTakeTable->currentRow(),2)->setText(QString::number(ui->StockTakeStockLevelSpinBox->value()));
    }

    if ((ui->StockTakeTable->currentRow() + 1) == ui->StockTakeTable->rowCount())
    {
        ui->StockTakeFinishButton->setEnabled(true);
    }
    else
    {
        ui->StockTakeNextButton->setEnabled(true);
    }

}

void UserInterface::on_StockTakeNextButton_clicked()
{
    int currentRow = ui->StockTakeTable->currentRow();

    ui->StockTakeStockLevelSpinBox->setEnabled(true);

    ui->StockTakeNextButton->setEnabled(false);

    if ((currentRow + 2) == ui->StockTakeTable->rowCount())
    {
        ui->StockTakeFinishButton->setVisible(true);
        ui->StockTakeFinishButton->setEnabled(false);
    }

    ui->StockTakeProdCodeLineEdit->setText(ui->StockTakeTable->item(currentRow+1,0)->text());
    ui->StockTakeProdDescLineEdit->setText(ui->StockTakeTable->item(currentRow+1,1)->text());
    ui->StockTakeCurrentStockLevelLineEdit->setText(ui->StockTakeTable->item(currentRow+1,2)->text());
    ui->StockTakeStockLevelSpinBox->setValue(ui->StockTakeTable->item(currentRow+1,2)->text().toInt());

    ui->StockTakeTable->selectRow(currentRow+1);

    ui->StockTakeUpdateButton->setEnabled(true);


}

void UserInterface::on_StockTakeFinishButton_clicked()
{
    QMessageBox::information(this, "Stock Take Completed","The Stock Take has succesfully been completed.");
    ui->AdminTabWidget->setCurrentIndex(0);
}

void UserInterface::on_RegisterUsernameLineEdit_textChanged(const QString &text)
{
    ui->RegisterUsernameLineEdit->setText(text.toLower());
}

void UserInterface::on_RegisterCancelButton_clicked()
{
    ui->LoginStackedWidget->setCurrentIndex(0);
}

void UserInterface::on_LoginRegisterButton_clicked()
{
    ui->LoginUsernameLineEdit->setText("");
    ui->LoginPasswordLineEdit->setText("");
    ui->RegisterForenameLineEdit->setText("");
    ui->RegisterSurnameLineEdit->setText("");
    ui->RegisterNonVATComboBox->setCurrentIndex(0);
    ui->RegisterUsernameLineEdit->setText("");
    ui->RegisterPasswordLineEdit->setText("");
    ui->RegisterEmailLineEdit->setText("");
    ui->RegisterChargeCodeComboBox->clear();
    ui->RegisterChargeCodeComboBox->addItem("Select a Charge Code");
    QList<Departments> d = uc.SelectDepartments();

    for (int i=0; i<d.size(); i++)
    {
        ui->RegisterChargeCodeComboBox->addItem(d[i].getChargeCode());
    }

    ui->LoginStackedWidget->setCurrentIndex(1);
}

void UserInterface::on_RegisterRegisterButton_clicked()
{
    if(ui->RegisterUsernameLineEdit->text()=="")
    {
        QMessageBox::information(this, "Username is empty","You must enter a Username");
    }
    else if(ui->RegisterPasswordLineEdit->text()=="")
    {
        QMessageBox::information(this, "Password is empty","You must enter a Password");
    }
    else if(ui->RegisterForenameLineEdit->text()=="")
    {
        QMessageBox::information(this, "Forename is empty","You must enter a Forename");
    }
    else if(ui->RegisterSurnameLineEdit->text()=="")
    {
        QMessageBox::information(this, "Surname is empty","You must enter a Surname");
    }
    else if(ui->RegisterEmailLineEdit->text()=="")
    {
        QMessageBox::information(this, "Email is empty","You must enter an Email");
    }
    else if(ui->RegisterChargeCodeComboBox->currentIndex()==0)
    {
        QMessageBox::information(this, "Choose a Charge Code","You must choose a Charge Code");
    }
    else if(!ui->RegisterEmailLineEdit->text().contains("@") || !ui->RegisterEmailLineEdit->text().contains("."))
    {
        QMessageBox::information(this, "Incorrect Email format","You must enter an actual Email address");
    }
    else
    {
        int result = uc.NewUser(Users(ui->RegisterUsernameLineEdit->text(),ui->RegisterPasswordLineEdit->text(), ui->RegisterForenameLineEdit->text(),
                                      ui->RegisterSurnameLineEdit->text(),ui->RegisterEmailLineEdit->text(), uc.SelectDepartment(ui->RegisterChargeCodeComboBox->currentText()),
                                      UserTypes(UserType.value("Customer"),"Customer"), ui->RegisterNonVATComboBox->currentText()=="No" ? 1 : 0));

        switch(result)
        {
            case 2:
                QMessageBox::information(this, "Username already exists","The Username entered already exists, please choose another");
                break;
            case 0:
                QMessageBox::information(this, "Failed to create new User","Failed to create new User");
                break;
            case 1:
                QMessageBox::information(this, "Succesfully created User","The User has successfully been created");
                ui->LoginStackedWidget->setCurrentIndex(0);
                break;

        }
    }

}

void UserInterface::ManageUsersTab(QString username)
{
    ui->ManageUsersCancelButton->setEnabled(false);
    ui->ManageUsersChargeCodeCombo->setEnabled(false);
    ui->ManageUsersEmailLineEdit->setEnabled(false);
    ui->ManageUsersForenameLineEdit->setEnabled(false);
    ui->ManageUsersSurnameLineEdit->setEnabled(false);
    ui->ManageUsersUpdateButton->setEnabled(false);
    ui->ManageUsersUserTypeCombo->setEnabled(false);
    ui->ManageUsersVATTypeCombo->setEnabled(false);
    ui->ManageUsersStackedWidget->setCurrentIndex(0);

    ui->ManageUsersTable->clearContents();
    QList<Users> u;
    if (username== "")
    {
        ui->ManageUsersSearchLineEdit->setText("");
        u=uc.SelectUsers();
    }
    else
    {
        u=uc.SelectFilteredUsers(username);
    }

    ui->ManageUsersUserTypeCombo->clear();
    QList<QString> ut = UserType.keys();

    for (int j=0; j<ut.size(); j++)
    {
        ui->ManageUsersUserTypeCombo->addItem(ut[j]);
    }

    ui->ManageUsersChargeCodeCombo->clear();
    QList<Departments> cc = uc.SelectDepartments();

    for (int k=0; k<cc.size(); k++)
    {
        ui->ManageUsersChargeCodeCombo->addItem(cc[k].getChargeCode());
    }



    ui->ManageUsersTable->setRowCount(u.size());
    for(int i = 0; i< u.size(); i++)
    {
        ui->ManageUsersTable->setItem(i,0,new QTableWidgetItem(u[i].getUsername()));
        ui->ManageUsersTable->setItem(i,1,new QTableWidgetItem(u[i].getForename()));
        ui->ManageUsersTable->setItem(i,2,new QTableWidgetItem(u[i].getSurname()));
        ui->ManageUsersTable->setItem(i,3,new QTableWidgetItem(u[i].getEmail()));
        ui->ManageUsersTable->setItem(i,4,new QTableWidgetItem(u[i].getDepartment().getChargeCode()));
        ui->ManageUsersTable->setItem(i,5,new QTableWidgetItem(u[i].getUserType().getDescription()));
        ui->ManageUsersTable->setItem(i,6,new QTableWidgetItem(u[i].getAddVAT()== 1 ? "No" : "Yes"));
    }
    ui->ManageUsersTable->resizeColumnsToContents();
}

void UserInterface::on_ManageUsersSearchButton_clicked()
{
    ManageUsersTab(ui->ManageUsersSearchLineEdit->text());
}

void UserInterface::on_ManageUsersSearchLineEdit_textChanged(const QString &text)
{
    ui->ManageUsersSearchLineEdit->setText(text.toLower());
}

void UserInterface::on_ManageUsersTable_cellClicked(int row, int column)
{
    ui->ManageUsersUsernameLineEdit->setText(ui->ManageUsersTable->item(row,0)->text());
    ui->ManageUsersForenameLineEdit->setText(ui->ManageUsersTable->item(row,1)->text());
    ui->ManageUsersSurnameLineEdit->setText(ui->ManageUsersTable->item(row,2)->text());
    ui->ManageUsersEmailLineEdit->setText(ui->ManageUsersTable->item(row,3)->text());
    ui->ManageUsersChargeCodeCombo->setCurrentText(ui->ManageUsersTable->item(row,4)->text());
    ui->ManageUsersUserTypeCombo->setCurrentText(ui->ManageUsersTable->item(row,5)->text());
    ui->ManageUsersVATTypeCombo->setCurrentText(ui->ManageUsersTable->item(row,6)->text());

    ui->ManageUsersCancelButton->setEnabled(true);
    ui->ManageUsersChargeCodeCombo->setEnabled(true);
    ui->ManageUsersEmailLineEdit->setEnabled(true);
    ui->ManageUsersForenameLineEdit->setEnabled(true);
    ui->ManageUsersSurnameLineEdit->setEnabled(true);
    ui->ManageUsersUpdateButton->setEnabled(true);
    ui->ManageUsersUserTypeCombo->setEnabled(true);
    ui->ManageUsersVATTypeCombo->setEnabled(true);

}

void UserInterface::on_ManageUsersCancelButton_clicked()
{
    ui->ManageUsersCancelButton->setEnabled(false);
    ui->ManageUsersChargeCodeCombo->setEnabled(false);
    ui->ManageUsersEmailLineEdit->setEnabled(false);
    ui->ManageUsersForenameLineEdit->setEnabled(false);
    ui->ManageUsersSurnameLineEdit->setEnabled(false);
    ui->ManageUsersUpdateButton->setEnabled(false);
    ui->ManageUsersUserTypeCombo->setEnabled(false);
    ui->ManageUsersVATTypeCombo->setEnabled(false);
}

void UserInterface::on_ManageUsersUpdateButton_clicked()
{
    if (ui->ManageUsersForenameLineEdit->text()=="")
    {
        QMessageBox::information(this, "User Update Failed","Please enter a Forename.");
    }
    else if (ui->ManageUsersSurnameLineEdit->text()=="")
    {
        QMessageBox::information(this, "User Update Failed","Please enter a Surname.");
    }
    else if (ui->ManageUsersEmailLineEdit->text()=="")
    {
        QMessageBox::information(this, "User Update Failed","Please enter an Email.");
    }
    else if (ui->ManageUsersEmailLineEdit->text()=="")
    {
        QMessageBox::information(this, "User Update Failed","Please enter an Email.");
    }
    else if(!ui->ManageUsersEmailLineEdit->text().contains("@") || !ui->ManageUsersEmailLineEdit->text().contains("."))
    {
        QMessageBox::information(this, "User Update Failed","You must enter an actual Email address");
    }
    else
    {
        if (QMessageBox::question(this, "Are you sure?","Are you sure you wish to update the User?", QMessageBox::Yes, QMessageBox::No)==QMessageBox::Yes)
        {
            if (!uc.UpdateUser(Users(ui->ManageUsersUsernameLineEdit->text(), "",
                                     ui->ManageUsersForenameLineEdit->text(), ui->ManageUsersSurnameLineEdit->text(),
                                     ui->ManageUsersEmailLineEdit->text(), uc.SelectDepartment(ui->ManageUsersChargeCodeCombo->currentText()),
                                     UserTypes(UserType.value(ui->ManageUsersUserTypeCombo->currentText()),
                                               ui->ManageUsersUserTypeCombo->currentText()), ui->ManageUsersVATTypeCombo->currentText()=="Yes" ? 1 : 0)))

            {
                QMessageBox::information(this, "User update failed","Failed to update User.");
            }
            else
            {
                QMessageBox::information(this, "User successfully updated","The User has successfully been updated.");
                ManageUsersTab("");
            }
        }
    }
}

void UserInterface::on_ManageUsersAddUserButton_clicked()
{
    ui->AddUserForenameLineEdit->setText("");
    ui->AddUserSurnameLineEdit->setText("");
    ui->AddUserNonVATComboBox->setCurrentIndex(0);
    ui->AddUserUsernameLineEdit->setText("");
    ui->AddUserPasswordLineEdit->setText("");
    ui->AddUserEmailLineEdit->setText("");
    ui->AddUserChargeCodeComboBox->clear();
    ui->AddUserChargeCodeComboBox->addItem("Select a Charge Code");
    QList<Departments> d = uc.SelectDepartments();

    for (int i=0; i<d.size(); i++)
    {
        ui->AddUserChargeCodeComboBox->addItem(d[i].getChargeCode());
    }

    ui->AddUserUserTypeComboBox->clear();
    ui->AddUserUserTypeComboBox->addItem("Select a User Type");
    QList<QString> ut = UserType.keys();

    for (int j=0; j<ut.size(); j++)
    {
        ui->AddUserUserTypeComboBox->addItem(ut[j]);
    }

    ui->ManageUsersStackedWidget->setCurrentIndex(1);
}

void UserInterface::on_AddUserCancelButton_clicked()
{
    ManageUsersTab("");
}

void UserInterface::on_AddUserAddButton_clicked()
{
    if(ui->AddUserUsernameLineEdit->text()=="")
    {
        QMessageBox::information(this, "Username is empty","You must enter a Username");
    }
    else if(ui->AddUserPasswordLineEdit->text()=="")
    {
        QMessageBox::information(this, "Password is empty","You must enter a Password");
    }
    else if(ui->AddUserForenameLineEdit->text()=="")
    {
        QMessageBox::information(this, "Forename is empty","You must enter a Forename");
    }
    else if(ui->AddUserSurnameLineEdit->text()=="")
    {
        QMessageBox::information(this, "Surname is empty","You must enter a Surname");
    }
    else if(ui->AddUserEmailLineEdit->text()=="")
    {
        QMessageBox::information(this, "Email is empty","You must enter an Email");
    }
    else if(ui->AddUserChargeCodeComboBox->currentIndex()==0)
    {
        QMessageBox::information(this, "Choose a Charge Code","You must choose a Charge Code");
    }
    else if(ui->AddUserUserTypeComboBox->currentIndex()==0)
    {
        QMessageBox::information(this, "Choose a User Type","You must choose a User Type");
    }
    else if(!ui->AddUserEmailLineEdit->text().contains("@") || !ui->AddUserEmailLineEdit->text().contains("."))
    {
        QMessageBox::information(this, "Incorrect Email format","You must enter an actual Email address");
    }
    else
    {
        int result = uc.NewUser(Users(ui->AddUserUsernameLineEdit->text(),ui->AddUserPasswordLineEdit->text(), ui->AddUserForenameLineEdit->text(),
                                      ui->AddUserSurnameLineEdit->text(),ui->AddUserEmailLineEdit->text(), uc.SelectDepartment(ui->AddUserChargeCodeComboBox->currentText()),
                                      UserTypes(UserType.value(ui->AddUserUserTypeComboBox->currentText()),ui->AddUserUserTypeComboBox->currentText()),
                                      ui->AddUserNonVATComboBox->currentText()=="No" ? 1 : 0));

        switch(result)
        {
            case 2:
                QMessageBox::information(this, "Username already exists","The Username entered already exists, please choose another");
                break;
            case 0:
                QMessageBox::information(this, "Failed to create new User","Failed to create new User");
                break;
            case 1:
                QMessageBox::information(this, "Succesfully created User","The User has successfully been created");
                ManageUsersTab("");
                break;

        }
    }
}

void UserInterface::on_AddUserUsernameLineEdit_textChanged(const QString &text)
{
    ui->AddUserUsernameLineEdit->setText(text.toLower());
}

void UserInterface::LowStockProductsNotification()
{
    QList<Product> p = pc.SelectLowStockProducts();

    if (!p.empty())
    {
        QString products;
        for (int i=0; i<p.size(); i++)
        {
            products+= p[i].getProdCode()+" - "
                    + QString::number(p[i].getStockLevel()) + " in stock (low stock level: "
                    + QString::number(p[i].getLowStockLevel())+")\n";
        }

        QMessageBox::information(this, "Low Stock Products","The following products are low in stock:\n\n"+products+"\nYou may wish to order more stock.");
    }
}

void UserInterface::on_AddProductImageSearchButton_clicked()
{
    ui->AddProductImageLineEdit->setText(QFileDialog::getOpenFileUrl(this,"Choose Product Image", QUrl(""), "Image Files (*.jpg *.png)").toString().replace("file:///",""));
}

void UserInterface::on_CustomerLogOutButton_clicked()
{

    ui->UIStackWidget->setCurrentIndex(0);
    ui->LoginStackedWidget->setCurrentIndex(0);

}

void UserInterface::on_CustomerShopButton_clicked()
{
    StartShopping();
}

void UserInterface::StartShopping()
{
    ResetShopWidget();
    oc.BeginOrder(currentUser);
    ui->CustomerShopBasketTable->setRowCount(0);
    ui->CustomerShopCheckoutButton->setEnabled(false);
    ui->CustomerStackedWidget->setCurrentIndex(1);
    ui->UIStackWidget->setCurrentIndex(2);
}


void UserInterface::on_CustomerShopSearchLineEdit_textChanged(const QString &text)
{
    ui->CustomerShopSearchLineEdit->setText(text.toUpper());
}

void UserInterface::on_CustomerShopSearchButton_clicked()
{
    SetShopLabels(ui->CustomerShopSearchLineEdit->text());

}

void UserInterface::on_CustomerShopCancelButton_clicked()
{
    if (QMessageBox::question(this, "Are you sure?","Are you sure you wish to cancel your Order?", QMessageBox::Yes, QMessageBox::No)==QMessageBox::Yes)
    {
        oc.ClearBasket();
        if (currentUser.getUserType().getTypeID()==UserType.value("Customer"))
        {
            ui->CustomerStackedWidget->setCurrentIndex(0);
        }
        else
        {
            ui->AdminTabWidget->setCurrentIndex(0);
            ui->UIStackWidget->setCurrentIndex(1);
        }
    }
}

void UserInterface::on_CustomerShopAddButton_clicked()
{
    int result = oc.ScanItem(ui->CustomerShopProdCodeLineEdit->text(),ui->CustomerShopQuantitySpinBox->value());

    switch (result)
    {
        case 2:
            QMessageBox::information(this, "Couldn't find Product","That Product doesn't exist, please ensure you entered the correct Product Code.");
            break;
        case 3:
            QMessageBox::information(this, "Not enough Stock","Sadly, there aren't as many units of that Product in stock, please try again with a lower amount.");
            break;
        case 0:
            QMessageBox::information(this, "Failed to add to Basket","Failed to add Product to Basket, please try again.");
            break;
        case 1:
            UpdateBasketTable();
            ui->CustomerShopCheckoutButton->setEnabled(true);
            break;
    }
}

void UserInterface::ResetShopWidget()
{
    ui->CustomerShopQuantitySpinBox->setEnabled(false);
    ui->CustomerShopAddButton->setEnabled(false);
    ui->CustomerShopQuantitySpinBox->setValue(1);
    ui->CustomerShopSearchLineEdit->setText("");
    ui->CustomerShopBasketTable->clearContents();
    ui->CustomerShopBasketTable->resizeColumnsToContents();
    ui->CustomerShopImageLabel->clear();
}

void UserInterface::UpdateBasketTable()
{
    ui->CustomerShopRemoveButton->setEnabled(false);
    ui->CustomerShopBasketTable->clearContents();
    ui->CustomerShopBasketTable->setRowCount(0);
    QList<OrderLine> ol = oc.GetBasket();
    if (!ol.empty())
    {
        ui->CustomerShopBasketTable->setRowCount(ol.size());
        for (int i=0; i<ol.size(); i++)
        {
            ui->CustomerShopBasketTable->setItem(i,0,new QTableWidgetItem(ol[i].getProd().getProdCode()));
            ui->CustomerShopBasketTable->setItem(i,1,new QTableWidgetItem(ol[i].getProd().getProdDesc()));
            ui->CustomerShopBasketTable->setItem(i,2,new QTableWidgetItem(QString::number(ol[i].getQuantity())));
        }
    }
    else
    {
        ui->CustomerShopCheckoutButton->setEnabled(false);
    }

}

void UserInterface::SetShopLabels(QString prodcode)
{
    Product p = pc.SelectProduct(prodcode);
    if (p.getProdCode()!="")
    {
        ui->CustomerShopProdCodeLineEdit->setText(p.getProdCode());
        ui->CustomerShopProdDescLineEdit->setText(p.getProdDesc());
        ui->CustomerShopQuantityAvailablecLineEdit->setText(QString::number(p.getStockLevel()));
        ui->CustomerShopQuantitySpinBox->setValue(1);
        ui->CustomerShopQuantitySpinBox->setEnabled(true);
        ui->CustomerShopAddButton->setEnabled(true);
        ui->CustomerShopImageLabel->setPixmap(p.getImageURL());

    }
    else
    {
        QMessageBox::information(this, "Couldn't find Product","That Product doesn't exist, please ensure you entered the correct Product Code.");
    }
}

void UserInterface::on_CustomerShopBasketTable_cellClicked(int row, int column)
{
    SetShopLabels(ui->CustomerShopBasketTable->item(row,0)->text());
    ui->CustomerShopRemoveButton->setEnabled(true);
}

void UserInterface::on_CustomerShopCheckoutButton_clicked()
{
    if (QMessageBox::question(this, "Are you sure?","Are you sure you wish to complete your order?", QMessageBox::Yes, QMessageBox::No)==QMessageBox::Yes)
    {
        int result = oc.CompleteOrder();

        switch (result)
        {
            case 2:
                QMessageBox::information(this, "Basket is empty","Couldn't complete Order as basket is empty.");
                break;
            case 0:
                QMessageBox::information(this, "Checkout failed","Failed to complete Order.");
                oc.ClearBasket();
                if (currentUser.getUserType().getTypeID()==UserType.value("Customer"))
                {
                    ui->CustomerStackedWidget->setCurrentIndex(0);
                }
                else
                {
                    ui->AdminTabWidget->setCurrentIndex(0);
                    ui->UIStackWidget->setCurrentIndex(1);
                }
                break;
            case 1:
                QMessageBox::information(this, "Order completed","Your order has been completed, have a nice day.");
                oc.ClearBasket();
                if (currentUser.getUserType().getTypeID()==UserType.value("Customer"))
                {
                    ui->CustomerStackedWidget->setCurrentIndex(0);
                }
                else
                {
                    ui->AdminTabWidget->setCurrentIndex(0);
                    ui->UIStackWidget->setCurrentIndex(1);
                }
                break;
        }


    }

}

void UserInterface::on_ShopTabStartShoppingButton_clicked()
{
    StartShopping();
}

void UserInterface::on_CustomerShopRemoveButton_clicked()
{
    oc.RemoveItemFromBasket(ui->CustomerShopBasketTable->item(ui->CustomerShopBasketTable->currentRow(),0)->text());
    UpdateBasketTable();
}
