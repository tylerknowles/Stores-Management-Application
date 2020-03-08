#ifndef STANDARDTYPES_H
#define STANDARDTYPES_H
#include <QString>

class StandardTypes
{
protected:
    int TypeID;
    QString Description;
public:
    void setTypeID(int typeID);
    void setDescription(QString description);
    int getTypeID();
    QString getDescription();
};

#endif // STANDARDTYPES_H
