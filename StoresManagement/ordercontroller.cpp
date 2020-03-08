#include "ordercontroller.h"

void OrderController::BeginOrder(Users user)
{
    // clear the basket incase any items have been left in it
    ClearBasket();
    oh.setOrderID(db.SelectNextOrderID());
    oh.setUser(user);
}

int OrderController::ScanItem(QString prodcode, int quantity)
{
    // check the product exists and get its row
    Product p = db.SelectProductRow(prodcode);
    // if the product doesn't exist
    if (p.getProdCode()=="")
    {
        // product doesn't exist
        return 2;
    }
    QList<OrderLine> ol = oh.getOrderLines();
    int inBasket = 0;
    int index = 0;
    for (int i = 0; i<ol.size(); i++)
    {
        if (ol[i].getProd().getProdCode()==prodcode)
        {
            inBasket = ol[i].getQuantity();
            index = i;

            break;
        }
    }

    if(p.getStockLevel()-inBasket-quantity<0)
    {
        // out of stock
        return 3;
    }

    float vatMultiplier = 1;

    if(oh.getUser().getAddVAT()==1)
    {
        vatMultiplier = (float(p.getVATPercent())/100)+1;
    }


    if (inBasket)
    {
        ol[index].setQuantity(inBasket+quantity);
        ol[index].setLinePrice((inBasket+quantity)*p.getUnitPrice()*vatMultiplier);
    }

    else
    {
        ol.append(OrderLine(oh.getOrderID(),ol.size()+1,p,quantity,quantity*p.getUnitPrice()*vatMultiplier));
    }

    oh.setOrderLines(ol);

    return true;

}
bool OrderController::RemoveItemFromBasket(QString prodcode)
{
    QList<OrderLine> ol = oh.getOrderLines();
    for (int i = 0; i<ol.size(); i++)
    {
        if (ol[i].getProd().getProdCode()==prodcode)
        {
            ol.removeAt(i);
            oh.setOrderLines(ol);
            return true;
        }
    }
    return false;
}


QList<OrderLine> OrderController::GetBasket()
{
    // get the contents of the basket
    return oh.getOrderLines();
}


int OrderController::CompleteOrder()
{
    QList<OrderLine> ol = oh.getOrderLines();
    if (ol.empty())
    {
        // empty basket
        return 2;
    }

    // get the current date/time
    StandardFunctions sf;
    QString date = sf.getCurrentDateTime();

    oh.setOrderDate(date);

    for (int i=0; i<ol.size(); i++)
    {
        // insert a customer order stock history row
        db.InsertStockHistory(StockHistory(db.SelectNextAmendmentID(),ol[i].getProd(),AmendTypes(CUSTOMER_ORDER,""),ol[i].getQuantity(),date));
        // update the stock level of that product
        db.RemoveStockByQty(ol[i].getProd().getProdCode(),ol[i].getQuantity());
    }

    // insert hte order header
    if (!db.InsertIntoOrderHeader(oh))
    {
        return false;
    }

    // insert the order lines
    if (!db.InsertIntoOrderLine(ol))
    {
        return false;
    }


    // clear the order
    ClearBasket();

    return true;
}



void OrderController::ClearBasket()
{
    // empty the basket
    oh = OrderHeader();
}
