#ifndef SALESROW_H
#define SALESROW_H
#include "standardreportrow.h"


class SalesRow : public StandardReportRow
{
private:
    float TotalPrice;
public:
    SalesRow();
    SalesRow(Product prod, int quantity, float totalprice);
    void setTotalPrice(float totalprice);
    float getTotalPrice();

};

#endif // SALESROW_H
