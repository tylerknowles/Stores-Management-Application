#ifndef ORDERCONTROLLER_H
#define ORDERCONTROLLER_H
#include "database.h"
#include "product.h"
#include "orderline.h"
#include "orderheader.h"
#include "standardfunctions.h"
#include "stockhistory.h"
#include "amendtypes.h"

class OrderController
{
private:
    Database db;
    OrderHeader oh;
public:
    void BeginOrder(Users user);
    int ScanItem(QString prodcode, int quantity);
    QList<OrderLine> GetBasket();
    bool RemoveItemFromBasket(QString prodcode);
    int CompleteOrder();
    void ClearBasket();

};

#endif // ORDERCONTROLLER_H
