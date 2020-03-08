#include "orderheader.h"

OrderHeader::OrderHeader()
{

}

OrderHeader::OrderHeader(int orderid, Users user, QString orderdate, QList<OrderLine> orderlines)
{
    this->OrderID = orderid;
    this->User = user;
    this->OrderDate = orderdate;
    this->OrderLines = orderlines;
}

void OrderHeader::setOrderID(int orderid)
{
    this->OrderID = orderid;
}

void OrderHeader::setUser(Users user)
{
    this->User = user;
}

void OrderHeader::setOrderDate(QString orderdate)
{
    this->OrderDate = orderdate;
}

void OrderHeader::setOrderLines(QList<OrderLine> orderlines)
{
    this->OrderLines = orderlines;
}

int OrderHeader::getOrderID()
{
    return OrderID;
}

Users OrderHeader::getUser()
{
    return User;
}

QString OrderHeader::getOrderDate()
{
    return OrderDate;
}

QList<OrderLine> OrderHeader::getOrderLines()
{
    return OrderLines;
}
