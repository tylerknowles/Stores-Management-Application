#ifndef DATABASE_H
#define DATABASE_H
#include "usertypes.h"
#include "amendtypes.h"
#include "expenditurerow.h"
#include "shrinkagerow.h"
#include "salesrow.h"
#include "product.h"
#include "stockhistory.h"
#include "users.h"
#include "orderline.h"
#include "orderheader.h"

#include <QtSql>

class Database
{
private:
    QSqlQuery q;
    void CreateTables();
    void InsertDefaultData();
    void InsertDummyData();
public:
    Database();
    QList<ShrinkageRow> SelectShrinkageRows(QString startDate, QString endDate);
    QList<SalesRow> SelectSalesRows(QString username, QString department, QString startDate, QString endDate);
    QList<StockHistory> SelectAdjustmentRows(QString startDate, QString endDate, QString amendtype, QString prodcode);
    bool InsertProductRow(Product p);
    bool UpdateProductRow(Product p);
    Product SelectProductRow(QString prodcode);
    bool UpdateStockLevel(QString prodcode, int stocklevel);
    Users SelectUsersRow(QString username);
    bool InsertUsersRow(Users u);
    QList<Product> SelectAllProductRows();
    QList<Product> SelectFilteredProductRows(QString prodcode);
    QList<Users> SelectAllUsersRows();
    QList<Product> SelectLowStockProductRows();
    QList<ExpenditureRow> SelectExpenditureRows(QString startDate, QString endDate);
    int SelectNextAmendmentID();
    int SelectNextOrderID();
    bool InsertStockHistory(StockHistory s);
    float SelectProductPrice(QString prodcode);
    bool InsertIntoOrderLine(QList<OrderLine> lines);
    bool InsertIntoOrderHeader(OrderHeader h);
    bool RemoveStockByQty(QString prodcode, int qty);
    int SelectUserAddVAT(QString username);
    int SelectProductVATPercent(QString prodcode);
    bool UpdateUser(Users u);
    QList<Departments> SelectAllDepartmentsRows();
    Departments SelectDepartmentsRow(QString chargecode);
    bool InsertDepartmentsRow(Departments d);
    QList<Users> SelectAllAdminUsersRows();
    QList<AmendTypes> SelectAllAmendTypesRows();
    QList<Users> SelectFilteredUsersRows(QString username);
    QList<UserTypes> SelectAllUserTypesRows();
};

#endif // DATABASE_H
