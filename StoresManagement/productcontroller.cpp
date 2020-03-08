#include "productcontroller.h"

int ProductController::AddProduct(Product p)
{
    // check if the product already exists
    if(db.SelectProductRow(p.getProdCode()).getProdCode()!= "")
    {
        // product already exists
        return 2;
    }
    // inserting the product
    if(db.InsertProductRow(p))
    {
        // get the stock level of the new product
        int stockLevel = p.getStockLevel();
        // if it has stock
        if(stockLevel)
        {
            // insert a stock addition stock history
            StandardFunctions sf;
            db.InsertStockHistory(StockHistory(db.SelectNextAmendmentID(),p,AmendTypes(STOCK_ADDITION,""),stockLevel,sf.getCurrentDateTime()));
        }
        return true;
    }
    return false;
}

bool ProductController::UpdateProduct(Product p)
{
    return db.UpdateProductRow(p);
}

QList<Product> ProductController::SelectProducts()
{
    return db.SelectAllProductRows();
}

QList<Product> ProductController::SelectFilteredProducts(QString prodcode)
{
    return db.SelectFilteredProductRows(prodcode);
}

Product ProductController::SelectProduct(QString prodcode)
{
    return db.SelectProductRow(prodcode);
}

int ProductController::UpdateStockLevel(QString prodcode, int stocklevel)
{
    // get the product row
    Product p = db.SelectProductRow(prodcode);
    // if the product doesn't exist
    if (p.getProdCode()=="")
    {
        // product doesn't exist
        return 2;
    }

    // update the stock level
    if (db.UpdateStockLevel(prodcode, stocklevel))
    {

        StandardFunctions sf;
        // if stock added
        if (stocklevel>p.getStockLevel())
        {
            // insert a stock addition stock history
            return db.InsertStockHistory(StockHistory(db.SelectNextAmendmentID(),p,AmendTypes(STOCK_ADDITION,""),stocklevel-p.getStockLevel(),sf.getCurrentDateTime()));
        }
        // if stock removed
        else
        {
            // insert a shrinkage stock history
            return db.InsertStockHistory(StockHistory(db.SelectNextAmendmentID(),p,AmendTypes(SHRINKAGE,""),p.getStockLevel()-stocklevel,sf.getCurrentDateTime()));
        }

    }
    else
    {
        // failed to update stock level
        return 3;
    }

}

QList<Product> ProductController::SelectLowStockProducts()
{
    return db.SelectLowStockProductRows();
}


int ProductController::SendLowStockEmail()
{
    // get all low stock products
    QList<Product> p = SelectLowStockProducts();

    if (p.empty())
    {
        return true;
    }

    // get all admin users
    QList<Users> u = db.SelectAllAdminUsersRows();

    if (u.empty())
    {
        // no admin users
        return 2;
    }

    Email e;
    return e.SendLowStockEmail(p,u);
}

QList<AmendTypes> ProductController::SelectAmendTypes()
{
    return db.SelectAllAmendTypesRows();
}
