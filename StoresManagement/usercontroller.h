#ifndef USERCONTROLLER_H
#define USERCONTROLLER_H
#include "users.h"
#include "database.h"

class UserController
{
private:
    Database db;
public:
    UserController();
    Users Login(QString username, QString password);
    int NewUser(Users user);
    QList<Users> SelectUsers();
    bool UpdateUser(Users u);
    QList<Departments> SelectDepartments();
    int AddDepartments(Departments d);
    QList<UserTypes> SelectUserTypes();
    QList<Users> SelectFilteredUsers(QString username);
    Departments SelectDepartment(QString chargecode);
};

#endif // USERCONTROLLER_H
