#ifndef USERINTERFACE_H
#define USERINTERFACE_H
#include "productcontroller.h"
#include "reportcontroller.h"
#include "usercontroller.h"
#include "ordercontroller.h"
#include "databaseconnection.h"
#include "usertypes.h"

#include <QMessageBox>
#include <QFileDialog>

#include <QMainWindow>

namespace Ui {
class UserInterface;
}

class UserInterface : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserInterface(QWidget *parent = 0);
    ~UserInterface();

private slots:
    void on_LoginButton_clicked();

    void on_ManageStockButton_clicked();

    void on_StockTakeButton_clicked();

    void on_ReportingButton_clicked();

    void on_ManageUsersButton_clicked();

    void on_ShopButton_clicked();

    void on_LogOutButton_clicked();

    void on_AdminTabWidget_currentChanged(int index);

    void on_ManageStockTable_cellClicked(int row, int column);

    void on_ManageStockCancelButton_clicked();

    void on_ManageStockUpdateButton_clicked();

    void on_CusOrdRepCancelButton_clicked();

    void on_StockAdjRepCancelButton_clicked();

    void on_ShrinkageRepCancelButton_clicked();

    void on_ExpenditureRepCancelButton_clicked();

    void on_SalesRepCancelButton_clicked();

    void on_StockTakeRepCancelButton_clicked();

    void on_StockTakeRepButton_clicked();

    void on_ExpenditureRepButton_clicked();

    void on_SalesRepButton_clicked();

    void on_ShrinkageRepButton_clicked();

    void on_CusOrdRepButton_clicked();

    void on_StockAdjRepButton_clicked();

    void on_StockTakeRepExportButton_clicked();

    void on_ExpenditureRepRunButton_clicked();

    void on_ExpenditureRepExportButton_clicked();

    void on_SalesRepRunButton_clicked();

    void on_SalesRepExportButton_clicked();

    void on_CusOrdRepRunButton_clicked();

    void on_CusOrdRepExportButton_clicked();

    void on_ShrinkageRepRunButton_clicked();

    void on_ShrinkageRepExportButton_clicked();

    void on_StockAdjRepRunButton_clicked();

    void on_StockAdjRepExportButton_clicked();

    void on_ManageStockAddProductButton_clicked();

    void on_AddProductCancelButton_clicked();

    void on_AddProductAddButton_clicked();

    void on_AddProductProdCodeLineEdit_textChanged(const QString &arg1);

    void on_LoginUsernameLineEdit_textChanged(const QString &arg1);

    void on_ManageStockAddStockButton_clicked();

    void on_AddStockCancelButton_clicked();

    void on_AddStockCasesToAddSpinBox_valueChanged(int arg1);

    void on_AddStockConfirmButton_clicked();

    void on_ManageStockSearchButton_clicked();

    void on_ManageStockSearchLineEdit_textChanged(const QString &arg1);

    void on_StockTakeUpdateButton_clicked();

    void on_StockTakeNextButton_clicked();

    void on_StockTakeFinishButton_clicked();

    void on_RegisterUsernameLineEdit_textChanged(const QString &arg1);

    void on_RegisterCancelButton_clicked();

    void on_LoginRegisterButton_clicked();

    void on_RegisterRegisterButton_clicked();

    void on_ManageUsersSearchButton_clicked();

    void on_ManageUsersSearchLineEdit_textChanged(const QString &arg1);

    void on_ManageUsersTable_cellClicked(int row, int column);

    void on_ManageUsersCancelButton_clicked();

    void on_ManageUsersUpdateButton_clicked();

    void on_ManageUsersAddUserButton_clicked();

    void on_AddUserCancelButton_clicked();

    void on_AddUserAddButton_clicked();

    void on_AddUserUsernameLineEdit_textChanged(const QString &arg1);

    void on_AddProductImageSearchButton_clicked();

    void on_CustomerLogOutButton_clicked();

    void on_CustomerShopButton_clicked();

    void on_CustomerShopSearchLineEdit_textChanged(const QString &arg1);

    void on_CustomerShopSearchButton_clicked();

    void on_CustomerShopCancelButton_clicked();

    void on_CustomerShopAddButton_clicked();

    void on_CustomerShopBasketTable_cellClicked(int row, int column);

    void on_CustomerShopCheckoutButton_clicked();

    void on_ShopTabStartShoppingButton_clicked();

    void on_CustomerShopRemoveButton_clicked();

private:
    Ui::UserInterface *ui;

    // create a database connection
    DatabaseConnection conn;

    // create controllers
    OrderController oc;
    ProductController pc;
    ReportController rc;
    UserController uc;

    Users currentUser;

    void ManageStockTab(QString prodcode);
    void ManageUsersTab(QString username);
    void LowStockProductsNotification();
    void ResetShopWidget();
    void SetShopLabels(QString prodcode);
    void UpdateBasketTable();
    void StartShopping();

};

#endif // USERINTERFACE_H

