#ifndef DEPARTMENTS_H
#define DEPARTMENTS_H
#include <QString>

class Departments
{
private:
    QString ChargeCode;
    QString Department;
public:
    Departments();
    Departments(QString chargecode, QString department);
    void setChargeCode(QString chargecode);
    void setDepartment(QString department);
    QString getChargeCode();
    QString getDepartment();
};

#endif // DEPARTMENTS_H
