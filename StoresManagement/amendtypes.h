#ifndef AMENDTYPES_H
#define AMENDTYPES_H
#include "standardtypes.h"

#define STOCK_ADDITION 1
#define CUSTOMER_ORDER 2
#define SHRINKAGE 3


class AmendTypes : public StandardTypes
{
public:
    AmendTypes();
    AmendTypes(int typeID, QString description);
};

#endif // USERTYPES_H
