#include "departments.h"
Departments::Departments()
{

}

Departments::Departments(QString chargecode, QString department)
{
    this->ChargeCode=chargecode;
    this->Department=department;
}

void Departments::setChargeCode(QString chargecode)
{
    this->ChargeCode=chargecode;
}

void Departments::setDepartment(QString department)
{
    this->Department=department;
}

QString Departments::getChargeCode()
{
    return ChargeCode;
}

QString Departments::getDepartment()
{
    return Department;
}
