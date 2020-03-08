#ifndef STOCKHISTORY_H
#define STOCKHISTORY_H
#include <QString>
#include "product.h"
#include "amendtypes.h"
class StockHistory
{
private:
    int AmendmentID;
    Product Prod;
    AmendTypes AmendType;
    int Quantity;
    QString AmendDate;
public:
    StockHistory();
    StockHistory(int amendmentid, Product prod, AmendTypes amendtype, int quantity, QString amenddate);
    void setAmendmentID(int amendmentid);
    void setProd(Product prod);
    void setAmendType(AmendTypes amendtype);
    void setQuantity(int quantity);
    void setAmendDate(QString amenddate);
    int getAmendmentID();
    Product getProd();
    AmendTypes getAmendType();
    int getQuantity();
    QString getAmendDate();
};

#endif // STOCKHISTORY_H
