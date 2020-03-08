#include "standardtypes.h"

void StandardTypes::setTypeID(int typeID)
{
    this->TypeID = typeID;
}

void StandardTypes::setDescription(QString description)
{
    this->Description = description;
}

int StandardTypes::getTypeID()
{
    return TypeID;
}

QString StandardTypes::getDescription()
{
    return Description;
}
