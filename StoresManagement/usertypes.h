#ifndef USERTYPES_H
#define USERTYPES_H
#include "standardtypes.h"
#include <QMap>

const QMap <QString, int> UserType = {{"Administrator",1},{"Apprentice",2},{"Customer",3}};

class UserTypes : public StandardTypes
{
public:
    UserTypes();
    UserTypes(int typeID, QString description);
};

#endif // USERTYPES_H
