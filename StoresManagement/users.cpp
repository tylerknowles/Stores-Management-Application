#include "users.h"

Users::Users()
{

}

Users::Users(QString username, QString password, QString forename, QString surname, QString email, Departments department, UserTypes usertype, int addvat)
{
    this->Username = username;
    this->Password = password;
    this->Forename = forename;
    this->Surname = surname;
    this->Email = email;
    this->Department = department;
    this->UserType = usertype;
    this->AddVAT = addvat;
}

void Users::setUsername(QString username)
{
    this->Username=username;
}

void Users::setPassword(QString password)
{
    this->Password = password;
}

void Users::setForename(QString forename)
{
    this->Forename = forename;
}

void Users::setSurname(QString surname)
{
    this->Surname = surname;
}

void Users::setEmail(QString email)
{
    this->Email = email;
}

void Users::setDepartment(Departments d)
{
    this->Department.setChargeCode(d.getChargeCode());
    this->Department.setDepartment(d.getDepartment());
}

void Users::setUserType(UserTypes ut)
{
    this->UserType.setTypeID(ut.getTypeID());
    this->UserType.setDescription(ut.getDescription());
}

void Users::setAddVAT(int addvat)
{
    this->AddVAT = addvat;
}

QString Users::getUsername()
{
    return Username;
}

QString Users::getPassword()
{
    return Password;
}

QString Users::getForename()
{
    return Forename;
}

QString Users::getSurname()
{
    return Surname;
}

QString Users::getEmail()
{
    return Email;
}

Departments Users::getDepartment()
{
    return Department;
}

UserTypes Users::getUserType()
{
    return UserType;
}

int Users::getAddVAT()
{
    return AddVAT;
}
