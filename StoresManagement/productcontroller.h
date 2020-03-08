#ifndef PRODUCTCONTROLLER_H
#define PRODUCTCONTROLLER_H
#include "product.h"
#include "database.h"
#include "stockhistory.h"
#include "standardfunctions.h"
#include "email.h"

class ProductController
{
private:
    Database db;
public:
    int AddProduct(Product p);
    bool UpdateProduct(Product p);
    int UpdateStockLevel(QString prodcode, int stocklevel);
    QList<Product> SelectProducts();
    QList<Product> SelectFilteredProducts(QString prodcode);
    Product SelectProduct(QString prodcode);
    QList<Product> SelectLowStockProducts();
    int SendLowStockEmail();
    QList<AmendTypes> SelectAmendTypes();
};

#endif // PRODUCTCONTROLLER_H
