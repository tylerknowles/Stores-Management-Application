#include "standardreportrow.h"

void StandardReportRow::setProd(Product prod)
{
    this->Prod = prod;
}

Product StandardReportRow::getProd()
{
    return Prod;
}

void StandardReportRow::setQuantity(int quantity)
{
    this->setQuantity(quantity);
}

int StandardReportRow::getQuantity()
{
    return Quantity;
}
