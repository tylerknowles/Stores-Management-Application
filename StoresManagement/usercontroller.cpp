#include "usercontroller.h"

UserController::UserController()
{

}

Users UserController::Login(QString username, QString password)
{
    // get the user row
    Users u = db.SelectUsersRow(username);

    // if the password matches
    if (u.getPassword()==password)
    {
        // return the users row for further use
        return u;
    }
    // return a blank users row when the login has failed
    return Users();
}

int UserController::NewUser(Users user)
{
    // check if users exists
    QString username = user.getUsername();
    Users u = db.SelectUsersRow(username);
    if (u.getUsername()==username)
    {
        // user exists
        return 2;
    }

    // attempt to insert the new user, if it succeeds then return true else false
    return db.InsertUsersRow(user);
}

QList<Users> UserController::SelectUsers()
{
    // return all the users selected
    return db.SelectAllUsersRows();
}

bool UserController::UpdateUser(Users u)
{
    return db.UpdateUser(u);
}

QList<Departments> UserController::SelectDepartments()
{
    return db.SelectAllDepartmentsRows();
}

Departments UserController::SelectDepartment(QString chargecode)
{
    return db.SelectDepartmentsRow(chargecode);
}

QList<UserTypes> UserController::SelectUserTypes()
{
    return db.SelectAllUserTypesRows();
}

QList<Users> UserController::SelectFilteredUsers(QString username)
{
    // return all the users selected
    return db.SelectFilteredUsersRows(username);
}
