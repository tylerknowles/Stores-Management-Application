#include "databaseconnection.h"

DatabaseConnection::DatabaseConnection()
{
    StartUp();
}

DatabaseConnection::~DatabaseConnection()
{
    db.close();
}

void DatabaseConnection::StartUp()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbPath+dbName);
    // if the directory doesn't exist
    if (!QDir(dbPath).exists())
    {
        // make the directory
        QDir().mkdir(dbPath);
    }

    // check if the db exists
    bool exists = QFileInfo::exists(dbPath+dbName);
    if (!db.open())
    {
        qDebug() << db.lastError();
        return;
    }
    // if the db doesn't already exist, create the tables
    if (!exists)
    {
        CreateTables();
        InsertDefaultData();
    }
}

void DatabaseConnection::CreateTables()
{
    QSqlQuery q;
    bool temp = q.exec("CREATE TABLE IF NOT EXISTS Departments ("
                      "ChargeCode TEXT NOT NULL CHECK(length(ChargeCode) <= 3) PRIMARY KEY,"
                      "Department TEXT NOT NULL);");
    qDebug() <<temp; // TEMPORARY TO CHECK EXECUTED PROPERLY
    temp = q.exec("CREATE TABLE IF NOT EXISTS UserTypes ("
                      "TypeID INT NOT NULL PRIMARY KEY,"
                      "Description TEXT NOT NULL);");
    qDebug() <<temp; // TEMPORARY TO CHECK EXECUTED PROPERLY
    temp = q.exec("CREATE TABLE IF NOT EXISTS AmendTypes ("
                      "TypeID INT NOT NULL PRIMARY KEY,"
                      "TypeDescription TEXT NOT NULL);");
    qDebug() <<temp; // TEMPORARY TO CHECK EXECUTED PROPERLY
    temp = q.exec("CREATE TABLE IF NOT EXISTS Product ("
                      "ProdCode TEXT NOT NULL CHECK(length(ProdCode) <= 8) PRIMARY KEY,"
                      "ProdDesc TEXT NOT NULL,"
                      "CaseQuantity INT NOT NULL,"
                      "UnitPrice DECIMAL NOT NULL,"
                      "StockLevel INT NOT NULL,"
                      "LowStockLevel INT NOT NULL,"
                      "VATPercent INT NOT NULL,"
                      "ImageURL TEXT NOT NULL);");
    qDebug() <<temp; // TEMPORARY TO CHECK EXECUTED PROPERLY
    temp = q.exec("CREATE TABLE IF NOT EXISTS StockHistory ("
                      "AmendmentID INT NOT NULL PRIMARY KEY,"
                      "ProdCode TEXT NOT NULL,"
                      "AmendType INT NOT NULL,"
                      "Quantity INT NOT NULL,"
                      "AmendDate TEXT NOT NULL CHECK (AmendDate is strftime('%Y-%m-%d %H:%M:%S', AmendDate)),"
                      "FOREIGN KEY (ProdCode) REFERENCES Product(ProdCode),"
                      "FOREIGN KEY (AmendType) REFERENCES AmendTypes(TypeID));");
    qDebug() <<temp; // TEMPORARY TO CHECK EXECUTED PROPERLY
    temp = q.exec("CREATE TABLE IF NOT EXISTS Users ("
                      "Username TEXT NOT NULL PRIMARY KEY,"
                      "Password TEXT NOT NULL,"
                      "Forename TEXT NOT NULL,"
                      "Surname TEXT NOT NULL,"
                      "Email TEXT NOT NULL CHECK (instr(Email,'@')),"
                      "ChargeCode TEXT,"
                      "UserType INT NOT NULL,"
                      "AddVAT INT,"
                      "FOREIGN KEY (ChargeCode) REFERENCES Departments(ChargeCode),"
                      "FOREIGN KEY (UserType) REFERENCES UserTypes(TypeID));	");
    qDebug() <<temp; // TEMPORARY TO CHECK EXECUTED PROPERLY
    temp = q.exec("CREATE TABLE IF NOT EXISTS OrderHeader ("
                      "OrderID INT NOT NULL PRIMARY KEY,"
                      "Username TEXT NOT NULL,"
                      "OrderDate TEXT NOT NULL CHECK (OrderDate is strftime('%Y-%m-%d %H:%M:%S', OrderDate)),"
                      "FOREIGN KEY (Username) REFERENCES Users(Username));");
    qDebug() <<temp; // TEMPORARY TO CHECK EXECUTED PROPERLY
    temp = q.exec("CREATE TABLE IF NOT EXISTS OrderLine ("
                      "OrderID INT NOT NULL,"
                      "OrderLineNo INT NOT NULL,"
                      "ProdCode TEXT NOT NULL,"
                      "Quantity INT NOT NULL,"
                      "LinePrice DECIMAL NOT NULL,"
                      "PRIMARY KEY (OrderID, OrderLineNo),"
                      "FOREIGN KEY (OrderID) REFERENCES OrderHeader(OrderID),"
                      "FOREIGN KEY (ProdCode) REFERENCES Product(ProdCode));");
    qDebug() <<temp; // TEMPORARY TO CHECK EXECUTED PROPERLY
}

void DatabaseConnection::InsertDefaultData()
{
    QSqlQuery q;
    // USER TYPES
    q.prepare("INSERT INTO USERTYPES VALUES (?, 'Administrator');");
    q.addBindValue(UserType.value("Administrator"));
    q.exec();
    q.prepare("INSERT INTO USERTYPES VALUES (?, 'Apprentice');");
    q.addBindValue(UserType.value("Apprentice"));
    q.exec();
    q.prepare("INSERT INTO USERTYPES VALUES (?, 'Customer');");
    q.addBindValue(UserType.value("Customer"));
    q.exec();

    // AMEND TYPES
    q.prepare("INSERT INTO AMENDTYPES VALUES (?, 'Stock Addition');");
    q.addBindValue(STOCK_ADDITION);
    q.exec();
    q.prepare("INSERT INTO AMENDTYPES VALUES (?, 'Customer Order');");
    q.addBindValue(CUSTOMER_ORDER);
    q.exec();
    q.prepare("INSERT INTO AMENDTYPES VALUES (?, 'Shrinkage');");
    q.addBindValue(SHRINKAGE);
    q.exec();

    // DEPARTMENTS
    q.exec("INSERT INTO DEPARTMENTS VALUES ('NBS','Nottingham Business School');");
    q.exec("INSERT INTO DEPARTMENTS VALUES ('NLS','Nottingham Law School');");
    q.exec("INSERT INTO DEPARTMENTS VALUES ('S3','School of Social Science');");
    q.exec("INSERT INTO DEPARTMENTS VALUES ('SAT','School of Science and Technology');");
    q.exec("INSERT INTO DEPARTMENTS VALUES ('ARES','School of Animal, Rural and Environmental Sciences');");
    q.exec("INSERT INTO DEPARTMENTS VALUES ('A&D','School of Art & Design');");
    q.exec("INSERT INTO DEPARTMENTS VALUES ('ADBE','School of Architecture, Design and the Built Environment');");
    q.exec("INSERT INTO DEPARTMENTS VALUES ('A&H','School of Arts and Humanities');");
    q.exec("INSERT INTO DEPARTMENTS VALUES ('DS','Doctoral School');");

    // STARTING ADMIN USER
    q.exec("INSERT INTO USERS VALUES ('admin','St0r3sB2','The','Admin','storesmanagementb2@gmail.com','S3',1,1);");

}

