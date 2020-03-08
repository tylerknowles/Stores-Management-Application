#include "unittests.h"

UnitTests::UnitTests()
{

}

bool UnitTests::TestLogin()
{
    UserController uc;
    Users u = uc.Login("admin","St0r3sB2");
    bool result = u.getUsername()=="admin";
    if (!result)
    {
        qDebug()<<"TestLogin failed";
    }
    return result;
}

bool UnitTests::NegativeTestLogin()
{
    UserController uc;
    Users u = uc.Login("NOTAUSER","NOTAUSER");
    bool result = u.getUsername()=="";
    if (!result)
    {
        qDebug()<<"NegativeTestLogin failed";
    }
    return result;
}

bool UnitTests::TestNewUser()
{
    UserController uc;
    Departments d("SAT","School of Science & Technology");
    UserTypes ut(3,"Customer");

    Users u("testinguser","test123","Forename","Suranme","testinguser@gmail.com",d,ut,1);
    int result = uc.NewUser(u);
    if (result==2)
    {
        qDebug()<<"TestNewUser failed - User already exists";
    }
    else if (result ==0)
    {
        qDebug()<<"TestNewUser failed - Failed when inserting into db";
    }

    return result;
}

bool UnitTests::NegativeTestNewUser()
{
    UserController uc;
    Departments d("SAT","School of Science & Technology");
    UserTypes ut(3,"Customer");

    Users u("testinguser","test123","Forename","Suranme","testinguser@gmail.com",d,ut,1);
    int result = uc.NewUser(u);
    if (result!=2)
    {
        qDebug()<<"NegativeTestNewUser failed";
        return false;
    }
    return true;
}

bool UnitTests::TestAddProduct()
{
    ProductController pc;
    Product p("PROD","PRODDESC",1,0.5,10,2,0,"");
    int result = pc.AddProduct(p);

    if (result==2)
    {
        qDebug()<<"TestAddProduct failed - Product already exists";
    }
    else if (result ==0)
    {
        qDebug()<<"TestAddProduct failed - Failed when inserting into db";
    }

    return result;
}

bool UnitTests::NegativeTestAddProduct()
{
    ProductController pc;
    Product p("PROD","PRODDESC",1,0.5,10,2,0,"");
    int result = pc.AddProduct(p);

    if (result!=2)
    {
        qDebug()<<"NegativeTestAddProduct failed";
        return false;
    }
    return true;
}

bool UnitTests::TestSelectProduct()
{
    ProductController pc;
    bool result = pc.SelectProduct("PROD").getProdCode()=="PROD";
    if (!result)
    {
        qDebug()<<"TestSelectProduct failed";
    }
    return result;
}

bool UnitTests::MegativeTestSelectProduct()
{
    ProductController pc;
    bool result = pc.SelectProduct("UNKNOWNPROD").getProdCode()=="PROD";
    if (result)
    {
        qDebug()<<"MegativeTestSelectProduct failed";
        return false;
    }
    return true;
}


void UnitTests::TestLog(bool result)
{
    TotalTests++;
    if(result)
    {
        TestSuccesses++;
    }
}

void UnitTests::RunUnitTests()
{
    qDebug()<<"/////////////////////////\nStarting Unit Tests";

    TotalTests = 0;
    TestSuccesses = 0;


    TestLog(TestLogin());

    TestLog(NegativeTestLogin());

    TestLog(TestNewUser());

    TestLog(NegativeTestNewUser());

    TestLog(TestAddProduct());

    TestLog(NegativeTestAddProduct());

    TestLog(TestSelectProduct());

    TestLog(MegativeTestSelectProduct());

    // ADD ANY NEW USER TESTS HERE



    qDebug()<<"Unit Tests Complete";
    qDebug()<<"Total Tests: "+
              QString::number(TotalTests)+" Total Successes: "+
              QString::number(TestSuccesses)+" Total Failures: "+
              QString::number(TotalTests-TestSuccesses);
    qDebug()<<"/////////////////////////";


}
