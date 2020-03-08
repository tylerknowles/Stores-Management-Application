#ifndef UNITTESTS_H
#define UNITTESTS_H
#include "productcontroller.h"
#include "usercontroller.h"
#include "databaseconnection.h"

class UnitTests
{
private:
    DatabaseConnection dc;

    bool TestLogin();
    bool NegativeTestLogin();
    bool TestNewUser();
    bool NegativeTestNewUser();
    bool TestAddProduct();
    bool NegativeTestAddProduct();
    bool TestSelectProduct();
    bool MegativeTestSelectProduct();

    int TotalTests = 0;
    int TestSuccesses = 0;
    void TestLog(bool result);
public:
    UnitTests();
    void RunUnitTests();
};

#endif // UNITTESTS_H
