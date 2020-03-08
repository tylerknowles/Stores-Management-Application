#include "usertypes.h"

UserTypes::UserTypes()
{

}

UserTypes::UserTypes(int typeID, QString description)
{
    this->TypeID = typeID;
    this->Description = description;
}
