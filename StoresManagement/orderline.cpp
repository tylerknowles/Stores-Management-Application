#include "orderline.h"

OrderLine::OrderLine()
{

}

OrderLine::OrderLine(int orderid, int orderlineno, Product prod, int quantity, float lineprice)
{
    this->OrderID=orderid;
    this->OrderLineNo=orderlineno;
    this->Prod=prod;
    this->Quantity=quantity;
    this->LinePrice=lineprice;
}

void OrderLine::setOrderID(int orderid)
{
    this->OrderID=orderid;
}

void OrderLine::setOrderLineNo(int orderlineno)
{
    this->OrderLineNo=orderlineno;
}

void OrderLine::setProd(Product prod)
{
    this->Prod=prod;
}

void OrderLine::setQuantity(int quantity)
{
    this->Quantity=quantity;
}

void OrderLine::setLinePrice(float lineprice)
{
    this->LinePrice=lineprice;
}

int OrderLine::getOrderID()
{
    return OrderID;
}

int OrderLine::getOrderLineNo()
{
    return OrderLineNo;
}

Product OrderLine::getProd()
{
    return Prod;
}

int OrderLine::getQuantity()
{
    return Quantity;
}

float OrderLine::getLinePrice()
{
    return LinePrice;
}
