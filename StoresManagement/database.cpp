#include "database.h"

Database::Database()
{

}

QList<ShrinkageRow> Database::SelectShrinkageRows(QString startDate, QString endDate)
{

    q.prepare("SELECT H.PRODCODE, P.PRODDESC, SUM(QUANTITY) "
                       "FROM STOCKHISTORY H JOIN PRODUCT P ON H.PRODCODE = P.PRODCODE "
                       "WHERE AMENDTYPE = ? AND AMENDDATE BETWEEN ? AND ? GROUP BY H.PRODCODE ORDER BY H.PRODCODE;");
    q.addBindValue(SHRINKAGE);
    q.addBindValue(startDate);
    q.addBindValue(endDate);
    q.exec();
    QList<ShrinkageRow> rows;
    while(true)
    {
        if(q.next())
        {
            rows.append(ShrinkageRow (Product(q.value(0).toString(),q.value(1).toString(),0,0,0,0,0,""),q.value(2).toInt()));
        }
        else
        {
            return rows;
        }
    }
}

QList<SalesRow> Database::SelectSalesRows(QString username, QString department, QString startDate, QString endDate)
{
    q.prepare("SELECT P.PRODCODE, P.PRODDESC, SUM(OL.QUANTITY), SUM(OL.LINEPRICE) "
              "FROM PRODUCT P LEFT JOIN ORDERLINE OL ON P.PRODCODE = OL.PRODCODE "
              "LEFT JOIN ORDERHEADER OH ON OL.ORDERID = OH.ORDERID JOIN USERS U ON OH.USERNAME = U.USERNAME "
              "JOIN DEPARTMENTS D ON U.CHARGECODE = D.CHARGECODE WHERE (? = '' OR OH.USERNAME = ?) "
              "AND (? = '' OR D.DEPARTMENT = ?) AND ORDERDATE BETWEEN ? AND ? GROUP BY P.PRODCODE ORDER BY P.PRODCODE;");

    q.addBindValue(username);
    q.addBindValue(username);
    q.addBindValue(department);
    q.addBindValue(department);
    q.addBindValue(startDate);
    q.addBindValue(endDate);
    q.exec();
    QList<SalesRow> rows;
    while(true)
    {
        if(q.next())
        {
            rows.append(SalesRow (Product(q.value(0).toString(),q.value(1).toString(),0,0,0,0,0,""),q.value(2).toInt(),q.value(3).toFloat()));
        }
        else
        {
            return rows;
        }
    }
}

QList<StockHistory> Database::SelectAdjustmentRows(QString startDate, QString endDate, QString amendtype, QString prodcode)
{
    q.prepare("SELECT H.PRODCODE,P.PRODDESC, A.TYPEDESCRIPTION, QUANTITY, AMENDDATE "
                       "FROM STOCKHISTORY H JOIN PRODUCT P ON H.PRODCODE = P.PRODCODE JOIN AMENDTYPES A ON H.AMENDTYPE = A.TYPEID "
                       "WHERE (? = '' OR A.TYPEDESCRIPTION = ?) AND (? = '' OR H.PRODCODE = ?) AND AMENDDATE BETWEEN ? AND ? ORDER BY AMENDDATE DESC;");
    q.addBindValue(amendtype);
    q.addBindValue(amendtype);
    q.addBindValue(prodcode);
    q.addBindValue(prodcode);
    q.addBindValue(startDate);
    q.addBindValue(endDate);
    q.exec();
    QList<StockHistory> rows;
    while(true)
    {
        if(q.next())
        {
            rows.append(StockHistory (0,Product(q.value(0).toString(),q.value(1).toString(),0,0,0,0,0,""),AmendTypes(0,q.value(2).toString()),q.value(3).toInt(),q.value(4).toString()));
        }
        else
        {
            return rows;
        }
    }
}

bool Database::InsertProductRow(Product p)
{

    q.prepare("INSERT INTO PRODUCT VALUES (?,?,?,?,?,?,?,?);");
    q.addBindValue(p.getProdCode());
    q.addBindValue(p.getProdDesc());
    q.addBindValue(p.getCaseQuantity());
    q.addBindValue(p.getUnitPrice());
    q.addBindValue(p.getStockLevel());
    q.addBindValue(p.getLowStockLevel());
    q.addBindValue(p.getVATPercent());
    q.addBindValue(p.getImageURL());

    return q.exec();
}

