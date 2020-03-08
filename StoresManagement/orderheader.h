#ifndef ORDERHEADER_H
#define ORDERHEADER_H
#include <QString>
#include "orderline.h"
#include "users.h"

class OrderHeader
{
private:
    int OrderID;
    Users User;
    QString OrderDate;
    QList<OrderLine> OrderLines;
public:
    OrderHeader();
    OrderHeader(int orderid, Users user, QString orderdate, QList<OrderLine> orderlines);
    void setOrderID(int orderid);
    void setUser(Users user);
    void setOrderDate(QString orderdate);
    void setOrderLines(QList<OrderLine> orderlines);
    int getOrderID();
    Users getUser();
    QString getOrderDate();
    QList<OrderLine> getOrderLines();
};

#endif // ORDERHEADER_H
