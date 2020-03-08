/********************************************************************************
** Form generated from reading UI file 'userinterface.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINTERFACE_H
#define UI_USERINTERFACE_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserInterface
{
public:
    QWidget *Interface;
    QStackedWidget *UIStackWidget;
    QWidget *LogInUI;
    QStackedWidget *LoginStackedWidget;
    QWidget *LoginTab;
    QLabel *label_2;
    QLineEdit *LoginUsernameLineEdit;
    QLineEdit *LoginPasswordLineEdit;
    QPushButton *LoginRegisterButton;
    QLabel *header_lbl_3;
    QPushButton *LoginButton;
    QLabel *pass_lbl_3;
    QLabel *usr_lbl_3;
    QWidget *RegisterTab;
    QLabel *label_41;
    QLineEdit *RegisterUsernameLineEdit;
    QLineEdit *RegisterPasswordLineEdit;
    QLabel *label_42;
    QLabel *label_43;
    QLineEdit *RegisterSurnameLineEdit;
    QLabel *label_44;
    QLabel *label_45;
    QLineEdit *RegisterForenameLineEdit;
    QLineEdit *RegisterEmailLineEdit;
    QLabel *label_46;
    QLabel *label_47;
    QComboBox *RegisterNonVATComboBox;
    QLabel *label_48;
    QComboBox *RegisterChargeCodeComboBox;
    QPushButton *RegisterRegisterButton;
    QPushButton *RegisterCancelButton;
    QWidget *AdminUI;
    QTabWidget *AdminTabWidget;
    QWidget *HomeTab;
    QPushButton *StockTakeButton;
    QPushButton *LogOutButton;
    QPushButton *ReportingButton;
    QPushButton *ManageUsersButton;
    QPushButton *ShopButton;
    QPushButton *ManageStockButton;
    QWidget *ManageStockTab;
    QStackedWidget *ManageStockStackedWidget;
    QWidget *ManageStockWidget;
    QFrame *frame_2;
    QLabel *lbldec;
    QLineEdit *ManageStockProdDescLineEdit;
    QLabel *lblStock;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *ManageStockUpdateButton;
    QPushButton *ManageStockCancelButton;
    QTableWidget *ManageStockTable;
    QLabel *label_7;
    QSpinBox *ManageStockVATPercentSpinBox;
    QDoubleSpinBox *ManageStockUnitPriceSpinBox;
    QSpinBox *ManageStockCaseQuantitySpinBox;
    QSpinBox *ManageStockLowStockSpinBox;
    QLineEdit *ManageStockProdCodeLineEdit;
    QLabel *lblStock_2;
    QPushButton *ManageStockAddProductButton;
    QPushButton *ManageStockAddStockButton;
    QLineEdit *ManageStockStockLevelLineEdit;
    QLineEdit *ManageStockSearchLineEdit;
    QPushButton *ManageStockSearchButton;
    QWidget *AddProductWidget;
    QLabel *label_30;
    QLineEdit *AddProductProdCodeLineEdit;
    QLabel *label_27;
    QLabel *label_21;
    QLabel *label_23;
    QLabel *label_29;
    QPushButton *AddProductAddButton;
    QLineEdit *AddProductProdDescLineEdit;
    QLabel *label_26;
    QLabel *label_28;
    QLabel *label_22;
    QPushButton *AddProductCancelButton;
    QSpinBox *AddProductVATPercentSpinBox;
    QSpinBox *AddProductCaseQuantitySpinBox;
    QSpinBox *AddProductStockLevelSpinBox;
    QSpinBox *AddProductLowStockLevelSpinBox;
    QDoubleSpinBox *AddProductUnitPriceSpinBox;
    QLabel *label_58;
    QLineEdit *AddProductImageLineEdit;
    QPushButton *AddProductImageSearchButton;
    QWidget *AddStockWidget;
    QLabel *label_24;
    QLineEdit *AddStockProdCodeLineEdit;
    QLabel *label_25;
    QLabel *label_31;
    QLineEdit *AddStockStockLevelLineEdit;
    QSpinBox *AddStockCasesToAddSpinBox;
    QLabel *label_32;
    QLabel *label_33;
    QLineEdit *AddStockNewStockLevelLineEdit;
    QLabel *label_39;
    QLineEdit *AddStockCaseQuantityLineEdit;
    QPushButton *AddStockCancelButton;
    QPushButton *AddStockConfirmButton;
    QLabel *label_40;
    QLineEdit *AddStockProdDescLineEdit;
    QWidget *StockTakeTab;
    QFrame *StockTake;
    QLabel *StockTakeDescriptionLabel;
    QLineEdit *StockTakeProdDescLineEdit;
    QLabel *StockTakeCurrentStockLevelLabel;
    QPushButton *StockTakeUpdateButton;
    QPushButton *StockTakeNextButton;
    QTableWidget *StockTakeTable;
    QLabel *StockTakeProdCodeLabel;
    QLineEdit *StockTakeProdCodeLineEdit;
    QSpinBox *StockTakeStockLevelSpinBox;
    QLineEdit *StockTakeCurrentStockLevelLineEdit;
    QLabel *StockTakeStockLevelLabel;
    QPushButton *StockTakeFinishButton;
    QWidget *ReportTab;
    QStackedWidget *ReportsStackedWidget;
    QWidget *ReportsHomeTab;
    QPushButton *ShrinkageRepButton;
    QPushButton *SalesRepButton;
    QPushButton *CusOrdRepButton;
    QPushButton *ExpenditureRepButton;
    QPushButton *StockTakeRepButton;
    QPushButton *StockAdjRepButton;
    QWidget *CustomerOrderReportTab;
    QPushButton *CusOrdRepExportButton;
    QPushButton *CusOrdRepCancelButton;
    QTableWidget *CusOrdRepTable;
    QLabel *CusOrdRepTitle;
    QDateTimeEdit *CusOrdRepStartDateDateTimeEdit;
    QDateTimeEdit *CusOrdRepEndDateDateTimeEdit;
    QComboBox *CusOrdRepUsernameCombo;
    QPushButton *CusOrdRepRunButton;
    QLabel *CusOrdRepEndDateLabel;
    QLabel *CusOrdRepUsernameLabel;
    QLabel *CusOrdRepStartDateLabel;
    QWidget *StockAdj;
    QPushButton *StockAdjRepExportButton;
    QPushButton *StockAdjRepCancelButton;
    QTableWidget *StockAdjRepTable;
    QLabel *StockAdjRepTitle;
    QLabel *StockAdjRepEndDateLabel;
    QComboBox *StockAdjRepProdCodeCombo;
    QLabel *StockAdjRepProdCodeLabel;
    QDateTimeEdit *StockAdjRepStartDateDateTimeEdit;
    QDateTimeEdit *StockAdjRepEndDateDateTimeEdit;
    QPushButton *StockAdjRepRunButton;
    QLabel *StockAdjRepStartDateLabel;
    QLabel *StockAdjRepAmendTypeLabel;
    QComboBox *StockAdjRepAmendTypeCombo;
    QWidget *ShrinkageReportTable;
    QPushButton *ShrinkageRepExportButton;
    QPushButton *ShrinkageRepCancelButton;
    QTableWidget *ShrinkageRepTable;
    QLabel *ShrinkageRepTitle;
    QLabel *ShrinkageRepStartDateLabel;
    QDateTimeEdit *ShrinkageRepStartDateDateTimeEdit;
    QLabel *ShrinkageRepEndDateLabel;
    QDateTimeEdit *ShrinkageRepEndDateDateTimeEdit;
    QPushButton *ShrinkageRepRunButton;
    QWidget *ExpenditureReportTable;
    QPushButton *ExpenditureRepExportButton;
    QPushButton *ExpenditureRepCancelButton;
    QTableWidget *ExpenditureRepTable;
    QLabel *ExpenditureRepTitle;
    QLabel *ExpenditureRepStartDateLabel;
    QDateTimeEdit *ExpenditureRepStartDateDateTimeEdit;
    QLabel *ExpenditureRepEndDateLabel;
    QDateTimeEdit *ExpenditureRepEndDateDateTimeEdit;
    QPushButton *ExpenditureRepRunButton;
    QWidget *SalesReportTab;
    QPushButton *SalesRepExportButton;
    QPushButton *SalesRepCancelButton;
    QTableWidget *SalesRepTable;
    QLabel *SalesRepTitle;
    QLabel *SalesRepEndDateLabel;
    QDateTimeEdit *SalesRepEndDateDateTimeEdit;
    QDateTimeEdit *SalesRepStartDateDateTimeEdit;
    QLabel *SalesRepStartDateLabel;
    QPushButton *SalesRepRunButton;
    QComboBox *SalesRepDepartmentCombo;
    QLabel *SalesRepDepartmentLabel;
    QWidget *StockTakeReportTab;
    QLabel *StockTakeRepTitle;
    QTableWidget *StockTakeRepTable;
    QPushButton *StockTakeRepExportButton;
    QPushButton *StockTakeRepCancelButton;
    QWidget *ManageUsersTab;
    QStackedWidget *ManageUsersStackedWidget;
    QWidget *ManageUsersWidget;
    QFrame *ManageUsersFrame;
    QLabel *usr_3;
    QLineEdit *ManageUsersUsernameLineEdit;
    QLineEdit *ManageUsersForenameLineEdit;
    QLabel *fore_3;
    QLineEdit *ManageUsersSurnameLineEdit;
    QLabel *label_34;
    QLineEdit *ManageUsersEmailLineEdit;
    QLabel *label_35;
    QLabel *label_36;
    QPushButton *ManageUsersUpdateButton;
    QPushButton *ManageUsersCancelButton;
    QLabel *label_37;
    QComboBox *ManageUsersUserTypeCombo;
    QComboBox *ManageUsersVATTypeCombo;
    QLabel *label_38;
    QTableWidget *ManageUsersTable;
    QComboBox *ManageUsersChargeCodeCombo;
    QPushButton *ManageUsersAddUserButton;
    QLineEdit *ManageUsersSearchLineEdit;
    QPushButton *ManageUsersSearchButton;
    QWidget *AddUserWidget;
    QLabel *label_49;
    QLineEdit *AddUserForenameLineEdit;
    QLineEdit *AddUserPasswordLineEdit;
    QLabel *label_50;
    QLabel *label_51;
    QLabel *label_52;
    QLabel *label_53;
    QLineEdit *AddUserSurnameLineEdit;
    QLabel *label_54;
    QLabel *label_55;
    QLineEdit *AddUserEmailLineEdit;
    QComboBox *AddUserNonVATComboBox;
    QPushButton *AddUserAddButton;
    QLineEdit *AddUserUsernameLineEdit;
    QComboBox *AddUserChargeCodeComboBox;
    QPushButton *AddUserCancelButton;
    QLabel *label_56;
    QLabel *label_57;
    QComboBox *AddUserUserTypeComboBox;
    QWidget *ShopTab;
    QPushButton *ShopTabStartShoppingButton;
    QWidget *CustomerUI;
    QStackedWidget *CustomerStackedWidget;
    QWidget *CustomerHomeWidget;
    QPushButton *CustomerLogOutButton;
    QLabel *CustomerHomeUsernameLabel;
    QPushButton *CustomerShopButton;
    QLabel *label_18;
    QWidget *CustomerShopWidget;
    QLineEdit *CustomerShopProdDescLineEdit;
    QPushButton *CustomerShopSearchButton;
    QPushButton *CustomerShopAddButton;
    QLabel *label_14;
    QPushButton *CustomerShopRemoveButton;
    QLabel *label_12;
    QLineEdit *CustomerShopSearchLineEdit;
    QLineEdit *CustomerShopProdCodeLineEdit;
    QLabel *label_11;
    QLabel *label_13;
    QPushButton *CustomerShopCheckoutButton;
    QTableWidget *CustomerShopBasketTable;
    QPushButton *CustomerShopCancelButton;
    QLabel *CustomerShopImageLabel;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *CustomerShopQuantityAvailablecLineEdit;
    QSpinBox *CustomerShopQuantitySpinBox;
    QLabel *label;

    void setupUi(QMainWindow *UserInterface)
    {
        if (UserInterface->objectName().isEmpty())
            UserInterface->setObjectName(QStringLiteral("UserInterface"));
        UserInterface->resize(1200, 800);
        UserInterface->setAutoFillBackground(false);
        Interface = new QWidget(UserInterface);
        Interface->setObjectName(QStringLiteral("Interface"));
        Interface->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        UIStackWidget = new QStackedWidget(Interface);
        UIStackWidget->setObjectName(QStringLiteral("UIStackWidget"));
        UIStackWidget->setGeometry(QRect(0, 140, 1200, 660));
        LogInUI = new QWidget();
        LogInUI->setObjectName(QStringLiteral("LogInUI"));
        LoginStackedWidget = new QStackedWidget(LogInUI);
        LoginStackedWidget->setObjectName(QStringLiteral("LoginStackedWidget"));
        LoginStackedWidget->setGeometry(QRect(0, 10, 1201, 661));
        LoginStackedWidget->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        LoginTab = new QWidget();
        LoginTab->setObjectName(QStringLiteral("LoginTab"));
        label_2 = new QLabel(LoginTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 50, 601, 541));
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(228, 228, 228);"));
        LoginUsernameLineEdit = new QLineEdit(LoginTab);
        LoginUsernameLineEdit->setObjectName(QStringLiteral("LoginUsernameLineEdit"));
        LoginUsernameLineEdit->setGeometry(QRect(330, 200, 561, 51));
        LoginUsernameLineEdit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"selection-background-color: rgb(232, 240, 254);"));
        LoginPasswordLineEdit = new QLineEdit(LoginTab);
        LoginPasswordLineEdit->setObjectName(QStringLiteral("LoginPasswordLineEdit"));
        LoginPasswordLineEdit->setGeometry(QRect(330, 320, 561, 51));
        LoginPasswordLineEdit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"selection-background-color: rgb(232, 240, 254);"));
        LoginPasswordLineEdit->setEchoMode(QLineEdit::Password);
        LoginRegisterButton = new QPushButton(LoginTab);
        LoginRegisterButton->setObjectName(QStringLiteral("LoginRegisterButton"));
        LoginRegisterButton->setGeometry(QRect(330, 480, 121, 41));
        LoginRegisterButton->setStyleSheet(QLatin1String("font: 12pt \"Verdana\";\n"
"color: rgb(0, 72, 119);\n"
"selection-color: rgb(232, 0, 90);"));
        LoginRegisterButton->setFlat(true);
        header_lbl_3 = new QLabel(LoginTab);
        header_lbl_3->setObjectName(QStringLiteral("header_lbl_3"));
        header_lbl_3->setGeometry(QRect(310, 50, 601, 101));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        header_lbl_3->setFont(font);
        header_lbl_3->setStyleSheet(QLatin1String("background-color: rgb(204, 204, 204);\n"
"font: 12pt \"Verdana\";\n"
"text-align: center;\n"
""));
        header_lbl_3->setTextFormat(Qt::RichText);
        LoginButton = new QPushButton(LoginTab);
        LoginButton->setObjectName(QStringLiteral("LoginButton"));
        LoginButton->setGeometry(QRect(330, 420, 561, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        LoginButton->setFont(font1);
        LoginButton->setStyleSheet(QLatin1String("font: 75 16pt \"Verdana\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(232, 0, 90);\n"
"selection-background-color: rgb(0, 72, 119);\n"
""));
        pass_lbl_3 = new QLabel(LoginTab);
        pass_lbl_3->setObjectName(QStringLiteral("pass_lbl_3"));
        pass_lbl_3->setGeometry(QRect(330, 280, 131, 20));
        pass_lbl_3->setFont(font);
        pass_lbl_3->setStyleSheet(QLatin1String("font: 12pt \"Verdana\";\n"
"color: rgb(0, 0, 0);background-color: rgb(228, 228, 228);"));
        usr_lbl_3 = new QLabel(LoginTab);
        usr_lbl_3->setObjectName(QStringLiteral("usr_lbl_3"));
        usr_lbl_3->setGeometry(QRect(330, 160, 131, 20));
        usr_lbl_3->setFont(font);
        usr_lbl_3->setStyleSheet(QLatin1String("font: 12pt \"Verdana\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(228, 228, 228);"));
        LoginStackedWidget->addWidget(LoginTab);
        RegisterTab = new QWidget();
        RegisterTab->setObjectName(QStringLiteral("RegisterTab"));
        label_41 = new QLabel(RegisterTab);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(210, 140, 321, 30));
        label_41->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        RegisterUsernameLineEdit = new QLineEdit(RegisterTab);
        RegisterUsernameLineEdit->setObjectName(QStringLiteral("RegisterUsernameLineEdit"));
        RegisterUsernameLineEdit->setGeometry(QRect(210, 170, 321, 30));
        RegisterUsernameLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        RegisterPasswordLineEdit = new QLineEdit(RegisterTab);
        RegisterPasswordLineEdit->setObjectName(QStringLiteral("RegisterPasswordLineEdit"));
        RegisterPasswordLineEdit->setGeometry(QRect(600, 170, 321, 30));
        RegisterPasswordLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        RegisterPasswordLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        label_42 = new QLabel(RegisterTab);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(600, 140, 321, 30));
        label_42->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_43 = new QLabel(RegisterTab);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(320, 40, 511, 31));
        label_43->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 75 16pt \"Verdana\";"));
        label_43->setAlignment(Qt::AlignCenter);
        RegisterSurnameLineEdit = new QLineEdit(RegisterTab);
        RegisterSurnameLineEdit->setObjectName(QStringLiteral("RegisterSurnameLineEdit"));
        RegisterSurnameLineEdit->setGeometry(QRect(600, 250, 321, 30));
        RegisterSurnameLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        RegisterSurnameLineEdit->setEchoMode(QLineEdit::Normal);
        label_44 = new QLabel(RegisterTab);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(600, 220, 321, 30));
        label_44->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_45 = new QLabel(RegisterTab);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(210, 220, 321, 30));
        label_45->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        RegisterForenameLineEdit = new QLineEdit(RegisterTab);
        RegisterForenameLineEdit->setObjectName(QStringLiteral("RegisterForenameLineEdit"));
        RegisterForenameLineEdit->setGeometry(QRect(210, 250, 321, 30));
        RegisterForenameLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        RegisterEmailLineEdit = new QLineEdit(RegisterTab);
        RegisterEmailLineEdit->setObjectName(QStringLiteral("RegisterEmailLineEdit"));
        RegisterEmailLineEdit->setGeometry(QRect(210, 330, 321, 30));
        RegisterEmailLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_46 = new QLabel(RegisterTab);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(600, 300, 321, 30));
        label_46->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_47 = new QLabel(RegisterTab);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(210, 300, 321, 30));
        label_47->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        RegisterNonVATComboBox = new QComboBox(RegisterTab);
        RegisterNonVATComboBox->addItem(QString());
        RegisterNonVATComboBox->addItem(QString());
        RegisterNonVATComboBox->setObjectName(QStringLiteral("RegisterNonVATComboBox"));
        RegisterNonVATComboBox->setGeometry(QRect(210, 410, 321, 30));
        RegisterNonVATComboBox->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_48 = new QLabel(RegisterTab);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(210, 380, 321, 30));
        label_48->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        RegisterChargeCodeComboBox = new QComboBox(RegisterTab);
        RegisterChargeCodeComboBox->setObjectName(QStringLiteral("RegisterChargeCodeComboBox"));
        RegisterChargeCodeComboBox->setGeometry(QRect(600, 330, 321, 30));
        RegisterChargeCodeComboBox->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        RegisterRegisterButton = new QPushButton(RegisterTab);
        RegisterRegisterButton->setObjectName(QStringLiteral("RegisterRegisterButton"));
        RegisterRegisterButton->setGeometry(QRect(600, 410, 141, 34));
        RegisterRegisterButton->setStyleSheet(QLatin1String("font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(232, 0, 92);"));
        RegisterCancelButton = new QPushButton(RegisterTab);
        RegisterCancelButton->setObjectName(QStringLiteral("RegisterCancelButton"));
        RegisterCancelButton->setGeometry(QRect(780, 410, 141, 34));
        RegisterCancelButton->setStyleSheet(QLatin1String("font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(232, 0, 92);"));
        LoginStackedWidget->addWidget(RegisterTab);
        UIStackWidget->addWidget(LogInUI);
        AdminUI = new QWidget();
        AdminUI->setObjectName(QStringLiteral("AdminUI"));
        AdminTabWidget = new QTabWidget(AdminUI);
        AdminTabWidget->setObjectName(QStringLiteral("AdminTabWidget"));
        AdminTabWidget->setGeometry(QRect(0, 0, 1200, 660));
        AdminTabWidget->setMinimumSize(QSize(0, 0));
        AdminTabWidget->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 6pt \"Verdana\";"));
        AdminTabWidget->setTabPosition(QTabWidget::North);
        AdminTabWidget->setTabShape(QTabWidget::Rounded);
        AdminTabWidget->setElideMode(Qt::ElideNone);
        AdminTabWidget->setDocumentMode(true);
        AdminTabWidget->setTabsClosable(false);
        HomeTab = new QWidget();
        HomeTab->setObjectName(QStringLiteral("HomeTab"));
        StockTakeButton = new QPushButton(HomeTab);
        StockTakeButton->setObjectName(QStringLiteral("StockTakeButton"));
        StockTakeButton->setGeometry(QRect(460, 30, 250, 250));
        StockTakeButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Verdana\";"));
        LogOutButton = new QPushButton(HomeTab);
        LogOutButton->setObjectName(QStringLiteral("LogOutButton"));
        LogOutButton->setGeometry(QRect(870, 310, 250, 250));
        LogOutButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Verdana\";"));
        ReportingButton = new QPushButton(HomeTab);
        ReportingButton->setObjectName(QStringLiteral("ReportingButton"));
        ReportingButton->setGeometry(QRect(870, 30, 250, 250));
        ReportingButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Verdana\";"));
        ManageUsersButton = new QPushButton(HomeTab);
        ManageUsersButton->setObjectName(QStringLiteral("ManageUsersButton"));
        ManageUsersButton->setGeometry(QRect(60, 310, 250, 250));
        ManageUsersButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Verdana\";"));
        ShopButton = new QPushButton(HomeTab);
        ShopButton->setObjectName(QStringLiteral("ShopButton"));
        ShopButton->setGeometry(QRect(460, 310, 250, 250));
        ShopButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Verdana\";"));
        ManageStockButton = new QPushButton(HomeTab);
        ManageStockButton->setObjectName(QStringLiteral("ManageStockButton"));
        ManageStockButton->setGeometry(QRect(60, 30, 250, 250));
        ManageStockButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Verdana\";"));
        AdminTabWidget->addTab(HomeTab, QString());
        ManageStockTab = new QWidget();
        ManageStockTab->setObjectName(QStringLiteral("ManageStockTab"));
        ManageStockStackedWidget = new QStackedWidget(ManageStockTab);
        ManageStockStackedWidget->setObjectName(QStringLiteral("ManageStockStackedWidget"));
        ManageStockStackedWidget->setGeometry(QRect(0, 0, 1200, 640));
        ManageStockWidget = new QWidget();
        ManageStockWidget->setObjectName(QStringLiteral("ManageStockWidget"));
        frame_2 = new QFrame(ManageStockWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(50, 60, 1091, 551));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lbldec = new QLabel(frame_2);
        lbldec->setObjectName(QStringLiteral("lbldec"));
        lbldec->setGeometry(QRect(760, 90, 181, 19));
        lbldec->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageStockProdDescLineEdit = new QLineEdit(frame_2);
        ManageStockProdDescLineEdit->setObjectName(QStringLiteral("ManageStockProdDescLineEdit"));
        ManageStockProdDescLineEdit->setGeometry(QRect(760, 120, 321, 30));
        ManageStockProdDescLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        lblStock = new QLabel(frame_2);
        lblStock->setObjectName(QStringLiteral("lblStock"));
        lblStock->setGeometry(QRect(760, 370, 131, 19));
        lblStock->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(760, 230, 131, 19));
        label_4->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(930, 370, 151, 19));
        label_5->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(760, 300, 191, 19));
        label_6->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageStockUpdateButton = new QPushButton(frame_2);
        ManageStockUpdateButton->setObjectName(QStringLiteral("ManageStockUpdateButton"));
        ManageStockUpdateButton->setGeometry(QRect(760, 500, 141, 34));
        ManageStockUpdateButton->setStyleSheet(QLatin1String("font: 12pt \"Verdana\";\n"
"background-color: rgb(232, 0, 90);\n"
"color: rgb(255, 255, 255);"));
        ManageStockCancelButton = new QPushButton(frame_2);
        ManageStockCancelButton->setObjectName(QStringLiteral("ManageStockCancelButton"));
        ManageStockCancelButton->setGeometry(QRect(930, 500, 141, 34));
        ManageStockCancelButton->setStyleSheet(QLatin1String("font: 12pt \"Verdana\";\n"
"background-color: rgb(232, 0, 90);\n"
"color: rgb(255, 255, 255);"));
        ManageStockTable = new QTableWidget(frame_2);
        if (ManageStockTable->columnCount() < 7)
            ManageStockTable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ManageStockTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ManageStockTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ManageStockTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ManageStockTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        ManageStockTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        ManageStockTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        ManageStockTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        ManageStockTable->setObjectName(QStringLiteral("ManageStockTable"));
        ManageStockTable->setGeometry(QRect(15, 11, 721, 521));
        ManageStockTable->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        ManageStockTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ManageStockTable->setSortingEnabled(true);
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(760, 160, 131, 19));
        label_7->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageStockVATPercentSpinBox = new QSpinBox(frame_2);
        ManageStockVATPercentSpinBox->setObjectName(QStringLiteral("ManageStockVATPercentSpinBox"));
        ManageStockVATPercentSpinBox->setGeometry(QRect(760, 330, 321, 30));
        ManageStockVATPercentSpinBox->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageStockVATPercentSpinBox->setMinimum(1);
        ManageStockUnitPriceSpinBox = new QDoubleSpinBox(frame_2);
        ManageStockUnitPriceSpinBox->setObjectName(QStringLiteral("ManageStockUnitPriceSpinBox"));
        ManageStockUnitPriceSpinBox->setGeometry(QRect(760, 260, 321, 30));
        ManageStockUnitPriceSpinBox->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageStockUnitPriceSpinBox->setSingleStep(0.01);
        ManageStockCaseQuantitySpinBox = new QSpinBox(frame_2);
        ManageStockCaseQuantitySpinBox->setObjectName(QStringLiteral("ManageStockCaseQuantitySpinBox"));
        ManageStockCaseQuantitySpinBox->setGeometry(QRect(760, 190, 321, 30));
        ManageStockCaseQuantitySpinBox->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageStockCaseQuantitySpinBox->setMinimum(1);
        ManageStockLowStockSpinBox = new QSpinBox(frame_2);
        ManageStockLowStockSpinBox->setObjectName(QStringLiteral("ManageStockLowStockSpinBox"));
        ManageStockLowStockSpinBox->setGeometry(QRect(930, 400, 150, 30));
        ManageStockLowStockSpinBox->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageStockLowStockSpinBox->setMinimum(0);
        ManageStockLowStockSpinBox->setSingleStep(1);
        ManageStockLowStockSpinBox->setValue(0);
        ManageStockProdCodeLineEdit = new QLineEdit(frame_2);
        ManageStockProdCodeLineEdit->setObjectName(QStringLiteral("ManageStockProdCodeLineEdit"));
        ManageStockProdCodeLineEdit->setEnabled(false);
        ManageStockProdCodeLineEdit->setGeometry(QRect(760, 50, 321, 30));
        ManageStockProdCodeLineEdit->setStyleSheet(QLatin1String("font: 12pt \"Verdana\";\n"
""));
        lblStock_2 = new QLabel(frame_2);
        lblStock_2->setObjectName(QStringLiteral("lblStock_2"));
        lblStock_2->setGeometry(QRect(760, 20, 131, 19));
        lblStock_2->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageStockAddProductButton = new QPushButton(frame_2);
        ManageStockAddProductButton->setObjectName(QStringLiteral("ManageStockAddProductButton"));
        ManageStockAddProductButton->setGeometry(QRect(930, 450, 141, 34));
        ManageStockAddProductButton->setStyleSheet(QLatin1String("font: 12pt \"Verdana\";\n"
"background-color: rgb(232, 0, 90);\n"
"color: rgb(255, 255, 255);"));
        ManageStockAddStockButton = new QPushButton(frame_2);
        ManageStockAddStockButton->setObjectName(QStringLiteral("ManageStockAddStockButton"));
        ManageStockAddStockButton->setGeometry(QRect(760, 450, 141, 34));
        ManageStockAddStockButton->setStyleSheet(QLatin1String("font: 12pt \"Verdana\";\n"
"background-color: rgb(232, 0, 90);\n"
"color: rgb(255, 255, 255);"));
        ManageStockStockLevelLineEdit = new QLineEdit(frame_2);
        ManageStockStockLevelLineEdit->setObjectName(QStringLiteral("ManageStockStockLevelLineEdit"));
        ManageStockStockLevelLineEdit->setEnabled(false);
        ManageStockStockLevelLineEdit->setGeometry(QRect(760, 400, 150, 30));
        ManageStockStockLevelLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageStockSearchLineEdit = new QLineEdit(ManageStockWidget);
        ManageStockSearchLineEdit->setObjectName(QStringLiteral("ManageStockSearchLineEdit"));
        ManageStockSearchLineEdit->setGeometry(QRect(50, 10, 1091, 41));
        ManageStockSearchLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageStockSearchButton = new QPushButton(ManageStockWidget);
        ManageStockSearchButton->setObjectName(QStringLiteral("ManageStockSearchButton"));
        ManageStockSearchButton->setGeometry(QRect(1100, 10, 41, 41));
        ManageStockSearchButton->setStyleSheet(QLatin1String("background-color: rgb(0, 72, 119);\n"
"font: 8pt \"Verdana\";"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/img/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        ManageStockSearchButton->setIcon(icon);
        ManageStockStackedWidget->addWidget(ManageStockWidget);
        AddProductWidget = new QWidget();
        AddProductWidget->setObjectName(QStringLiteral("AddProductWidget"));
        label_30 = new QLabel(AddProductWidget);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(720, 170, 131, 19));
        label_30->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddProductProdCodeLineEdit = new QLineEdit(AddProductWidget);
        AddProductProdCodeLineEdit->setObjectName(QStringLiteral("AddProductProdCodeLineEdit"));
        AddProductProdCodeLineEdit->setGeometry(QRect(150, 120, 321, 30));
        AddProductProdCodeLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_27 = new QLabel(AddProductWidget);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(150, 250, 131, 19));
        label_27->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_21 = new QLabel(AddProductWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(330, 20, 511, 31));
        label_21->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 75 16pt \"Verdana\";\n"
""));
        label_21->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(AddProductWidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(720, 90, 201, 19));
        label_23->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_29 = new QLabel(AddProductWidget);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(150, 330, 161, 19));
        label_29->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddProductAddButton = new QPushButton(AddProductWidget);
        AddProductAddButton->setObjectName(QStringLiteral("AddProductAddButton"));
        AddProductAddButton->setGeometry(QRect(390, 440, 141, 34));
        AddProductAddButton->setStyleSheet(QLatin1String("background-color: rgb(0, 72, 119);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);"));
        AddProductProdDescLineEdit = new QLineEdit(AddProductWidget);
        AddProductProdDescLineEdit->setObjectName(QStringLiteral("AddProductProdDescLineEdit"));
        AddProductProdDescLineEdit->setGeometry(QRect(720, 120, 321, 30));
        AddProductProdDescLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_26 = new QLabel(AddProductWidget);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(150, 170, 131, 19));
        label_26->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_28 = new QLabel(AddProductWidget);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(720, 250, 161, 19));
        label_28->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_22 = new QLabel(AddProductWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(150, 90, 131, 19));
        label_22->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddProductCancelButton = new QPushButton(AddProductWidget);
        AddProductCancelButton->setObjectName(QStringLiteral("AddProductCancelButton"));
        AddProductCancelButton->setGeometry(QRect(640, 440, 141, 34));
        AddProductCancelButton->setStyleSheet(QLatin1String("background-color: rgb(0, 72, 119);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);"));
        AddProductVATPercentSpinBox = new QSpinBox(AddProductWidget);
        AddProductVATPercentSpinBox->setObjectName(QStringLiteral("AddProductVATPercentSpinBox"));
        AddProductVATPercentSpinBox->setGeometry(QRect(150, 360, 321, 30));
        AddProductVATPercentSpinBox->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddProductVATPercentSpinBox->setMinimum(0);
        AddProductVATPercentSpinBox->setValue(0);
        AddProductCaseQuantitySpinBox = new QSpinBox(AddProductWidget);
        AddProductCaseQuantitySpinBox->setObjectName(QStringLiteral("AddProductCaseQuantitySpinBox"));
        AddProductCaseQuantitySpinBox->setGeometry(QRect(720, 200, 321, 30));
        AddProductCaseQuantitySpinBox->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddProductCaseQuantitySpinBox->setMinimum(1);
        AddProductStockLevelSpinBox = new QSpinBox(AddProductWidget);
        AddProductStockLevelSpinBox->setObjectName(QStringLiteral("AddProductStockLevelSpinBox"));
        AddProductStockLevelSpinBox->setGeometry(QRect(150, 280, 321, 30));
        AddProductStockLevelSpinBox->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddProductLowStockLevelSpinBox = new QSpinBox(AddProductWidget);
        AddProductLowStockLevelSpinBox->setObjectName(QStringLiteral("AddProductLowStockLevelSpinBox"));
        AddProductLowStockLevelSpinBox->setGeometry(QRect(720, 280, 321, 30));
        AddProductLowStockLevelSpinBox->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddProductLowStockLevelSpinBox->setMinimum(1);
        AddProductUnitPriceSpinBox = new QDoubleSpinBox(AddProductWidget);
        AddProductUnitPriceSpinBox->setObjectName(QStringLiteral("AddProductUnitPriceSpinBox"));
        AddProductUnitPriceSpinBox->setGeometry(QRect(150, 200, 321, 30));
        AddProductUnitPriceSpinBox->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddProductUnitPriceSpinBox->setSingleStep(0.01);
        label_58 = new QLabel(AddProductWidget);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setGeometry(QRect(720, 330, 161, 19));
        label_58->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddProductImageLineEdit = new QLineEdit(AddProductWidget);
        AddProductImageLineEdit->setObjectName(QStringLiteral("AddProductImageLineEdit"));
        AddProductImageLineEdit->setEnabled(false);
        AddProductImageLineEdit->setGeometry(QRect(720, 360, 251, 30));
        AddProductImageSearchButton = new QPushButton(AddProductWidget);
        AddProductImageSearchButton->setObjectName(QStringLiteral("AddProductImageSearchButton"));
        AddProductImageSearchButton->setGeometry(QRect(980, 360, 61, 34));
        AddProductImageSearchButton->setContextMenuPolicy(Qt::NoContextMenu);
        AddProductImageSearchButton->setStyleSheet(QLatin1String("background-color: rgb(0, 72, 119);\n"
"font: 8pt \"Verdana\";"));
        AddProductImageSearchButton->setIcon(icon);
        ManageStockStackedWidget->addWidget(AddProductWidget);
        AddStockWidget = new QWidget();
        AddStockWidget->setObjectName(QStringLiteral("AddStockWidget"));
        label_24 = new QLabel(AddStockWidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(290, 20, 511, 31));
        label_24->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 75 16pt \"Verdana\";"));
        label_24->setAlignment(Qt::AlignCenter);
        AddStockProdCodeLineEdit = new QLineEdit(AddStockWidget);
        AddStockProdCodeLineEdit->setObjectName(QStringLiteral("AddStockProdCodeLineEdit"));
        AddStockProdCodeLineEdit->setEnabled(false);
        AddStockProdCodeLineEdit->setGeometry(QRect(150, 120, 321, 30));
        AddStockProdCodeLineEdit->setFocusPolicy(Qt::WheelFocus);
        AddStockProdCodeLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_25 = new QLabel(AddStockWidget);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(150, 90, 321, 30));
        label_25->setFocusPolicy(Qt::WheelFocus);
        label_25->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_31 = new QLabel(AddStockWidget);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(150, 170, 321, 30));
        label_31->setFocusPolicy(Qt::WheelFocus);
        label_31->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddStockStockLevelLineEdit = new QLineEdit(AddStockWidget);
        AddStockStockLevelLineEdit->setObjectName(QStringLiteral("AddStockStockLevelLineEdit"));
        AddStockStockLevelLineEdit->setEnabled(false);
        AddStockStockLevelLineEdit->setGeometry(QRect(150, 200, 321, 30));
        AddStockStockLevelLineEdit->setFocusPolicy(Qt::WheelFocus);
        AddStockStockLevelLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddStockCasesToAddSpinBox = new QSpinBox(AddStockWidget);
        AddStockCasesToAddSpinBox->setObjectName(QStringLiteral("AddStockCasesToAddSpinBox"));
        AddStockCasesToAddSpinBox->setGeometry(QRect(150, 280, 321, 30));
        AddStockCasesToAddSpinBox->setFocusPolicy(Qt::WheelFocus);
        AddStockCasesToAddSpinBox->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddStockCasesToAddSpinBox->setMinimum(1);
        label_32 = new QLabel(AddStockWidget);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(150, 250, 321, 30));
        label_32->setFocusPolicy(Qt::WheelFocus);
        label_32->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_33 = new QLabel(AddStockWidget);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(590, 250, 321, 30));
        label_33->setFocusPolicy(Qt::WheelFocus);
        label_33->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddStockNewStockLevelLineEdit = new QLineEdit(AddStockWidget);
        AddStockNewStockLevelLineEdit->setObjectName(QStringLiteral("AddStockNewStockLevelLineEdit"));
        AddStockNewStockLevelLineEdit->setEnabled(false);
        AddStockNewStockLevelLineEdit->setGeometry(QRect(590, 280, 321, 30));
        AddStockNewStockLevelLineEdit->setFocusPolicy(Qt::WheelFocus);
        AddStockNewStockLevelLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_39 = new QLabel(AddStockWidget);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(590, 170, 321, 30));
        label_39->setFocusPolicy(Qt::WheelFocus);
        label_39->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddStockCaseQuantityLineEdit = new QLineEdit(AddStockWidget);
        AddStockCaseQuantityLineEdit->setObjectName(QStringLiteral("AddStockCaseQuantityLineEdit"));
        AddStockCaseQuantityLineEdit->setEnabled(false);
        AddStockCaseQuantityLineEdit->setGeometry(QRect(590, 200, 321, 30));
        AddStockCaseQuantityLineEdit->setFocusPolicy(Qt::WheelFocus);
        AddStockCaseQuantityLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddStockCancelButton = new QPushButton(AddStockWidget);
        AddStockCancelButton->setObjectName(QStringLiteral("AddStockCancelButton"));
        AddStockCancelButton->setGeometry(QRect(550, 360, 141, 34));
        AddStockCancelButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);"));
        AddStockConfirmButton = new QPushButton(AddStockWidget);
        AddStockConfirmButton->setObjectName(QStringLiteral("AddStockConfirmButton"));
        AddStockConfirmButton->setGeometry(QRect(340, 360, 141, 34));
        AddStockConfirmButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);"));
        label_40 = new QLabel(AddStockWidget);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(590, 90, 321, 30));
        label_40->setFocusPolicy(Qt::WheelFocus);
        label_40->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddStockProdDescLineEdit = new QLineEdit(AddStockWidget);
        AddStockProdDescLineEdit->setObjectName(QStringLiteral("AddStockProdDescLineEdit"));
        AddStockProdDescLineEdit->setEnabled(false);
        AddStockProdDescLineEdit->setGeometry(QRect(590, 120, 321, 30));
        AddStockProdDescLineEdit->setFocusPolicy(Qt::WheelFocus);
        AddStockProdDescLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageStockStackedWidget->addWidget(AddStockWidget);
        AdminTabWidget->addTab(ManageStockTab, QString());
        StockTakeTab = new QWidget();
        StockTakeTab->setObjectName(QStringLiteral("StockTakeTab"));
        StockTake = new QFrame(StockTakeTab);
        StockTake->setObjectName(QStringLiteral("StockTake"));
        StockTake->setGeometry(QRect(50, 20, 1111, 591));
        StockTake->setFrameShape(QFrame::StyledPanel);
        StockTake->setFrameShadow(QFrame::Raised);
        StockTakeDescriptionLabel = new QLabel(StockTake);
        StockTakeDescriptionLabel->setObjectName(QStringLiteral("StockTakeDescriptionLabel"));
        StockTakeDescriptionLabel->setGeometry(QRect(760, 150, 191, 19));
        StockTakeDescriptionLabel->setFont(font);
        StockTakeDescriptionLabel->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        StockTakeProdDescLineEdit = new QLineEdit(StockTake);
        StockTakeProdDescLineEdit->setObjectName(QStringLiteral("StockTakeProdDescLineEdit"));
        StockTakeProdDescLineEdit->setEnabled(false);
        StockTakeProdDescLineEdit->setGeometry(QRect(760, 180, 321, 30));
        StockTakeProdDescLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        StockTakeCurrentStockLevelLabel = new QLabel(StockTake);
        StockTakeCurrentStockLevelLabel->setObjectName(QStringLiteral("StockTakeCurrentStockLevelLabel"));
        StockTakeCurrentStockLevelLabel->setGeometry(QRect(760, 220, 181, 19));
        StockTakeCurrentStockLevelLabel->setFont(font);
        StockTakeCurrentStockLevelLabel->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        StockTakeUpdateButton = new QPushButton(StockTake);
        StockTakeUpdateButton->setObjectName(QStringLiteral("StockTakeUpdateButton"));
        StockTakeUpdateButton->setGeometry(QRect(760, 540, 141, 34));
        StockTakeUpdateButton->setStyleSheet(QLatin1String("background-color: rgb(0, 72, 119);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);"));
        StockTakeNextButton = new QPushButton(StockTake);
        StockTakeNextButton->setObjectName(QStringLiteral("StockTakeNextButton"));
        StockTakeNextButton->setEnabled(false);
        StockTakeNextButton->setGeometry(QRect(940, 540, 141, 34));
        StockTakeNextButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);"));
        StockTakeTable = new QTableWidget(StockTake);
        if (StockTakeTable->columnCount() < 3)
            StockTakeTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        StockTakeTable->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        StockTakeTable->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        StockTakeTable->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        StockTakeTable->setObjectName(QStringLiteral("StockTakeTable"));
        StockTakeTable->setEnabled(false);
        StockTakeTable->setGeometry(QRect(15, 11, 721, 561));
        QFont font2;
        font2.setFamily(QStringLiteral("Verdana"));
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        StockTakeTable->setFont(font2);
        StockTakeTable->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        StockTakeTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        StockTakeTable->setSortingEnabled(false);
        StockTakeProdCodeLabel = new QLabel(StockTake);
        StockTakeProdCodeLabel->setObjectName(QStringLiteral("StockTakeProdCodeLabel"));
        StockTakeProdCodeLabel->setGeometry(QRect(760, 80, 151, 19));
        StockTakeProdCodeLabel->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        StockTakeProdCodeLineEdit = new QLineEdit(StockTake);
        StockTakeProdCodeLineEdit->setObjectName(QStringLiteral("StockTakeProdCodeLineEdit"));
        StockTakeProdCodeLineEdit->setEnabled(false);
        StockTakeProdCodeLineEdit->setGeometry(QRect(760, 110, 321, 30));
        StockTakeProdCodeLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        StockTakeStockLevelSpinBox = new QSpinBox(StockTake);
        StockTakeStockLevelSpinBox->setObjectName(QStringLiteral("StockTakeStockLevelSpinBox"));
        StockTakeStockLevelSpinBox->setGeometry(QRect(760, 320, 321, 30));
        StockTakeStockLevelSpinBox->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        StockTakeCurrentStockLevelLineEdit = new QLineEdit(StockTake);
        StockTakeCurrentStockLevelLineEdit->setObjectName(QStringLiteral("StockTakeCurrentStockLevelLineEdit"));
        StockTakeCurrentStockLevelLineEdit->setEnabled(false);
        StockTakeCurrentStockLevelLineEdit->setGeometry(QRect(760, 250, 321, 30));
        StockTakeCurrentStockLevelLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        StockTakeStockLevelLabel = new QLabel(StockTake);
        StockTakeStockLevelLabel->setObjectName(QStringLiteral("StockTakeStockLevelLabel"));
        StockTakeStockLevelLabel->setGeometry(QRect(760, 290, 151, 19));
        StockTakeStockLevelLabel->setFont(font);
        StockTakeStockLevelLabel->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        StockTakeFinishButton = new QPushButton(StockTake);
        StockTakeFinishButton->setObjectName(QStringLiteral("StockTakeFinishButton"));
        StockTakeFinishButton->setEnabled(false);
        StockTakeFinishButton->setGeometry(QRect(940, 540, 141, 34));
        StockTakeFinishButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);"));
        StockTakeNextButton->raise();
        StockTakeFinishButton->raise();
        StockTakeDescriptionLabel->raise();
        StockTakeProdDescLineEdit->raise();
        StockTakeCurrentStockLevelLabel->raise();
        StockTakeUpdateButton->raise();
        StockTakeTable->raise();
        StockTakeProdCodeLabel->raise();
        StockTakeProdCodeLineEdit->raise();
        StockTakeStockLevelSpinBox->raise();
        StockTakeCurrentStockLevelLineEdit->raise();
        StockTakeStockLevelLabel->raise();
        AdminTabWidget->addTab(StockTakeTab, QString());
        ReportTab = new QWidget();
        ReportTab->setObjectName(QStringLiteral("ReportTab"));
        ReportsStackedWidget = new QStackedWidget(ReportTab);
        ReportsStackedWidget->setObjectName(QStringLiteral("ReportsStackedWidget"));
        ReportsStackedWidget->setGeometry(QRect(30, 10, 1141, 601));
        ReportsHomeTab = new QWidget();
        ReportsHomeTab->setObjectName(QStringLiteral("ReportsHomeTab"));
        ShrinkageRepButton = new QPushButton(ReportsHomeTab);
        ShrinkageRepButton->setObjectName(QStringLiteral("ShrinkageRepButton"));
        ShrinkageRepButton->setGeometry(QRect(30, 300, 250, 250));
        ShrinkageRepButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Verdana\";"));
        SalesRepButton = new QPushButton(ReportsHomeTab);
        SalesRepButton->setObjectName(QStringLiteral("SalesRepButton"));
        SalesRepButton->setGeometry(QRect(840, 20, 250, 250));
        SalesRepButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Verdana\";"));
        CusOrdRepButton = new QPushButton(ReportsHomeTab);
        CusOrdRepButton->setObjectName(QStringLiteral("CusOrdRepButton"));
        CusOrdRepButton->setGeometry(QRect(430, 300, 250, 250));
        CusOrdRepButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Verdana\";"));
        ExpenditureRepButton = new QPushButton(ReportsHomeTab);
        ExpenditureRepButton->setObjectName(QStringLiteral("ExpenditureRepButton"));
        ExpenditureRepButton->setGeometry(QRect(430, 20, 250, 250));
        ExpenditureRepButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Verdana\";"));
        StockTakeRepButton = new QPushButton(ReportsHomeTab);
        StockTakeRepButton->setObjectName(QStringLiteral("StockTakeRepButton"));
        StockTakeRepButton->setGeometry(QRect(30, 20, 250, 250));
        StockTakeRepButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Verdana\";"));
        StockAdjRepButton = new QPushButton(ReportsHomeTab);
        StockAdjRepButton->setObjectName(QStringLiteral("StockAdjRepButton"));
        StockAdjRepButton->setGeometry(QRect(840, 300, 250, 250));
        StockAdjRepButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Verdana\";"));
        ReportsStackedWidget->addWidget(ReportsHomeTab);
        CustomerOrderReportTab = new QWidget();
        CustomerOrderReportTab->setObjectName(QStringLiteral("CustomerOrderReportTab"));
        CustomerOrderReportTab->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        CusOrdRepExportButton = new QPushButton(CustomerOrderReportTab);
        CusOrdRepExportButton->setObjectName(QStringLiteral("CusOrdRepExportButton"));
        CusOrdRepExportButton->setGeometry(QRect(320, 560, 141, 34));
        CusOrdRepExportButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);"));
        CusOrdRepCancelButton = new QPushButton(CustomerOrderReportTab);
        CusOrdRepCancelButton->setObjectName(QStringLiteral("CusOrdRepCancelButton"));
        CusOrdRepCancelButton->setGeometry(QRect(642, 560, 141, 34));
        CusOrdRepCancelButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);"));
        CusOrdRepTable = new QTableWidget(CustomerOrderReportTab);
        if (CusOrdRepTable->columnCount() < 4)
            CusOrdRepTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        CusOrdRepTable->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        CusOrdRepTable->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        CusOrdRepTable->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        CusOrdRepTable->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        CusOrdRepTable->setObjectName(QStringLiteral("CusOrdRepTable"));
        CusOrdRepTable->setGeometry(QRect(30, 80, 1071, 461));
        CusOrdRepTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        CusOrdRepTable->setSortingEnabled(true);
        CusOrdRepTitle = new QLabel(CustomerOrderReportTab);
        CusOrdRepTitle->setObjectName(QStringLiteral("CusOrdRepTitle"));
        CusOrdRepTitle->setGeometry(QRect(210, 0, 631, 31));
        CusOrdRepTitle->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 75 16pt \"Verdana\";"));
        CusOrdRepTitle->setAlignment(Qt::AlignCenter);
        CusOrdRepStartDateDateTimeEdit = new QDateTimeEdit(CustomerOrderReportTab);
        CusOrdRepStartDateDateTimeEdit->setObjectName(QStringLiteral("CusOrdRepStartDateDateTimeEdit"));
        CusOrdRepStartDateDateTimeEdit->setGeometry(QRect(140, 40, 201, 30));
        CusOrdRepStartDateDateTimeEdit->setStyleSheet(QLatin1String("font: 8pt \"Verdana\";\n"
""));
        CusOrdRepStartDateDateTimeEdit->setDate(QDate(2020, 1, 1));
        CusOrdRepEndDateDateTimeEdit = new QDateTimeEdit(CustomerOrderReportTab);
        CusOrdRepEndDateDateTimeEdit->setObjectName(QStringLiteral("CusOrdRepEndDateDateTimeEdit"));
        CusOrdRepEndDateDateTimeEdit->setGeometry(QRect(460, 40, 201, 30));
        CusOrdRepEndDateDateTimeEdit->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        CusOrdRepEndDateDateTimeEdit->setDate(QDate(2020, 12, 31));
        CusOrdRepUsernameCombo = new QComboBox(CustomerOrderReportTab);
        CusOrdRepUsernameCombo->setObjectName(QStringLiteral("CusOrdRepUsernameCombo"));
        CusOrdRepUsernameCombo->setGeometry(QRect(780, 40, 141, 30));
        CusOrdRepUsernameCombo->setStyleSheet(QLatin1String("font: 8pt \"Verdana\";\n"
""));
        CusOrdRepRunButton = new QPushButton(CustomerOrderReportTab);
        CusOrdRepRunButton->setObjectName(QStringLiteral("CusOrdRepRunButton"));
        CusOrdRepRunButton->setGeometry(QRect(960, 40, 141, 30));
        CusOrdRepRunButton->setStyleSheet(QLatin1String("background-color: rgb(0, 72, 119);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);"));
        CusOrdRepEndDateLabel = new QLabel(CustomerOrderReportTab);
        CusOrdRepEndDateLabel->setObjectName(QStringLiteral("CusOrdRepEndDateLabel"));
        CusOrdRepEndDateLabel->setGeometry(QRect(360, 40, 91, 20));
        CusOrdRepEndDateLabel->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        CusOrdRepEndDateLabel->setAlignment(Qt::AlignCenter);
        CusOrdRepUsernameLabel = new QLabel(CustomerOrderReportTab);
        CusOrdRepUsernameLabel->setObjectName(QStringLiteral("CusOrdRepUsernameLabel"));
        CusOrdRepUsernameLabel->setGeometry(QRect(670, 40, 101, 20));
        CusOrdRepUsernameLabel->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        CusOrdRepUsernameLabel->setAlignment(Qt::AlignCenter);
        CusOrdRepStartDateLabel = new QLabel(CustomerOrderReportTab);
        CusOrdRepStartDateLabel->setObjectName(QStringLiteral("CusOrdRepStartDateLabel"));
        CusOrdRepStartDateLabel->setGeometry(QRect(20, 40, 111, 20));
        CusOrdRepStartDateLabel->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        CusOrdRepStartDateLabel->setAlignment(Qt::AlignCenter);
        ReportsStackedWidget->addWidget(CustomerOrderReportTab);
        StockAdj = new QWidget();
        StockAdj->setObjectName(QStringLiteral("StockAdj"));
        StockAdj->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        StockAdjRepExportButton = new QPushButton(StockAdj);
        StockAdjRepExportButton->setObjectName(QStringLiteral("StockAdjRepExportButton"));
        StockAdjRepExportButton->setGeometry(QRect(320, 560, 141, 34));
        StockAdjRepExportButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);"));
        StockAdjRepCancelButton = new QPushButton(StockAdj);
        StockAdjRepCancelButton->setObjectName(QStringLiteral("StockAdjRepCancelButton"));
        StockAdjRepCancelButton->setGeometry(QRect(642, 560, 141, 34));
        StockAdjRepCancelButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);"));
        StockAdjRepTable = new QTableWidget(StockAdj);
        if (StockAdjRepTable->columnCount() < 5)
            StockAdjRepTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        StockAdjRepTable->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        StockAdjRepTable->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        StockAdjRepTable->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        StockAdjRepTable->setHorizontalHeaderItem(3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        StockAdjRepTable->setHorizontalHeaderItem(4, __qtablewidgetitem18);
        StockAdjRepTable->setObjectName(QStringLiteral("StockAdjRepTable"));
        StockAdjRepTable->setGeometry(QRect(40, 140, 1071, 401));
        StockAdjRepTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        StockAdjRepTable->setSortingEnabled(true);
        StockAdjRepTitle = new QLabel(StockAdj);
        StockAdjRepTitle->setObjectName(QStringLiteral("StockAdjRepTitle"));
        StockAdjRepTitle->setGeometry(QRect(390, 0, 361, 31));
        StockAdjRepTitle->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 75 16pt \"Verdana\";"));
        StockAdjRepTitle->setAlignment(Qt::AlignCenter);
        StockAdjRepEndDateLabel = new QLabel(StockAdj);
        StockAdjRepEndDateLabel->setObjectName(QStringLiteral("StockAdjRepEndDateLabel"));
        StockAdjRepEndDateLabel->setGeometry(QRect(560, 50, 101, 20));
        StockAdjRepEndDateLabel->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        StockAdjRepEndDateLabel->setAlignment(Qt::AlignCenter);
        StockAdjRepProdCodeCombo = new QComboBox(StockAdj);
        StockAdjRepProdCodeCombo->setObjectName(QStringLiteral("StockAdjRepProdCodeCombo"));
        StockAdjRepProdCodeCombo->setGeometry(QRect(660, 100, 141, 30));
        StockAdjRepProdCodeCombo->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        StockAdjRepProdCodeLabel = new QLabel(StockAdj);
        StockAdjRepProdCodeLabel->setObjectName(QStringLiteral("StockAdjRepProdCodeLabel"));
        StockAdjRepProdCodeLabel->setGeometry(QRect(520, 100, 131, 20));
        StockAdjRepProdCodeLabel->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        StockAdjRepProdCodeLabel->setAlignment(Qt::AlignCenter);
        StockAdjRepStartDateDateTimeEdit = new QDateTimeEdit(StockAdj);
        StockAdjRepStartDateDateTimeEdit->setObjectName(QStringLiteral("StockAdjRepStartDateDateTimeEdit"));
        StockAdjRepStartDateDateTimeEdit->setGeometry(QRect(340, 50, 201, 30));
        StockAdjRepStartDateDateTimeEdit->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        StockAdjRepStartDateDateTimeEdit->setDate(QDate(2020, 1, 1));
        StockAdjRepEndDateDateTimeEdit = new QDateTimeEdit(StockAdj);
        StockAdjRepEndDateDateTimeEdit->setObjectName(QStringLiteral("StockAdjRepEndDateDateTimeEdit"));
        StockAdjRepEndDateDateTimeEdit->setGeometry(QRect(660, 50, 201, 30));
        StockAdjRepEndDateDateTimeEdit->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        StockAdjRepEndDateDateTimeEdit->setDate(QDate(2020, 12, 31));
        StockAdjRepRunButton = new QPushButton(StockAdj);
        StockAdjRepRunButton->setObjectName(QStringLiteral("StockAdjRepRunButton"));
        StockAdjRepRunButton->setGeometry(QRect(920, 100, 141, 30));
        StockAdjRepRunButton->setStyleSheet(QLatin1String("background-color: rgb(0, 72, 119);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);"));
        StockAdjRepStartDateLabel = new QLabel(StockAdj);
        StockAdjRepStartDateLabel->setObjectName(QStringLiteral("StockAdjRepStartDateLabel"));
        StockAdjRepStartDateLabel->setGeometry(QRect(220, 50, 111, 20));
        StockAdjRepStartDateLabel->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        StockAdjRepStartDateLabel->setAlignment(Qt::AlignCenter);
        StockAdjRepAmendTypeLabel = new QLabel(StockAdj);
        StockAdjRepAmendTypeLabel->setObjectName(QStringLiteral("StockAdjRepAmendTypeLabel"));
        StockAdjRepAmendTypeLabel->setGeometry(QRect(100, 100, 171, 20));
        StockAdjRepAmendTypeLabel->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        StockAdjRepAmendTypeLabel->setAlignment(Qt::AlignCenter);
        StockAdjRepAmendTypeCombo = new QComboBox(StockAdj);
        StockAdjRepAmendTypeCombo->setObjectName(QStringLiteral("StockAdjRepAmendTypeCombo"));
        StockAdjRepAmendTypeCombo->setGeometry(QRect(270, 100, 141, 30));
        StockAdjRepAmendTypeCombo->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        ReportsStackedWidget->addWidget(StockAdj);
        ShrinkageReportTable = new QWidget();
        ShrinkageReportTable->setObjectName(QStringLiteral("ShrinkageReportTable"));
        ShrinkageReportTable->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        ShrinkageRepExportButton = new QPushButton(ShrinkageReportTable);
        ShrinkageRepExportButton->setObjectName(QStringLiteral("ShrinkageRepExportButton"));
        ShrinkageRepExportButton->setGeometry(QRect(320, 560, 141, 34));
        ShrinkageRepExportButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);\n"
""));
        ShrinkageRepCancelButton = new QPushButton(ShrinkageReportTable);
        ShrinkageRepCancelButton->setObjectName(QStringLiteral("ShrinkageRepCancelButton"));
        ShrinkageRepCancelButton->setGeometry(QRect(642, 560, 141, 34));
        ShrinkageRepCancelButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);\n"
""));
        ShrinkageRepTable = new QTableWidget(ShrinkageReportTable);
        if (ShrinkageRepTable->columnCount() < 3)
            ShrinkageRepTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        ShrinkageRepTable->setHorizontalHeaderItem(0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        ShrinkageRepTable->setHorizontalHeaderItem(1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        ShrinkageRepTable->setHorizontalHeaderItem(2, __qtablewidgetitem21);
        ShrinkageRepTable->setObjectName(QStringLiteral("ShrinkageRepTable"));
        ShrinkageRepTable->setGeometry(QRect(30, 80, 1071, 461));
        ShrinkageRepTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ShrinkageRepTable->setSortingEnabled(true);
        ShrinkageRepTitle = new QLabel(ShrinkageReportTable);
        ShrinkageRepTitle->setObjectName(QStringLiteral("ShrinkageRepTitle"));
        ShrinkageRepTitle->setGeometry(QRect(240, 0, 631, 31));
        ShrinkageRepTitle->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 75 16pt \"Verdana\";"));
        ShrinkageRepTitle->setAlignment(Qt::AlignCenter);
        ShrinkageRepStartDateLabel = new QLabel(ShrinkageReportTable);
        ShrinkageRepStartDateLabel->setObjectName(QStringLiteral("ShrinkageRepStartDateLabel"));
        ShrinkageRepStartDateLabel->setGeometry(QRect(210, 40, 121, 20));
        ShrinkageRepStartDateLabel->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ShrinkageRepStartDateLabel->setAlignment(Qt::AlignCenter);
        ShrinkageRepStartDateDateTimeEdit = new QDateTimeEdit(ShrinkageReportTable);
        ShrinkageRepStartDateDateTimeEdit->setObjectName(QStringLiteral("ShrinkageRepStartDateDateTimeEdit"));
        ShrinkageRepStartDateDateTimeEdit->setGeometry(QRect(350, 40, 201, 30));
        ShrinkageRepStartDateDateTimeEdit->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        ShrinkageRepStartDateDateTimeEdit->setDate(QDate(2020, 1, 1));
        ShrinkageRepEndDateLabel = new QLabel(ShrinkageReportTable);
        ShrinkageRepEndDateLabel->setObjectName(QStringLiteral("ShrinkageRepEndDateLabel"));
        ShrinkageRepEndDateLabel->setGeometry(QRect(570, 40, 121, 20));
        ShrinkageRepEndDateLabel->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ShrinkageRepEndDateLabel->setAlignment(Qt::AlignCenter);
        ShrinkageRepEndDateDateTimeEdit = new QDateTimeEdit(ShrinkageReportTable);
        ShrinkageRepEndDateDateTimeEdit->setObjectName(QStringLiteral("ShrinkageRepEndDateDateTimeEdit"));
        ShrinkageRepEndDateDateTimeEdit->setGeometry(QRect(680, 40, 201, 30));
        ShrinkageRepEndDateDateTimeEdit->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        ShrinkageRepEndDateDateTimeEdit->setDate(QDate(2020, 12, 31));
        ShrinkageRepRunButton = new QPushButton(ShrinkageReportTable);
        ShrinkageRepRunButton->setObjectName(QStringLiteral("ShrinkageRepRunButton"));
        ShrinkageRepRunButton->setGeometry(QRect(960, 40, 141, 30));
        ShrinkageRepRunButton->setStyleSheet(QLatin1String("background-color: rgb(0, 72, 119);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);"));
        ReportsStackedWidget->addWidget(ShrinkageReportTable);
        ExpenditureReportTable = new QWidget();
        ExpenditureReportTable->setObjectName(QStringLiteral("ExpenditureReportTable"));
        ExpenditureRepExportButton = new QPushButton(ExpenditureReportTable);
        ExpenditureRepExportButton->setObjectName(QStringLiteral("ExpenditureRepExportButton"));
        ExpenditureRepExportButton->setGeometry(QRect(320, 560, 141, 34));
        ExpenditureRepExportButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);\n"
""));
        ExpenditureRepCancelButton = new QPushButton(ExpenditureReportTable);
        ExpenditureRepCancelButton->setObjectName(QStringLiteral("ExpenditureRepCancelButton"));
        ExpenditureRepCancelButton->setGeometry(QRect(642, 560, 141, 34));
        ExpenditureRepCancelButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);\n"
""));
        ExpenditureRepTable = new QTableWidget(ExpenditureReportTable);
        if (ExpenditureRepTable->columnCount() < 4)
            ExpenditureRepTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        ExpenditureRepTable->setHorizontalHeaderItem(0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        ExpenditureRepTable->setHorizontalHeaderItem(1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        ExpenditureRepTable->setHorizontalHeaderItem(2, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        ExpenditureRepTable->setHorizontalHeaderItem(3, __qtablewidgetitem25);
        ExpenditureRepTable->setObjectName(QStringLiteral("ExpenditureRepTable"));
        ExpenditureRepTable->setGeometry(QRect(30, 80, 1071, 461));
        ExpenditureRepTable->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        ExpenditureRepTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ExpenditureRepTable->setSortingEnabled(true);
        ExpenditureRepTitle = new QLabel(ExpenditureReportTable);
        ExpenditureRepTitle->setObjectName(QStringLiteral("ExpenditureRepTitle"));
        ExpenditureRepTitle->setGeometry(QRect(250, 0, 631, 31));
        ExpenditureRepTitle->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 75 16pt \"Verdana\";"));
        ExpenditureRepTitle->setAlignment(Qt::AlignCenter);
        ExpenditureRepStartDateLabel = new QLabel(ExpenditureReportTable);
        ExpenditureRepStartDateLabel->setObjectName(QStringLiteral("ExpenditureRepStartDateLabel"));
        ExpenditureRepStartDateLabel->setGeometry(QRect(210, 40, 121, 20));
        ExpenditureRepStartDateLabel->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ExpenditureRepStartDateLabel->setAlignment(Qt::AlignCenter);
        ExpenditureRepStartDateDateTimeEdit = new QDateTimeEdit(ExpenditureReportTable);
        ExpenditureRepStartDateDateTimeEdit->setObjectName(QStringLiteral("ExpenditureRepStartDateDateTimeEdit"));
        ExpenditureRepStartDateDateTimeEdit->setGeometry(QRect(350, 40, 201, 30));
        ExpenditureRepStartDateDateTimeEdit->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        ExpenditureRepStartDateDateTimeEdit->setDate(QDate(2020, 1, 1));
        ExpenditureRepEndDateLabel = new QLabel(ExpenditureReportTable);
        ExpenditureRepEndDateLabel->setObjectName(QStringLiteral("ExpenditureRepEndDateLabel"));
        ExpenditureRepEndDateLabel->setGeometry(QRect(570, 40, 121, 20));
        ExpenditureRepEndDateLabel->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ExpenditureRepEndDateLabel->setAlignment(Qt::AlignCenter);
        ExpenditureRepEndDateDateTimeEdit = new QDateTimeEdit(ExpenditureReportTable);
        ExpenditureRepEndDateDateTimeEdit->setObjectName(QStringLiteral("ExpenditureRepEndDateDateTimeEdit"));
        ExpenditureRepEndDateDateTimeEdit->setGeometry(QRect(680, 40, 201, 30));
        ExpenditureRepEndDateDateTimeEdit->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        ExpenditureRepEndDateDateTimeEdit->setDate(QDate(2020, 12, 31));
        ExpenditureRepRunButton = new QPushButton(ExpenditureReportTable);
        ExpenditureRepRunButton->setObjectName(QStringLiteral("ExpenditureRepRunButton"));
        ExpenditureRepRunButton->setGeometry(QRect(960, 40, 141, 30));
        ExpenditureRepRunButton->setStyleSheet(QLatin1String("background-color: rgb(0, 72, 119);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);"));
        ReportsStackedWidget->addWidget(ExpenditureReportTable);
        SalesReportTab = new QWidget();
        SalesReportTab->setObjectName(QStringLiteral("SalesReportTab"));
        SalesRepExportButton = new QPushButton(SalesReportTab);
        SalesRepExportButton->setObjectName(QStringLiteral("SalesRepExportButton"));
        SalesRepExportButton->setGeometry(QRect(320, 560, 141, 34));
        SalesRepExportButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);\n"
""));
        SalesRepCancelButton = new QPushButton(SalesReportTab);
        SalesRepCancelButton->setObjectName(QStringLiteral("SalesRepCancelButton"));
        SalesRepCancelButton->setGeometry(QRect(642, 560, 141, 34));
        SalesRepCancelButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);\n"
""));
        SalesRepTable = new QTableWidget(SalesReportTab);
        if (SalesRepTable->columnCount() < 4)
            SalesRepTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        SalesRepTable->setHorizontalHeaderItem(0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        SalesRepTable->setHorizontalHeaderItem(1, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        SalesRepTable->setHorizontalHeaderItem(2, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        SalesRepTable->setHorizontalHeaderItem(3, __qtablewidgetitem29);
        SalesRepTable->setObjectName(QStringLiteral("SalesRepTable"));
        SalesRepTable->setGeometry(QRect(30, 80, 1071, 461));
        SalesRepTable->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        SalesRepTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        SalesRepTable->setSortingEnabled(true);
        SalesRepTitle = new QLabel(SalesReportTab);
        SalesRepTitle->setObjectName(QStringLiteral("SalesRepTitle"));
        SalesRepTitle->setGeometry(QRect(220, 0, 631, 31));
        SalesRepTitle->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 75 16pt \"Verdana\";"));
        SalesRepTitle->setAlignment(Qt::AlignCenter);
        SalesRepEndDateLabel = new QLabel(SalesReportTab);
        SalesRepEndDateLabel->setObjectName(QStringLiteral("SalesRepEndDateLabel"));
        SalesRepEndDateLabel->setGeometry(QRect(339, 40, 91, 20));
        SalesRepEndDateLabel->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        SalesRepEndDateLabel->setAlignment(Qt::AlignCenter);
        SalesRepEndDateDateTimeEdit = new QDateTimeEdit(SalesReportTab);
        SalesRepEndDateDateTimeEdit->setObjectName(QStringLiteral("SalesRepEndDateDateTimeEdit"));
        SalesRepEndDateDateTimeEdit->setGeometry(QRect(460, 40, 201, 30));
        SalesRepEndDateDateTimeEdit->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        SalesRepEndDateDateTimeEdit->setDate(QDate(2020, 12, 31));
        SalesRepStartDateDateTimeEdit = new QDateTimeEdit(SalesReportTab);
        SalesRepStartDateDateTimeEdit->setObjectName(QStringLiteral("SalesRepStartDateDateTimeEdit"));
        SalesRepStartDateDateTimeEdit->setGeometry(QRect(130, 40, 201, 30));
        SalesRepStartDateDateTimeEdit->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        SalesRepStartDateDateTimeEdit->setDate(QDate(2020, 1, 1));
        SalesRepStartDateLabel = new QLabel(SalesReportTab);
        SalesRepStartDateLabel->setObjectName(QStringLiteral("SalesRepStartDateLabel"));
        SalesRepStartDateLabel->setGeometry(QRect(20, 40, 101, 20));
        SalesRepStartDateLabel->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        SalesRepStartDateLabel->setAlignment(Qt::AlignCenter);
        SalesRepRunButton = new QPushButton(SalesReportTab);
        SalesRepRunButton->setObjectName(QStringLiteral("SalesRepRunButton"));
        SalesRepRunButton->setGeometry(QRect(960, 40, 141, 30));
        SalesRepRunButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);\n"
""));
        SalesRepDepartmentCombo = new QComboBox(SalesReportTab);
        SalesRepDepartmentCombo->setObjectName(QStringLiteral("SalesRepDepartmentCombo"));
        SalesRepDepartmentCombo->setGeometry(QRect(780, 40, 141, 30));
        SalesRepDepartmentCombo->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        SalesRepDepartmentLabel = new QLabel(SalesReportTab);
        SalesRepDepartmentLabel->setObjectName(QStringLiteral("SalesRepDepartmentLabel"));
        SalesRepDepartmentLabel->setGeometry(QRect(670, 40, 101, 20));
        SalesRepDepartmentLabel->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        SalesRepDepartmentLabel->setAlignment(Qt::AlignCenter);
        ReportsStackedWidget->addWidget(SalesReportTab);
        StockTakeReportTab = new QWidget();
        StockTakeReportTab->setObjectName(QStringLiteral("StockTakeReportTab"));
        StockTakeRepTitle = new QLabel(StockTakeReportTab);
        StockTakeRepTitle->setObjectName(QStringLiteral("StockTakeRepTitle"));
        StockTakeRepTitle->setGeometry(QRect(220, 20, 631, 31));
        StockTakeRepTitle->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 75 16pt \"Verdana\";"));
        StockTakeRepTitle->setAlignment(Qt::AlignCenter);
        StockTakeRepTable = new QTableWidget(StockTakeReportTab);
        if (StockTakeRepTable->columnCount() < 4)
            StockTakeRepTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        StockTakeRepTable->setHorizontalHeaderItem(0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        StockTakeRepTable->setHorizontalHeaderItem(1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        StockTakeRepTable->setHorizontalHeaderItem(2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        StockTakeRepTable->setHorizontalHeaderItem(3, __qtablewidgetitem33);
        StockTakeRepTable->setObjectName(QStringLiteral("StockTakeRepTable"));
        StockTakeRepTable->setGeometry(QRect(30, 80, 1071, 461));
        StockTakeRepTable->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        StockTakeRepTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        StockTakeRepTable->setSortingEnabled(true);
        StockTakeRepExportButton = new QPushButton(StockTakeReportTab);
        StockTakeRepExportButton->setObjectName(QStringLiteral("StockTakeRepExportButton"));
        StockTakeRepExportButton->setGeometry(QRect(320, 560, 141, 34));
        StockTakeRepExportButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);"));
        StockTakeRepCancelButton = new QPushButton(StockTakeReportTab);
        StockTakeRepCancelButton->setObjectName(QStringLiteral("StockTakeRepCancelButton"));
        StockTakeRepCancelButton->setGeometry(QRect(642, 560, 141, 34));
        StockTakeRepCancelButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);"));
        ReportsStackedWidget->addWidget(StockTakeReportTab);
        AdminTabWidget->addTab(ReportTab, QString());
        ManageUsersTab = new QWidget();
        ManageUsersTab->setObjectName(QStringLiteral("ManageUsersTab"));
        ManageUsersStackedWidget = new QStackedWidget(ManageUsersTab);
        ManageUsersStackedWidget->setObjectName(QStringLiteral("ManageUsersStackedWidget"));
        ManageUsersStackedWidget->setGeometry(QRect(0, 0, 1200, 640));
        ManageUsersStackedWidget->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        ManageUsersWidget = new QWidget();
        ManageUsersWidget->setObjectName(QStringLiteral("ManageUsersWidget"));
        ManageUsersFrame = new QFrame(ManageUsersWidget);
        ManageUsersFrame->setObjectName(QStringLiteral("ManageUsersFrame"));
        ManageUsersFrame->setGeometry(QRect(20, 60, 1141, 551));
        ManageUsersFrame->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageUsersFrame->setFrameShape(QFrame::StyledPanel);
        ManageUsersFrame->setFrameShadow(QFrame::Raised);
        usr_3 = new QLabel(ManageUsersFrame);
        usr_3->setObjectName(QStringLiteral("usr_3"));
        usr_3->setGeometry(QRect(760, 20, 321, 30));
        usr_3->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageUsersUsernameLineEdit = new QLineEdit(ManageUsersFrame);
        ManageUsersUsernameLineEdit->setObjectName(QStringLiteral("ManageUsersUsernameLineEdit"));
        ManageUsersUsernameLineEdit->setEnabled(false);
        ManageUsersUsernameLineEdit->setGeometry(QRect(760, 50, 321, 30));
        ManageUsersUsernameLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageUsersForenameLineEdit = new QLineEdit(ManageUsersFrame);
        ManageUsersForenameLineEdit->setObjectName(QStringLiteral("ManageUsersForenameLineEdit"));
        ManageUsersForenameLineEdit->setEnabled(false);
        ManageUsersForenameLineEdit->setGeometry(QRect(760, 120, 321, 30));
        ManageUsersForenameLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        fore_3 = new QLabel(ManageUsersFrame);
        fore_3->setObjectName(QStringLiteral("fore_3"));
        fore_3->setGeometry(QRect(760, 80, 321, 30));
        fore_3->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageUsersSurnameLineEdit = new QLineEdit(ManageUsersFrame);
        ManageUsersSurnameLineEdit->setObjectName(QStringLiteral("ManageUsersSurnameLineEdit"));
        ManageUsersSurnameLineEdit->setEnabled(false);
        ManageUsersSurnameLineEdit->setGeometry(QRect(760, 190, 321, 30));
        ManageUsersSurnameLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_34 = new QLabel(ManageUsersFrame);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(760, 150, 321, 30));
        label_34->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageUsersEmailLineEdit = new QLineEdit(ManageUsersFrame);
        ManageUsersEmailLineEdit->setObjectName(QStringLiteral("ManageUsersEmailLineEdit"));
        ManageUsersEmailLineEdit->setEnabled(false);
        ManageUsersEmailLineEdit->setGeometry(QRect(760, 260, 321, 30));
        ManageUsersEmailLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_35 = new QLabel(ManageUsersFrame);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(760, 220, 321, 30));
        label_35->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_36 = new QLabel(ManageUsersFrame);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(760, 290, 321, 30));
        label_36->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageUsersUpdateButton = new QPushButton(ManageUsersFrame);
        ManageUsersUpdateButton->setObjectName(QStringLiteral("ManageUsersUpdateButton"));
        ManageUsersUpdateButton->setGeometry(QRect(760, 500, 141, 34));
        ManageUsersUpdateButton->setStyleSheet(QLatin1String("font: 12pt \"Verdana\";\n"
"background-color: rgb(231, 0, 90);\n"
"color: rgb(255, 255, 255);"));
        ManageUsersCancelButton = new QPushButton(ManageUsersFrame);
        ManageUsersCancelButton->setObjectName(QStringLiteral("ManageUsersCancelButton"));
        ManageUsersCancelButton->setGeometry(QRect(930, 500, 141, 34));
        ManageUsersCancelButton->setStyleSheet(QLatin1String("font: 12pt \"Verdana\";\n"
"background-color: rgb(231, 0, 90);\n"
"color: rgb(255, 255, 255);"));
        label_37 = new QLabel(ManageUsersFrame);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(930, 370, 100, 30));
        label_37->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageUsersUserTypeCombo = new QComboBox(ManageUsersFrame);
        ManageUsersUserTypeCombo->setObjectName(QStringLiteral("ManageUsersUserTypeCombo"));
        ManageUsersUserTypeCombo->setEnabled(false);
        ManageUsersUserTypeCombo->setGeometry(QRect(930, 410, 141, 30));
        ManageUsersUserTypeCombo->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageUsersVATTypeCombo = new QComboBox(ManageUsersFrame);
        ManageUsersVATTypeCombo->addItem(QString());
        ManageUsersVATTypeCombo->addItem(QString());
        ManageUsersVATTypeCombo->setObjectName(QStringLiteral("ManageUsersVATTypeCombo"));
        ManageUsersVATTypeCombo->setEnabled(false);
        ManageUsersVATTypeCombo->setGeometry(QRect(760, 410, 141, 30));
        ManageUsersVATTypeCombo->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_38 = new QLabel(ManageUsersFrame);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(760, 370, 121, 30));
        label_38->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageUsersTable = new QTableWidget(ManageUsersFrame);
        if (ManageUsersTable->columnCount() < 7)
            ManageUsersTable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        ManageUsersTable->setHorizontalHeaderItem(0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        ManageUsersTable->setHorizontalHeaderItem(1, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        ManageUsersTable->setHorizontalHeaderItem(2, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        ManageUsersTable->setHorizontalHeaderItem(3, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        ManageUsersTable->setHorizontalHeaderItem(4, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        ManageUsersTable->setHorizontalHeaderItem(5, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        ManageUsersTable->setHorizontalHeaderItem(6, __qtablewidgetitem40);
        ManageUsersTable->setObjectName(QStringLiteral("ManageUsersTable"));
        ManageUsersTable->setGeometry(QRect(10, 10, 721, 531));
        ManageUsersTable->setStyleSheet(QStringLiteral("font: 10pt \"Verdana\";"));
        ManageUsersTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ManageUsersTable->setSortingEnabled(true);
        ManageUsersChargeCodeCombo = new QComboBox(ManageUsersFrame);
        ManageUsersChargeCodeCombo->setObjectName(QStringLiteral("ManageUsersChargeCodeCombo"));
        ManageUsersChargeCodeCombo->setEnabled(false);
        ManageUsersChargeCodeCombo->setGeometry(QRect(760, 330, 321, 30));
        ManageUsersChargeCodeCombo->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageUsersAddUserButton = new QPushButton(ManageUsersFrame);
        ManageUsersAddUserButton->setObjectName(QStringLiteral("ManageUsersAddUserButton"));
        ManageUsersAddUserButton->setGeometry(QRect(760, 460, 311, 34));
        ManageUsersAddUserButton->setStyleSheet(QLatin1String("background-color: rgb(0, 72, 119);\n"
"font: 12pt \"Verdana\";\n"
"color: rgb(255, 255, 255);"));
        ManageUsersSearchLineEdit = new QLineEdit(ManageUsersWidget);
        ManageUsersSearchLineEdit->setObjectName(QStringLiteral("ManageUsersSearchLineEdit"));
        ManageUsersSearchLineEdit->setGeometry(QRect(20, 10, 1141, 41));
        ManageUsersSearchLineEdit->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        ManageUsersSearchButton = new QPushButton(ManageUsersWidget);
        ManageUsersSearchButton->setObjectName(QStringLiteral("ManageUsersSearchButton"));
        ManageUsersSearchButton->setGeometry(QRect(1120, 10, 41, 41));
        ManageUsersSearchButton->setStyleSheet(QLatin1String("background-color: rgb(0, 72, 119);\n"
"font: 8pt \"Verdana\";"));
        ManageUsersSearchButton->setIcon(icon);
        ManageUsersStackedWidget->addWidget(ManageUsersWidget);
        AddUserWidget = new QWidget();
        AddUserWidget->setObjectName(QStringLiteral("AddUserWidget"));
        label_49 = new QLabel(AddUserWidget);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(330, 30, 511, 31));
        label_49->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 75 16pt \"Verdana\";"));
        label_49->setAlignment(Qt::AlignCenter);
        AddUserForenameLineEdit = new QLineEdit(AddUserWidget);
        AddUserForenameLineEdit->setObjectName(QStringLiteral("AddUserForenameLineEdit"));
        AddUserForenameLineEdit->setGeometry(QRect(180, 220, 321, 30));
        AddUserForenameLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddUserPasswordLineEdit = new QLineEdit(AddUserWidget);
        AddUserPasswordLineEdit->setObjectName(QStringLiteral("AddUserPasswordLineEdit"));
        AddUserPasswordLineEdit->setGeometry(QRect(670, 140, 321, 30));
        AddUserPasswordLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddUserPasswordLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        label_50 = new QLabel(AddUserWidget);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(670, 190, 131, 19));
        label_50->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_51 = new QLabel(AddUserWidget);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setGeometry(QRect(670, 110, 131, 19));
        label_51->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_52 = new QLabel(AddUserWidget);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(670, 350, 211, 19));
        label_52->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_53 = new QLabel(AddUserWidget);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(670, 270, 131, 19));
        label_53->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddUserSurnameLineEdit = new QLineEdit(AddUserWidget);
        AddUserSurnameLineEdit->setObjectName(QStringLiteral("AddUserSurnameLineEdit"));
        AddUserSurnameLineEdit->setGeometry(QRect(670, 220, 321, 30));
        AddUserSurnameLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddUserSurnameLineEdit->setEchoMode(QLineEdit::Normal);
        label_54 = new QLabel(AddUserWidget);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setGeometry(QRect(180, 110, 101, 19));
        label_54->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_55 = new QLabel(AddUserWidget);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setGeometry(QRect(180, 270, 101, 19));
        label_55->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddUserEmailLineEdit = new QLineEdit(AddUserWidget);
        AddUserEmailLineEdit->setObjectName(QStringLiteral("AddUserEmailLineEdit"));
        AddUserEmailLineEdit->setGeometry(QRect(180, 300, 321, 30));
        AddUserEmailLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddUserNonVATComboBox = new QComboBox(AddUserWidget);
        AddUserNonVATComboBox->addItem(QString());
        AddUserNonVATComboBox->addItem(QString());
        AddUserNonVATComboBox->setObjectName(QStringLiteral("AddUserNonVATComboBox"));
        AddUserNonVATComboBox->setGeometry(QRect(670, 380, 321, 30));
        AddUserNonVATComboBox->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddUserAddButton = new QPushButton(AddUserWidget);
        AddUserAddButton->setObjectName(QStringLiteral("AddUserAddButton"));
        AddUserAddButton->setGeometry(QRect(410, 450, 141, 34));
        AddUserAddButton->setStyleSheet(QLatin1String("font: 12pt \"Verdana\";\n"
"background-color: rgb(232, 0, 92);\n"
"color: rgb(255, 255, 255);"));
        AddUserUsernameLineEdit = new QLineEdit(AddUserWidget);
        AddUserUsernameLineEdit->setObjectName(QStringLiteral("AddUserUsernameLineEdit"));
        AddUserUsernameLineEdit->setGeometry(QRect(180, 140, 321, 30));
        AddUserUsernameLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddUserChargeCodeComboBox = new QComboBox(AddUserWidget);
        AddUserChargeCodeComboBox->setObjectName(QStringLiteral("AddUserChargeCodeComboBox"));
        AddUserChargeCodeComboBox->setGeometry(QRect(670, 300, 321, 30));
        AddUserChargeCodeComboBox->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddUserCancelButton = new QPushButton(AddUserWidget);
        AddUserCancelButton->setObjectName(QStringLiteral("AddUserCancelButton"));
        AddUserCancelButton->setGeometry(QRect(600, 450, 141, 34));
        AddUserCancelButton->setStyleSheet(QLatin1String("font: 12pt \"Verdana\";\n"
"background-color: rgb(232, 0, 92);\n"
"color: rgb(255, 255, 255);"));
        label_56 = new QLabel(AddUserWidget);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setGeometry(QRect(180, 190, 101, 19));
        label_56->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_57 = new QLabel(AddUserWidget);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setGeometry(QRect(180, 350, 101, 19));
        label_57->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        AddUserUserTypeComboBox = new QComboBox(AddUserWidget);
        AddUserUserTypeComboBox->setObjectName(QStringLiteral("AddUserUserTypeComboBox"));
        AddUserUserTypeComboBox->setGeometry(QRect(180, 380, 321, 30));
        AddUserUserTypeComboBox->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        ManageUsersStackedWidget->addWidget(AddUserWidget);
        AdminTabWidget->addTab(ManageUsersTab, QString());
        ShopTab = new QWidget();
        ShopTab->setObjectName(QStringLiteral("ShopTab"));
        ShopTabStartShoppingButton = new QPushButton(ShopTab);
        ShopTabStartShoppingButton->setObjectName(QStringLiteral("ShopTabStartShoppingButton"));
        ShopTabStartShoppingButton->setGeometry(QRect(460, 120, 250, 250));
        ShopTabStartShoppingButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Verdana\";"));
        AdminTabWidget->addTab(ShopTab, QString());
        UIStackWidget->addWidget(AdminUI);
        CustomerUI = new QWidget();
        CustomerUI->setObjectName(QStringLiteral("CustomerUI"));
        CustomerStackedWidget = new QStackedWidget(CustomerUI);
        CustomerStackedWidget->setObjectName(QStringLiteral("CustomerStackedWidget"));
        CustomerStackedWidget->setGeometry(QRect(0, 0, 1200, 660));
        CustomerHomeWidget = new QWidget();
        CustomerHomeWidget->setObjectName(QStringLiteral("CustomerHomeWidget"));
        CustomerLogOutButton = new QPushButton(CustomerHomeWidget);
        CustomerLogOutButton->setObjectName(QStringLiteral("CustomerLogOutButton"));
        CustomerLogOutButton->setGeometry(QRect(560, 150, 250, 250));
        CustomerLogOutButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Verdana\";"));
        CustomerHomeUsernameLabel = new QLabel(CustomerHomeWidget);
        CustomerHomeUsernameLabel->setObjectName(QStringLiteral("CustomerHomeUsernameLabel"));
        CustomerHomeUsernameLabel->setGeometry(QRect(530, 40, 311, 51));
        CustomerHomeUsernameLabel->setStyleSheet(QStringLiteral("font: 16pt \"Verdana\";"));
        CustomerShopButton = new QPushButton(CustomerHomeWidget);
        CustomerShopButton->setObjectName(QStringLiteral("CustomerShopButton"));
        CustomerShopButton->setGeometry(QRect(250, 150, 250, 250));
        CustomerShopButton->setStyleSheet(QLatin1String("background-color: rgb(232, 0, 90);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"Verdana\";"));
        label_18 = new QLabel(CustomerHomeWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(370, 40, 161, 51));
        label_18->setStyleSheet(QStringLiteral("font: 16pt \"Verdana\";"));
        CustomerStackedWidget->addWidget(CustomerHomeWidget);
        CustomerShopWidget = new QWidget();
        CustomerShopWidget->setObjectName(QStringLiteral("CustomerShopWidget"));
        CustomerShopProdDescLineEdit = new QLineEdit(CustomerShopWidget);
        CustomerShopProdDescLineEdit->setObjectName(QStringLiteral("CustomerShopProdDescLineEdit"));
        CustomerShopProdDescLineEdit->setEnabled(false);
        CustomerShopProdDescLineEdit->setGeometry(QRect(740, 260, 321, 30));
        CustomerShopProdDescLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        CustomerShopSearchButton = new QPushButton(CustomerShopWidget);
        CustomerShopSearchButton->setObjectName(QStringLiteral("CustomerShopSearchButton"));
        CustomerShopSearchButton->setGeometry(QRect(1120, 70, 51, 41));
        CustomerShopSearchButton->setStyleSheet(QStringLiteral("background-color: rgb(0, 72, 119);"));
        CustomerShopSearchButton->setIcon(icon);
        CustomerShopAddButton = new QPushButton(CustomerShopWidget);
        CustomerShopAddButton->setObjectName(QStringLiteral("CustomerShopAddButton"));
        CustomerShopAddButton->setEnabled(false);
        CustomerShopAddButton->setGeometry(QRect(740, 450, 141, 34));
        CustomerShopAddButton->setStyleSheet(QLatin1String("font: 12pt \"Verdana\";\n"
"background-color: rgb(232, 0, 92);\n"
"color: rgb(255, 255, 255);"));
        label_14 = new QLabel(CustomerShopWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(740, 230, 181, 19));
        label_14->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        CustomerShopRemoveButton = new QPushButton(CustomerShopWidget);
        CustomerShopRemoveButton->setObjectName(QStringLiteral("CustomerShopRemoveButton"));
        CustomerShopRemoveButton->setEnabled(false);
        CustomerShopRemoveButton->setGeometry(QRect(920, 450, 141, 34));
        CustomerShopRemoveButton->setStyleSheet(QLatin1String("font: 12pt \"Verdana\";\n"
"background-color: rgb(232, 0, 92);\n"
"color: rgb(255, 255, 255);"));
        label_12 = new QLabel(CustomerShopWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(740, 370, 181, 19));
        label_12->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        CustomerShopSearchLineEdit = new QLineEdit(CustomerShopWidget);
        CustomerShopSearchLineEdit->setObjectName(QStringLiteral("CustomerShopSearchLineEdit"));
        CustomerShopSearchLineEdit->setGeometry(QRect(600, 70, 571, 41));
        CustomerShopSearchLineEdit->setStyleSheet(QLatin1String("font: 12pt \"Verdana\";\n"
"color: rgb(150, 150, 150);"));
        CustomerShopProdCodeLineEdit = new QLineEdit(CustomerShopWidget);
        CustomerShopProdCodeLineEdit->setObjectName(QStringLiteral("CustomerShopProdCodeLineEdit"));
        CustomerShopProdCodeLineEdit->setEnabled(false);
        CustomerShopProdCodeLineEdit->setGeometry(QRect(740, 180, 321, 30));
        CustomerShopProdCodeLineEdit->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_11 = new QLabel(CustomerShopWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(740, 150, 321, 20));
        label_11->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        label_13 = new QLabel(CustomerShopWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(240, 30, 101, 31));
        label_13->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 75 16pt \"Verdana\";"));
        CustomerShopCheckoutButton = new QPushButton(CustomerShopWidget);
        CustomerShopCheckoutButton->setObjectName(QStringLiteral("CustomerShopCheckoutButton"));
        CustomerShopCheckoutButton->setEnabled(false);
        CustomerShopCheckoutButton->setGeometry(QRect(740, 500, 321, 34));
        CustomerShopCheckoutButton->setStyleSheet(QLatin1String("font: 12pt \"Verdana\";\n"
"background-color: rgb(232, 0, 92);\n"
"color: rgb(255, 255, 255);"));
        CustomerShopBasketTable = new QTableWidget(CustomerShopWidget);
        if (CustomerShopBasketTable->columnCount() < 3)
            CustomerShopBasketTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        CustomerShopBasketTable->setHorizontalHeaderItem(0, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        CustomerShopBasketTable->setHorizontalHeaderItem(1, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        CustomerShopBasketTable->setHorizontalHeaderItem(2, __qtablewidgetitem43);
        CustomerShopBasketTable->setObjectName(QStringLiteral("CustomerShopBasketTable"));
        CustomerShopBasketTable->setGeometry(QRect(20, 70, 561, 501));
        CustomerShopBasketTable->setStyleSheet(QStringLiteral("font: 8pt \"Verdana\";"));
        CustomerShopBasketTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        CustomerShopCancelButton = new QPushButton(CustomerShopWidget);
        CustomerShopCancelButton->setObjectName(QStringLiteral("CustomerShopCancelButton"));
        CustomerShopCancelButton->setGeometry(QRect(740, 540, 321, 34));
        CustomerShopCancelButton->setStyleSheet(QLatin1String("font: 12pt \"Verdana\";\n"
"background-color: rgb(232, 0, 92);\n"
"color: rgb(255, 255, 255);"));
        CustomerShopImageLabel = new QLabel(CustomerShopWidget);
        CustomerShopImageLabel->setObjectName(QStringLiteral("CustomerShopImageLabel"));
        CustomerShopImageLabel->setGeometry(QRect(600, 160, 121, 121));
        CustomerShopImageLabel->setAutoFillBackground(false);
        CustomerShopImageLabel->setStyleSheet(QStringLiteral(""));
        CustomerShopImageLabel->setScaledContents(true);
        label_15 = new QLabel(CustomerShopWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(840, 30, 61, 31));
        label_15->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 75 16pt \"Verdana\";"));
        label_16 = new QLabel(CustomerShopWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(740, 300, 181, 19));
        label_16->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        CustomerShopQuantityAvailablecLineEdit = new QLineEdit(CustomerShopWidget);
        CustomerShopQuantityAvailablecLineEdit->setObjectName(QStringLiteral("CustomerShopQuantityAvailablecLineEdit"));
        CustomerShopQuantityAvailablecLineEdit->setEnabled(false);
        CustomerShopQuantityAvailablecLineEdit->setGeometry(QRect(740, 330, 321, 30));
        CustomerShopQuantitySpinBox = new QSpinBox(CustomerShopWidget);
        CustomerShopQuantitySpinBox->setObjectName(QStringLiteral("CustomerShopQuantitySpinBox"));
        CustomerShopQuantitySpinBox->setGeometry(QRect(740, 400, 321, 31));
        CustomerShopQuantitySpinBox->setStyleSheet(QStringLiteral("font: 12pt \"Verdana\";"));
        CustomerShopQuantitySpinBox->setMinimum(1);
        CustomerStackedWidget->addWidget(CustomerShopWidget);
        CustomerShopSearchLineEdit->raise();
        CustomerShopProdDescLineEdit->raise();
        CustomerShopSearchButton->raise();
        CustomerShopAddButton->raise();
        label_14->raise();
        CustomerShopRemoveButton->raise();
        label_12->raise();
        CustomerShopProdCodeLineEdit->raise();
        label_11->raise();
        label_13->raise();
        CustomerShopCheckoutButton->raise();
        CustomerShopBasketTable->raise();
        CustomerShopCancelButton->raise();
        CustomerShopImageLabel->raise();
        label_15->raise();
        label_16->raise();
        CustomerShopQuantityAvailablecLineEdit->raise();
        CustomerShopQuantitySpinBox->raise();
        UIStackWidget->addWidget(CustomerUI);
        label = new QLabel(Interface);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1200, 140));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/img/ntu-logo.jpg")));
        label->setScaledContents(false);
        UserInterface->setCentralWidget(Interface);

        retranslateUi(UserInterface);

        UIStackWidget->setCurrentIndex(1);
        AdminTabWidget->setCurrentIndex(3);
        ManageStockStackedWidget->setCurrentIndex(0);
        ReportsStackedWidget->setCurrentIndex(1);
        ManageUsersStackedWidget->setCurrentIndex(0);
        CustomerStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(UserInterface);
    } // setupUi

    void retranslateUi(QMainWindow *UserInterface)
    {
        UserInterface->setWindowTitle(QApplication::translate("UserInterface", "Stores Management", nullptr));
        label_2->setText(QString());
#ifndef QT_NO_WHATSTHIS
        LoginRegisterButton->setWhatsThis(QApplication::translate("UserInterface", "<html><head/><body><p>font: 12pt &quot;Verdana&quot;;</p><p>selection-background-color: rgb(232, 0, 52);</p><p>color: rgb(0, 72, 119);</p><p>background-color: rgb(228, 228, 228);</p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        LoginRegisterButton->setText(QApplication::translate("UserInterface", "Register Here", nullptr));
        header_lbl_3->setText(QApplication::translate("UserInterface", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; color:#030303;\">NTU Single sign-on</span></p></body></html>", nullptr));
        LoginButton->setText(QApplication::translate("UserInterface", "LOGIN", nullptr));
        pass_lbl_3->setText(QApplication::translate("UserInterface", "Password:", nullptr));
        usr_lbl_3->setText(QApplication::translate("UserInterface", "Username:", nullptr));
        label_41->setText(QApplication::translate("UserInterface", "Username:", nullptr));
        RegisterUsernameLineEdit->setInputMask(QString());
        RegisterUsernameLineEdit->setText(QString());
        label_42->setText(QApplication::translate("UserInterface", "Password:", nullptr));
        label_43->setText(QApplication::translate("UserInterface", "Register", nullptr));
        label_44->setText(QApplication::translate("UserInterface", "Surname:", nullptr));
        label_45->setText(QApplication::translate("UserInterface", "Forename:", nullptr));
        RegisterForenameLineEdit->setInputMask(QString());
        RegisterForenameLineEdit->setText(QString());
        RegisterEmailLineEdit->setInputMask(QString());
        RegisterEmailLineEdit->setText(QString());
        label_46->setText(QApplication::translate("UserInterface", "Charge Code:", nullptr));
        label_47->setText(QApplication::translate("UserInterface", "Email:", nullptr));
        RegisterNonVATComboBox->setItemText(0, QApplication::translate("UserInterface", "No", nullptr));
        RegisterNonVATComboBox->setItemText(1, QApplication::translate("UserInterface", "Yes", nullptr));

        label_48->setText(QApplication::translate("UserInterface", "Non-VAT User:", nullptr));
        RegisterRegisterButton->setText(QApplication::translate("UserInterface", "Register", nullptr));
        RegisterCancelButton->setText(QApplication::translate("UserInterface", "Cancel", nullptr));
        StockTakeButton->setText(QApplication::translate("UserInterface", "Stock Take", nullptr));
        LogOutButton->setText(QApplication::translate("UserInterface", "Log Out", nullptr));
        ReportingButton->setText(QApplication::translate("UserInterface", "Reporting", nullptr));
        ManageUsersButton->setText(QApplication::translate("UserInterface", "Manage Users", nullptr));
        ShopButton->setText(QApplication::translate("UserInterface", "Shop", nullptr));
        ManageStockButton->setText(QApplication::translate("UserInterface", "Manage Stock", nullptr));
        AdminTabWidget->setTabText(AdminTabWidget->indexOf(HomeTab), QApplication::translate("UserInterface", "Home", nullptr));
        lbldec->setText(QApplication::translate("UserInterface", "Product Description:", nullptr));
        lblStock->setText(QApplication::translate("UserInterface", "Stock Level:", nullptr));
        label_4->setText(QApplication::translate("UserInterface", "Unit Price:", nullptr));
        label_5->setText(QApplication::translate("UserInterface", "Low Stock Level:", nullptr));
        label_6->setText(QApplication::translate("UserInterface", "VAT Percentage:", nullptr));
        ManageStockUpdateButton->setText(QApplication::translate("UserInterface", "Update", nullptr));
        ManageStockCancelButton->setText(QApplication::translate("UserInterface", "Cancel", nullptr));
        QTableWidgetItem *___qtablewidgetitem = ManageStockTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("UserInterface", "Product Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = ManageStockTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("UserInterface", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = ManageStockTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("UserInterface", "Case Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = ManageStockTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("UserInterface", "Unit Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = ManageStockTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("UserInterface", "Stock Level", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = ManageStockTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("UserInterface", "Low Stock Level", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = ManageStockTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("UserInterface", "VAT Percentage", nullptr));
        label_7->setText(QApplication::translate("UserInterface", "Case Quantity:", nullptr));
        lblStock_2->setText(QApplication::translate("UserInterface", "Product Code:", nullptr));
        ManageStockAddProductButton->setText(QApplication::translate("UserInterface", "Add Product", nullptr));
        ManageStockAddStockButton->setText(QApplication::translate("UserInterface", "Add Stock", nullptr));
        ManageStockSearchLineEdit->setPlaceholderText(QApplication::translate("UserInterface", "What do you want to search for?", nullptr));
        ManageStockSearchButton->setText(QString());
        label_30->setText(QApplication::translate("UserInterface", "Case Quantity:", nullptr));
        AddProductProdCodeLineEdit->setInputMask(QString());
        AddProductProdCodeLineEdit->setText(QString());
        label_27->setText(QApplication::translate("UserInterface", "Stock Level:", nullptr));
        label_21->setText(QApplication::translate("UserInterface", "Add Product", nullptr));
        label_23->setText(QApplication::translate("UserInterface", "Product Description:", nullptr));
        label_29->setText(QApplication::translate("UserInterface", "VAT Percentage:", nullptr));
        AddProductAddButton->setText(QApplication::translate("UserInterface", "Add Product", nullptr));
        label_26->setText(QApplication::translate("UserInterface", "Unit Price:", nullptr));
        label_28->setText(QApplication::translate("UserInterface", "Low Stock Level:", nullptr));
        label_22->setText(QApplication::translate("UserInterface", "Product Code:", nullptr));
        AddProductCancelButton->setText(QApplication::translate("UserInterface", "Cancel", nullptr));
        label_58->setText(QApplication::translate("UserInterface", "Image:", nullptr));
        AddProductImageLineEdit->setStyleSheet(QApplication::translate("UserInterface", "font: 12pt \"Verdana\";", nullptr));
        label_24->setText(QApplication::translate("UserInterface", "Add Stock", nullptr));
        AddStockProdCodeLineEdit->setInputMask(QString());
        AddStockProdCodeLineEdit->setText(QString());
        label_25->setText(QApplication::translate("UserInterface", "Product Code:", nullptr));
        label_31->setText(QApplication::translate("UserInterface", "Current Stock Level:", nullptr));
        AddStockStockLevelLineEdit->setInputMask(QString());
        AddStockStockLevelLineEdit->setText(QString());
        label_32->setText(QApplication::translate("UserInterface", "Cases to add:", nullptr));
        label_33->setText(QApplication::translate("UserInterface", "New Stock Level:", nullptr));
        AddStockNewStockLevelLineEdit->setInputMask(QString());
        AddStockNewStockLevelLineEdit->setText(QString());
        label_39->setText(QApplication::translate("UserInterface", "Case Quantity:", nullptr));
        AddStockCaseQuantityLineEdit->setInputMask(QString());
        AddStockCaseQuantityLineEdit->setText(QString());
        AddStockCancelButton->setText(QApplication::translate("UserInterface", "Cancel", nullptr));
        AddStockConfirmButton->setText(QApplication::translate("UserInterface", "Confirm", nullptr));
        label_40->setText(QApplication::translate("UserInterface", "Product Description:", nullptr));
        AddStockProdDescLineEdit->setInputMask(QString());
        AddStockProdDescLineEdit->setText(QString());
        AdminTabWidget->setTabText(AdminTabWidget->indexOf(ManageStockTab), QApplication::translate("UserInterface", "Manage Stock", nullptr));
        StockTakeDescriptionLabel->setText(QApplication::translate("UserInterface", "Product Description", nullptr));
        StockTakeCurrentStockLevelLabel->setText(QApplication::translate("UserInterface", "Current Stock Level", nullptr));
        StockTakeUpdateButton->setText(QApplication::translate("UserInterface", "Update", nullptr));
        StockTakeNextButton->setText(QApplication::translate("UserInterface", "Next", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = StockTakeTable->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("UserInterface", "Product Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = StockTakeTable->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("UserInterface", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = StockTakeTable->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("UserInterface", "Stock Level", nullptr));
        StockTakeProdCodeLabel->setText(QApplication::translate("UserInterface", "Product Code", nullptr));
        StockTakeStockLevelLabel->setText(QApplication::translate("UserInterface", "New Stock Level", nullptr));
        StockTakeFinishButton->setText(QApplication::translate("UserInterface", "Finish", nullptr));
        AdminTabWidget->setTabText(AdminTabWidget->indexOf(StockTakeTab), QApplication::translate("UserInterface", "Stock Take", nullptr));
        ShrinkageRepButton->setText(QApplication::translate("UserInterface", "Shrinkage", nullptr));
        SalesRepButton->setText(QApplication::translate("UserInterface", "Sales", nullptr));
        CusOrdRepButton->setText(QApplication::translate("UserInterface", "Customer Order", nullptr));
        ExpenditureRepButton->setText(QApplication::translate("UserInterface", "Expenditure", nullptr));
        StockTakeRepButton->setText(QApplication::translate("UserInterface", "Stock Take", nullptr));
        StockAdjRepButton->setText(QApplication::translate("UserInterface", "Stock \n"
"Adjustments", nullptr));
        CusOrdRepExportButton->setText(QApplication::translate("UserInterface", "Export", nullptr));
        CusOrdRepCancelButton->setText(QApplication::translate("UserInterface", "Cancel", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = CusOrdRepTable->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("UserInterface", "Product Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = CusOrdRepTable->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("UserInterface", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = CusOrdRepTable->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("UserInterface", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = CusOrdRepTable->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("UserInterface", "Total Price", nullptr));
        CusOrdRepTitle->setText(QApplication::translate("UserInterface", "Customer Order Report", nullptr));
        CusOrdRepStartDateDateTimeEdit->setDisplayFormat(QApplication::translate("UserInterface", "yyyy-MM-dd HH:mm:ss", nullptr));
        CusOrdRepEndDateDateTimeEdit->setDisplayFormat(QApplication::translate("UserInterface", "yyyy-MM-dd HH:mm:ss", nullptr));
        CusOrdRepRunButton->setText(QApplication::translate("UserInterface", "Run", nullptr));
        CusOrdRepEndDateLabel->setText(QApplication::translate("UserInterface", "End Date:", nullptr));
        CusOrdRepUsernameLabel->setText(QApplication::translate("UserInterface", "Username:", nullptr));
        CusOrdRepStartDateLabel->setText(QApplication::translate("UserInterface", "Start Date:", nullptr));
        StockAdjRepExportButton->setText(QApplication::translate("UserInterface", "Export", nullptr));
        StockAdjRepCancelButton->setText(QApplication::translate("UserInterface", "Cancel", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = StockAdjRepTable->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("UserInterface", "Product Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = StockAdjRepTable->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("UserInterface", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = StockAdjRepTable->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QApplication::translate("UserInterface", "Amendment Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = StockAdjRepTable->horizontalHeaderItem(3);
        ___qtablewidgetitem17->setText(QApplication::translate("UserInterface", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = StockAdjRepTable->horizontalHeaderItem(4);
        ___qtablewidgetitem18->setText(QApplication::translate("UserInterface", "Amendment Date", nullptr));
        StockAdjRepTitle->setText(QApplication::translate("UserInterface", "Stock Adjustment Report", nullptr));
        StockAdjRepEndDateLabel->setText(QApplication::translate("UserInterface", "End Date:", nullptr));
        StockAdjRepProdCodeLabel->setText(QApplication::translate("UserInterface", "Product Code:", nullptr));
        StockAdjRepStartDateDateTimeEdit->setDisplayFormat(QApplication::translate("UserInterface", "yyyy-MM-dd HH:mm:ss", nullptr));
        StockAdjRepEndDateDateTimeEdit->setDisplayFormat(QApplication::translate("UserInterface", "yyyy-MM-dd HH:mm:ss", nullptr));
        StockAdjRepRunButton->setText(QApplication::translate("UserInterface", "Run", nullptr));
        StockAdjRepStartDateLabel->setText(QApplication::translate("UserInterface", "Start Date:", nullptr));
        StockAdjRepAmendTypeLabel->setText(QApplication::translate("UserInterface", "Amendment Type: ", nullptr));
        ShrinkageRepExportButton->setText(QApplication::translate("UserInterface", "Export", nullptr));
        ShrinkageRepCancelButton->setText(QApplication::translate("UserInterface", "Cancel", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = ShrinkageRepTable->horizontalHeaderItem(0);
        ___qtablewidgetitem19->setText(QApplication::translate("UserInterface", "Product Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = ShrinkageRepTable->horizontalHeaderItem(1);
        ___qtablewidgetitem20->setText(QApplication::translate("UserInterface", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = ShrinkageRepTable->horizontalHeaderItem(2);
        ___qtablewidgetitem21->setText(QApplication::translate("UserInterface", "Quantity", nullptr));
        ShrinkageRepTitle->setText(QApplication::translate("UserInterface", "Shrinkage Report", nullptr));
        ShrinkageRepStartDateLabel->setText(QApplication::translate("UserInterface", "Start Date:", nullptr));
        ShrinkageRepStartDateDateTimeEdit->setDisplayFormat(QApplication::translate("UserInterface", "yyyy-MM-dd HH:mm:ss", nullptr));
        ShrinkageRepEndDateLabel->setText(QApplication::translate("UserInterface", "End Date:", nullptr));
        ShrinkageRepEndDateDateTimeEdit->setDisplayFormat(QApplication::translate("UserInterface", "yyyy-MM-dd HH:mm:ss", nullptr));
        ShrinkageRepRunButton->setText(QApplication::translate("UserInterface", "Run", nullptr));
        ExpenditureRepExportButton->setText(QApplication::translate("UserInterface", "Export", nullptr));
        ExpenditureRepCancelButton->setText(QApplication::translate("UserInterface", "Cancel", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = ExpenditureRepTable->horizontalHeaderItem(0);
        ___qtablewidgetitem22->setText(QApplication::translate("UserInterface", "Product Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = ExpenditureRepTable->horizontalHeaderItem(1);
        ___qtablewidgetitem23->setText(QApplication::translate("UserInterface", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = ExpenditureRepTable->horizontalHeaderItem(2);
        ___qtablewidgetitem24->setText(QApplication::translate("UserInterface", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = ExpenditureRepTable->horizontalHeaderItem(3);
        ___qtablewidgetitem25->setText(QApplication::translate("UserInterface", "Total Price", nullptr));
        ExpenditureRepTitle->setText(QApplication::translate("UserInterface", "Expenditure Report", nullptr));
        ExpenditureRepStartDateLabel->setText(QApplication::translate("UserInterface", "Start Date:", nullptr));
        ExpenditureRepStartDateDateTimeEdit->setDisplayFormat(QApplication::translate("UserInterface", "yyyy-MM-dd HH:mm:ss", nullptr));
        ExpenditureRepEndDateLabel->setText(QApplication::translate("UserInterface", "End Date:", nullptr));
        ExpenditureRepEndDateDateTimeEdit->setDisplayFormat(QApplication::translate("UserInterface", "yyyy-MM-dd HH:mm:ss", nullptr));
        ExpenditureRepRunButton->setText(QApplication::translate("UserInterface", "Run", nullptr));
        SalesRepExportButton->setText(QApplication::translate("UserInterface", "Export", nullptr));
        SalesRepCancelButton->setText(QApplication::translate("UserInterface", "Cancel", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = SalesRepTable->horizontalHeaderItem(0);
        ___qtablewidgetitem26->setText(QApplication::translate("UserInterface", "Product Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = SalesRepTable->horizontalHeaderItem(1);
        ___qtablewidgetitem27->setText(QApplication::translate("UserInterface", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = SalesRepTable->horizontalHeaderItem(2);
        ___qtablewidgetitem28->setText(QApplication::translate("UserInterface", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = SalesRepTable->horizontalHeaderItem(3);
        ___qtablewidgetitem29->setText(QApplication::translate("UserInterface", "Total Price", nullptr));
        SalesRepTitle->setText(QApplication::translate("UserInterface", "Sales Report", nullptr));
        SalesRepEndDateLabel->setText(QApplication::translate("UserInterface", "End Date:", nullptr));
        SalesRepEndDateDateTimeEdit->setDisplayFormat(QApplication::translate("UserInterface", "yyyy-MM-dd HH:mm:ss", nullptr));
        SalesRepStartDateDateTimeEdit->setDisplayFormat(QApplication::translate("UserInterface", "yyyy-MM-dd HH:mm:ss", nullptr));
        SalesRepStartDateLabel->setText(QApplication::translate("UserInterface", "Start Date:", nullptr));
        SalesRepRunButton->setText(QApplication::translate("UserInterface", "Run", nullptr));
        SalesRepDepartmentLabel->setText(QApplication::translate("UserInterface", "Department:", nullptr));
        StockTakeRepTitle->setText(QApplication::translate("UserInterface", "Stock Take Report", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = StockTakeRepTable->horizontalHeaderItem(0);
        ___qtablewidgetitem30->setText(QApplication::translate("UserInterface", "Product Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = StockTakeRepTable->horizontalHeaderItem(1);
        ___qtablewidgetitem31->setText(QApplication::translate("UserInterface", "Product Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = StockTakeRepTable->horizontalHeaderItem(2);
        ___qtablewidgetitem32->setText(QApplication::translate("UserInterface", "Stock Level", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = StockTakeRepTable->horizontalHeaderItem(3);
        ___qtablewidgetitem33->setText(QApplication::translate("UserInterface", "Low Stock Level", nullptr));
        StockTakeRepExportButton->setText(QApplication::translate("UserInterface", "Export", nullptr));
        StockTakeRepCancelButton->setText(QApplication::translate("UserInterface", "Cancel", nullptr));
        AdminTabWidget->setTabText(AdminTabWidget->indexOf(ReportTab), QApplication::translate("UserInterface", "Reporting", nullptr));
        usr_3->setText(QApplication::translate("UserInterface", "Username:", nullptr));
        fore_3->setText(QApplication::translate("UserInterface", "Forename:", nullptr));
        ManageUsersSurnameLineEdit->setText(QString());
        label_34->setText(QApplication::translate("UserInterface", "Surname:", nullptr));
        label_35->setText(QApplication::translate("UserInterface", "Email Address:", nullptr));
        label_36->setText(QApplication::translate("UserInterface", "Charge Code:", nullptr));
        ManageUsersUpdateButton->setText(QApplication::translate("UserInterface", "Update", nullptr));
        ManageUsersCancelButton->setText(QApplication::translate("UserInterface", "Cancel", nullptr));
        label_37->setText(QApplication::translate("UserInterface", "User Type:", nullptr));
        ManageUsersVATTypeCombo->setItemText(0, QApplication::translate("UserInterface", "No", nullptr));
        ManageUsersVATTypeCombo->setItemText(1, QApplication::translate("UserInterface", "Yes", nullptr));

        label_38->setText(QApplication::translate("UserInterface", "Non-VAT?", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = ManageUsersTable->horizontalHeaderItem(0);
        ___qtablewidgetitem34->setText(QApplication::translate("UserInterface", "Username", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = ManageUsersTable->horizontalHeaderItem(1);
        ___qtablewidgetitem35->setText(QApplication::translate("UserInterface", "Forename", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = ManageUsersTable->horizontalHeaderItem(2);
        ___qtablewidgetitem36->setText(QApplication::translate("UserInterface", "Surname", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = ManageUsersTable->horizontalHeaderItem(3);
        ___qtablewidgetitem37->setText(QApplication::translate("UserInterface", "Email", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = ManageUsersTable->horizontalHeaderItem(4);
        ___qtablewidgetitem38->setText(QApplication::translate("UserInterface", "Charge Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = ManageUsersTable->horizontalHeaderItem(5);
        ___qtablewidgetitem39->setText(QApplication::translate("UserInterface", "User Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = ManageUsersTable->horizontalHeaderItem(6);
        ___qtablewidgetitem40->setText(QApplication::translate("UserInterface", "Non-VAT", nullptr));
        ManageUsersAddUserButton->setText(QApplication::translate("UserInterface", "Add User", nullptr));
        ManageUsersSearchLineEdit->setPlaceholderText(QApplication::translate("UserInterface", "Who do you want to search for?", nullptr));
        ManageUsersSearchButton->setText(QString());
        label_49->setText(QApplication::translate("UserInterface", "Add User", nullptr));
        AddUserForenameLineEdit->setInputMask(QString());
        AddUserForenameLineEdit->setText(QString());
        label_50->setText(QApplication::translate("UserInterface", "Surname:", nullptr));
        label_51->setText(QApplication::translate("UserInterface", "Password:", nullptr));
        label_52->setText(QApplication::translate("UserInterface", "Non-VAT User:", nullptr));
        label_53->setText(QApplication::translate("UserInterface", "Charge Code:", nullptr));
        label_54->setText(QApplication::translate("UserInterface", "Username:", nullptr));
        label_55->setText(QApplication::translate("UserInterface", "Email:", nullptr));
        AddUserEmailLineEdit->setInputMask(QString());
        AddUserEmailLineEdit->setText(QString());
        AddUserNonVATComboBox->setItemText(0, QApplication::translate("UserInterface", "No", nullptr));
        AddUserNonVATComboBox->setItemText(1, QApplication::translate("UserInterface", "Yes", nullptr));

        AddUserAddButton->setText(QApplication::translate("UserInterface", "Add", nullptr));
        AddUserUsernameLineEdit->setInputMask(QString());
        AddUserUsernameLineEdit->setText(QString());
        AddUserCancelButton->setText(QApplication::translate("UserInterface", "Cancel", nullptr));
        label_56->setText(QApplication::translate("UserInterface", "Forename:", nullptr));
        label_57->setText(QApplication::translate("UserInterface", "User Type:", nullptr));
        AdminTabWidget->setTabText(AdminTabWidget->indexOf(ManageUsersTab), QApplication::translate("UserInterface", "Manage Users", nullptr));
        ShopTabStartShoppingButton->setText(QApplication::translate("UserInterface", "Start Shopping", nullptr));
        AdminTabWidget->setTabText(AdminTabWidget->indexOf(ShopTab), QApplication::translate("UserInterface", "Shop", nullptr));
        CustomerLogOutButton->setText(QApplication::translate("UserInterface", "Log Out", nullptr));
        CustomerHomeUsernameLabel->setText(QApplication::translate("UserInterface", "<name>", nullptr));
        CustomerShopButton->setText(QApplication::translate("UserInterface", "Start Shopping", nullptr));
        label_18->setText(QApplication::translate("UserInterface", "Welcome", nullptr));
        CustomerShopSearchButton->setText(QString());
        CustomerShopAddButton->setText(QApplication::translate("UserInterface", "Add To Basket", nullptr));
        label_14->setText(QApplication::translate("UserInterface", "Product Description:", nullptr));
        CustomerShopRemoveButton->setText(QApplication::translate("UserInterface", "Remove Item", nullptr));
        label_12->setText(QApplication::translate("UserInterface", "Quantity:", nullptr));
        CustomerShopSearchLineEdit->setText(QApplication::translate("UserInterface", "What would you like to search for?", nullptr));
        label_11->setText(QApplication::translate("UserInterface", "Product Code:", nullptr));
        label_13->setText(QApplication::translate("UserInterface", "Basket", nullptr));
        CustomerShopCheckoutButton->setText(QApplication::translate("UserInterface", "Checkout", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = CustomerShopBasketTable->horizontalHeaderItem(0);
        ___qtablewidgetitem41->setText(QApplication::translate("UserInterface", "Product Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = CustomerShopBasketTable->horizontalHeaderItem(1);
        ___qtablewidgetitem42->setText(QApplication::translate("UserInterface", "Product Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = CustomerShopBasketTable->horizontalHeaderItem(2);
        ___qtablewidgetitem43->setText(QApplication::translate("UserInterface", "Quantity In Basket", nullptr));
        CustomerShopCancelButton->setText(QApplication::translate("UserInterface", "Cancel", nullptr));
        CustomerShopImageLabel->setText(QString());
        label_15->setText(QApplication::translate("UserInterface", "Shop", nullptr));
        label_16->setText(QApplication::translate("UserInterface", "Quantity Available:", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserInterface: public Ui_UserInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINTERFACE_H