bool Database::UpdateProductRow(Product p)
{

    q.prepare("UPDATE PRODUCT SET PRODDESC = ?, CASEQUANTITY = ?, "
              "UNITPRICE = ?, STOCKLEVEL = ?, LOWSTOCKLEVEL = ?, VATPERCENT = ? WHERE PRODCODE = ?");
    q.addBindValue(p.getProdDesc());
    q.addBindValue(p.getCaseQuantity());
    q.addBindValue(p.getUnitPrice());
    q.addBindValue(p.getStockLevel());
    q.addBindValue(p.getLowStockLevel());
    q.addBindValue(p.getVATPercent());
    q.addBindValue(p.getProdCode());

    return q.exec();
}

Product Database::SelectProductRow(QString prodcode)
{

    q.prepare("SELECT * FROM PRODUCT WHERE PRODCODE = ?;");
    q.addBindValue(prodcode);
    q.exec();
    if(q.next())
    {
        return Product(q.value(0).toString(),q.value(1).toString(),q.value(2).toInt(),
                       q.value(3).toFloat(),q.value(4).toInt(),q.value(5).toInt(),q.value(6).toInt(),q.value(7).toString());
    }
    return Product();
}

bool Database::UpdateStockLevel(QString prodcode, int stocklevel)
{

    q.prepare("UPDATE PRODUCT SET STOCKLEVEL = ? WHERE PRODCODE = ?;");
    q.addBindValue(stocklevel);
    q.addBindValue(prodcode);
    return q.exec();
}

Users Database::SelectUsersRow(QString username)
{

    q.prepare("SELECT * FROM USERS WHERE USERNAME = ?;");
    q.addBindValue(username);
    q.exec();
    if(q.next())
    {
        return Users(q.value(0).toString(),q.value(1).toString(),q.value(2).toString(),
                       q.value(3).toString(),q.value(4).toString(),Departments(q.value(5).toString(),""),
                       UserTypes(q.value(6).toInt(),UserType.key(q.value(6).toInt())),q.value(7).toInt());


    }
    return Users();
}

bool Database::InsertUsersRow(Users u)
{

    q.prepare("INSERT INTO USERS VALUES (?,?,?,?,?,?,?,?);");
    q.addBindValue(u.getUsername());
    q.addBindValue(u.getPassword());
    q.addBindValue(u.getForename());
    q.addBindValue(u.getSurname());
    q.addBindValue(u.getEmail());
    q.addBindValue(u.getDepartment().getChargeCode());
    q.addBindValue(u.getUserType().getTypeID());
    q.addBindValue(u.getAddVAT());
    return q.exec();
}

QList<Product> Database::SelectAllProductRows()
{

    q.exec("SELECT * FROM PRODUCT;");

    QList<Product> rows;
    while(true)
    {
        if(q.next())
        {
            rows.append(Product (q.value(0).toString(),q.value(1).toString(),q.value(2).toInt(),
                                 q.value(3).toFloat(),q.value(4).toInt(),q.value(5).toInt(),q.value(6).toInt(),q.value(7).toString()));
        }
        else
        {
            return rows;
        }
    }
}

QList<Product> Database::SelectFilteredProductRows(QString prodcode)
{

    q.prepare("SELECT * FROM PRODUCT WHERE PRODCODE LIKE ?;");
    q.addBindValue("%"+prodcode+"%");
    q.exec();

    QList<Product> rows;
    while(true)
    {
        if(q.next())
        {
            rows.append(Product (q.value(0).toString(),q.value(1).toString(),q.value(2).toInt(),
                                 q.value(3).toFloat(),q.value(4).toInt(),q.value(5).toInt(),q.value(6).toInt(),q.value(7).toString()));
        }
        else
        {
            return rows;
        }
    }
}

