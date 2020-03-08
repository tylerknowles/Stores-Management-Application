#include "expenditurerow.h"

ExpenditureRow::ExpenditureRow(Product prod, int quantity, float totalprice)
{
    this->Prod = prod;
    this->Quantity = quantity;
    this->TotalPrice = totalprice;
}

void ExpenditureRow::setTotalPrice(float totalprice)
{
    this->TotalPrice = totalprice;
}

float ExpenditureRow::getTotalPrice()
{
    return TotalPrice;
}
