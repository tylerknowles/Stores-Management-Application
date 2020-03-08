#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H
#include "usertypes.h"
#include "amendtypes.h"

#include <QtSql>

class DatabaseConnection
{
private:
    QSqlDatabase db;
    QString dbPath = "C:\\StoresManagement\\";
    QString dbName = "storesmanagement.db";
    void StartUp();
    void CreateTables();
    void InsertDefaultData();
public:
    DatabaseConnection();
    ~DatabaseConnection();
};

#endif // DATABASECONNECTION_H