QList<Users> Database::SelectAllUsersRows()
{

    q.exec("SELECT * FROM USERS;");

    QList<Users> rows;
    while(true)
    {
        if(q.next())
        {
            rows.append(Users(q.value(0).toString(),q.value(1).toString(),q.value(2).toString(),
                               q.value(3).toString(),q.value(4).toString(),Departments(q.value(5).toString(),""),
                               UserTypes(q.value(6).toInt(),UserType.key(q.value(6).toInt())),q.value(7).toInt()));
        }
        else
        {
            return rows;
        }
    }
}

QList<Users> Database::SelectFilteredUsersRows(QString username)
{

    q.prepare("SELECT * FROM USERS WHERE USERNAME LIKE ?;");
    q.addBindValue("%"+username+"%");
    q.exec();

    QList<Users> rows;
    while(true)
    {
        if(q.next())
        {
            rows.append(Users(q.value(0).toString(),q.value(1).toString(),q.value(2).toString(),
                              q.value(3).toString(),q.value(4).toString(),Departments(q.value(5).toString(),""),
                              UserTypes(q.value(6).toInt(),UserType.key(q.value(6).toInt())),q.value(7).toInt()));
        }
        else
        {
            return rows;
        }
    }
}

QList<Product> Database::SelectLowStockProductRows()
{

    q.exec("SELECT * FROM PRODUCT WHERE STOCKLEVEL <= LOWSTOCKLEVEL;");

    QList<Product> rows;
    while(true)
    {
        if(q.next())
        {
            rows.append(Product (q.value(0).toString(),q.value(1).toString(),q.value(2).toInt(),q.value(3).toFloat(),
                    q.value(4).toInt(),q.value(5).toInt(),q.value(6).toInt(),q.value(7).toString()));
        }
        else
        {
            return rows;
        }
    }
}


QList<ExpenditureRow> Database::SelectExpenditureRows(QString startDate, QString endDate)
{

    q.prepare("SELECT H.PRODCODE,P.PRODDESC, SUM(QUANTITY), SUM(QUANTITY)*UNITPRICE "
                       "FROM STOCKHISTORY H JOIN PRODUCT P ON H.PRODCODE = P.PRODCODE "
                       "WHERE AMENDTYPE = ? AND AMENDDATE BETWEEN ? AND ? "
                       "GROUP BY H.PRODCODE ORDER BY H.PRODCODE;");
    q.addBindValue(STOCK_ADDITION);
    q.addBindValue(startDate);
    q.addBindValue(endDate);
    q.exec();
    QList<ExpenditureRow> rows;
    while(true)
    {
        if(q.next())
        {
            rows.append(ExpenditureRow (Product(q.value(0).toString(),q.value(1).toString(),0,0,0,0,0,""),q.value(2).toInt(),q.value(3).toFloat()));
        }
        else
        {
            return rows;
        }
    }
}

int Database::SelectNextAmendmentID()
{

    q.exec("SELECT MAX(AMENDMENTID)+1 FROM STOCKHISTORY;");
    q.first();
    return  q.value(0).toInt();

}

int Database::SelectNextOrderID()
{

    q.exec("SELECT MAX(ORDERID)+1 FROM ORDERHEADER;");
    q.first();
    return  q.value(0).toInt();
}

bool Database::InsertStockHistory(StockHistory s)
{

    q.prepare("INSERT INTO STOCKHISTORY VALUES (?,?,?,?,?);");
    q.addBindValue(s.getAmendmentID());
    q.addBindValue(s.getProd().getProdCode());
    q.addBindValue(s.getAmendType().getTypeID());
    q.addBindValue(s.getQuantity());
    q.addBindValue(s.getAmendDate());
    return q.exec();
}

float Database::SelectProductPrice(QString prodcode)
{

    q.prepare("SELECT UNITPRICE FROM PRODUCT WHERE PRODCODE = ?;");
    q.addBindValue(prodcode);
    q.exec();
    q.first();

    return q.value(0).toFloat();
}

bool Database::InsertIntoOrderLine(QList<OrderLine> lines)
{

    q.prepare("INSERT INTO ORDERLINE VALUES (?,?,?,?,?);");

    for (int i = 0; i<lines.size(); i++)
    {
        q.addBindValue(lines[i].getOrderID());
        q.addBindValue(lines[i].getOrderLineNo());
        q.addBindValue(lines[i].getProd().getProdCode());
        q.addBindValue(lines[i].getQuantity());
        q.addBindValue(lines[i].getLinePrice());
        if (!q.exec())
        {
            return false;
        }
    }
    return true;
}

