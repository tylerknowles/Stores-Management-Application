#ifndef PRODUCT_H
#define PRODUCT_H
#include <QString>

class Product
{
private:
    QString ProdCode;
    QString ProdDesc;
    int CaseQuantity;
    float UnitPrice;
    int StockLevel;
    int LowStockLevel;
    int VATPercent;
    QString ImageURL;

public:
    Product();
    Product(QString prodcode, QString proddesc, int casequantity, float unitprice, int stocklevel, int lowstocklevel, int vatpercent, QString imageurl);
    QString getProdCode();
    QString getProdDesc();
    int getCaseQuantity();
    float getUnitPrice();
    int getStockLevel();
    int getLowStockLevel();
    int getVATPercent();
    QString getImageURL();
    void setProdCode(QString);
    void setProdDesc(QString);
    void setCaseQuantity(int);
    void setUnitPrice(float);
    void setStockLevel(int);
    void setLowStockLevel(int);
    void setVATPercent(int);
    void setImageURL(QString);
};

#endif // PRODUCT_H
