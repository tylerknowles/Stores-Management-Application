#ifndef USERS_H
#define USERS_H
#include <QString>
#include "usertypes.h"
#include "departments.h"

class Users
{
private:
    QString Username;
    QString Password;
    QString Forename;
    QString Surname;
    QString Email;
    Departments Department;
    UserTypes UserType;
    int AddVAT;
public:
    Users();
    Users(QString username, QString password, QString forename, QString surname, QString email, Departments department, UserTypes usertype, int addvat);
    void setUsername(QString username);
    void setPassword(QString password);
    void setForename(QString forename);
    void setSurname(QString surname);
    void setEmail(QString email);
    void setDepartment(Departments department);
    void setUserType(UserTypes usertype);
    void setAddVAT(int addvat);
    QString getUsername();
    QString getPassword();
    QString getForename();
    QString getSurname();
    QString getEmail();
    Departments getDepartment();
    UserTypes getUserType();
    int getAddVAT();
};

#endif // USERS_H

