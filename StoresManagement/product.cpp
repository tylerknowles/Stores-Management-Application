#include "product.h"

Product::Product()
{

}

Product::Product(QString prodcode, QString proddesc, int casequantity, float unitprice, int stocklevel, int lowstocklevel, int vatpercent, QString imageurl)
{
    this->ProdCode = prodcode;
    this->ProdDesc = proddesc;
    this->CaseQuantity = casequantity;
    this->UnitPrice = unitprice;
    this->StockLevel = stocklevel;
    this->LowStockLevel = lowstocklevel;
    this->VATPercent = vatpercent;
    this->ImageURL = imageurl;
}

QString Product::getProdCode()
{
    return ProdCode;
}

QString Product::getProdDesc()
{
    return ProdDesc;
}

int Product::getCaseQuantity()
{
    return CaseQuantity;
}

float Product::getUnitPrice()
{
    return UnitPrice;
}

int Product::getStockLevel()
{
    return StockLevel;
}

int Product::getLowStockLevel()
{
    return LowStockLevel;
}

int Product::getVATPercent()
{
    return VATPercent;
}

QString Product::getImageURL()
{
    return ImageURL;
}

void Product::setProdCode(QString prodcode)
{
    this->ProdCode = prodcode;
}

void Product::setProdDesc(QString proddesc)
{
    this->ProdDesc = proddesc;
}

void Product::setCaseQuantity(int casequantity)
{
    this->CaseQuantity = casequantity;
}

void Product::setUnitPrice(float unitprice)
{
    this->UnitPrice = unitprice;
}

void Product::setStockLevel(int stocklevel)
{
    this->StockLevel = stocklevel;
}

void Product::setLowStockLevel(int lowstocklevel)
{
    this->LowStockLevel = lowstocklevel;
}

void Product::setVATPercent(int vatpercent)
{
    this->VATPercent = vatpercent;
}

void Product::setImageURL(QString imageurl)
{
    this->ImageURL = imageurl;
}
