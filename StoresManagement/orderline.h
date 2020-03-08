#ifndef ORDERLINE_H
#define ORDERLINE_H
#include <QString>
#include "product.h"

class OrderLine
{
private:
    int OrderID;
    int OrderLineNo;
    Product Prod;
    int Quantity;
    float LinePrice;
public:
    OrderLine();
    OrderLine(int orderid, int orderlineno, Product prod, int quantity, float lineprice);
    void setOrderID(int orderid);
    void setOrderLineNo(int orderlineno);
    void setProd(Product prod);
    void setQuantity(int quantity);
    void setLinePrice(float lineprice);
    int getOrderID();
    int getOrderLineNo();
    Product getProd();
    int getQuantity();
    float getLinePrice();

};

#endif // ORDERLINE_H
