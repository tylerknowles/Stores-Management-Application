#include "stockhistory.h"

StockHistory::StockHistory()
{

}

StockHistory::StockHistory(int amendmentid, Product prod, AmendTypes amendtype, int quantity, QString amenddate)
{
    this->AmendmentID = amendmentid;
    this->Prod = prod;
    this->AmendType = amendtype;
    this->Quantity = quantity;
    this->AmendDate = amenddate;
}

void StockHistory::setAmendmentID(int amendmentid)
{
    this->AmendmentID = amendmentid;
}

void StockHistory::setProd(Product prod)
{
    this->Prod = prod;
}

void StockHistory::setAmendType(AmendTypes amendtype)
{
    this->AmendType = amendtype;
}

void StockHistory::setQuantity(int quantity)
{
    this->Quantity = quantity;
}

void StockHistory::setAmendDate(QString amenddate)
{
    this->AmendDate = amenddate;
}

int StockHistory::getAmendmentID()
{
    return AmendmentID;
}

Product StockHistory::getProd()
{
    return Prod;
}

AmendTypes StockHistory::getAmendType()
{
    return AmendType;
}

int StockHistory::getQuantity()
{
    return Quantity;
}

QString StockHistory::getAmendDate()
{
    return AmendDate;
}
