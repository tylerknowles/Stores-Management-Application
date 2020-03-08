#ifndef STANDARDREPORTROW_H
#define STANDARDREPORTROW_H
#include <QString>
#include <product.h>

class StandardReportRow
{
protected:
    Product Prod;
    int Quantity;
public:
    void setProd(Product prod);
    Product getProd();
    void setQuantity(int quantity);
    int getQuantity();
};

#endif // STANDARDREPORTROW_H
