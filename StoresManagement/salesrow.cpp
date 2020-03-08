#include "salesrow.h"

SalesRow::SalesRow(Product prod, int quantity, float totalprice)
{
    this->Prod = prod;
    this->Quantity = quantity;
    this->TotalPrice = totalprice;
}

void SalesRow::setTotalPrice(float totalprice)
{
    this->TotalPrice = totalprice;
}

float SalesRow::getTotalPrice()
{
    return TotalPrice;
}
