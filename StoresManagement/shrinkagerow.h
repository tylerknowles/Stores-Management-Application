#ifndef SHRINKAGEROW_H
#define SHRINKAGEROW_H
#include "standardreportrow.h"

class ShrinkageRow : public StandardReportRow
{
public:
    ShrinkageRow();
    ShrinkageRow(Product prod, int quantity);
};
#endif // SHRINKAGEROW_H
