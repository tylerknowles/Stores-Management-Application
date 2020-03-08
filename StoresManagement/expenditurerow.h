#ifndef EXPENDITUREROW_H
#define EXPENDITUREROW_H
#include "standardreportrow.h"

class ExpenditureRow : public StandardReportRow
{
private:
    float TotalPrice;
public:
    ExpenditureRow();
    ExpenditureRow(Product prod, int quantity, float totalprice);
    void setTotalPrice(float totalprice);
    float getTotalPrice();
};

#endif // EXPENDITUREROW_H