bool Database::InsertIntoOrderHeader(OrderHeader h)
{

    q.prepare("INSERT INTO ORDERHEADER VALUES (?,?,?);");

    q.addBindValue(h.getOrderID());
    q.addBindValue(h.getUser().getUsername());
    q.addBindValue(h.getOrderDate());
    return q.exec();
}

bool Database::RemoveStockByQty(QString prodcode, int qty)
{

    q.prepare("UPDATE PRODUCT SET STOCKLEVEL = STOCKLEVEL - ? WHERE PRODCODE = ?;");
    q.addBindValue(qty);
    q.addBindValue(prodcode);
    return q.exec();
}

int Database::SelectUserAddVAT(QString username)
{
    q.prepare("SELECT ADDVAT FROM USERS WHERE USERNAME = ?;");
    q.addBindValue(username);
    q.exec();
    q.first();

    return q.value(0).toInt();
}

int Database::SelectProductVATPercent(QString prodcode)
{
    q.prepare("SELECT VATPERCENT FROM PRODUCT WHERE PRODCODE = ?;");
    q.addBindValue(prodcode);
    q.exec();
    q.first();

    return q.value(0).toInt();
}

bool Database::UpdateUser(Users u)
{
    q.prepare("UPDATE USERS SET FORENAME = ?, SURNAME = ?, EMAIL = ?, CHARGECODE = ?, USERTYPE = ?, ADDVAT = ? WHERE USERNAME = ?;");
    q.addBindValue(u.getForename());
    q.addBindValue(u.getSurname());
    q.addBindValue(u.getEmail());
    q.addBindValue(u.getDepartment().getChargeCode());
    q.addBindValue(u.getUserType().getTypeID());
    q.addBindValue(u.getAddVAT());
    q.addBindValue(u.getUsername());
    return q.exec();
}

QList<Departments> Database::SelectAllDepartmentsRows()
{
    q.exec("SELECT * FROM DEPARTMENTS;");

    QList<Departments> rows;
    while(true)
    {
        if(q.next())
        {
            rows.append(Departments (q.value(0).toString(),q.value(1).toString()));
        }
        else
        {
            return rows;
        }
    }

}

Departments Database::SelectDepartmentsRow(QString chargecode)
{
    q.prepare("SELECT * FROM DEPARTMENTS WHERE CHARGECODE = ?;");
    q.addBindValue(chargecode);
    q.exec();
    if(q.next())
    {
        return Departments(q.value(0).toString(),q.value(1).toString());
    }
    return Departments();
}

QList<Users> Database::SelectAllAdminUsersRows()
{
    q.prepare("SELECT * FROM USERS WHERE USERTYPE = ?;");
    q.addBindValue(UserType.value("Administrator"));
    q.exec();

    QList<Users> rows;
    while(true)
    {
        if(q.next())
        {
            rows.append(Users(q.value(0).toString(),q.value(1).toString(),q.value(2).toString(),
                              q.value(3).toString(),q.value(4).toString(),Departments(q.value(5).toString(),""),
                              UserTypes(q.value(6).toInt(),UserType.key(q.value(6).toInt())),q.value(7).toInt()));
        }
        else
        {
            return rows;
        }
    }

}

QList<AmendTypes> Database::SelectAllAmendTypesRows()
{

    q.exec("SELECT * FROM AMENDTYPES;");

    QList<AmendTypes> rows;
    while(true)
    {
        if(q.next())
        {
            rows.append(AmendTypes (q.value(0).toInt(),q.value(1).toString()));
        }
        else
        {
            return rows;
        }
    }
}

QList<UserTypes> Database::SelectAllUserTypesRows()
{

    q.exec("SELECT * FROM USERTYPES;");

    QList<UserTypes> rows;
    while(true)
    {
        if(q.next())
        {
            rows.append(UserTypes (q.value(0).toInt(),q.value(1).toString()));
        }
        else
        {
            return rows;
        }
    }
}
