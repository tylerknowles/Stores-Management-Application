#include "reportcontroller.h"

QList<Product> ReportController::CreateStockTakeReport()
{
    // get the stock take rows
    return db.SelectAllProductRows();
}

void ReportController::ExportStockTakeReport(QUrl filename)
{
    Report r;
    // create the report in excel
    r.StockTakeReport(db.SelectAllProductRows(), filename);
}

QList<ShrinkageRow> ReportController::CreateShrinkageReport(QString startDate, QString endDate)
{
    // get the shrinkage rows
    return db.SelectShrinkageRows(startDate, endDate);
}

void ReportController::ExportShrinkageReport(QUrl filename, QString startDate, QString endDate)
{
    Report r;
    // create the report in excel
    r.ShrinkageReport(db.SelectShrinkageRows(startDate, endDate), filename, startDate, endDate);
}

QList<SalesRow> ReportController::CreateSalesReport(QString department, QString startDate, QString endDate)
{
    // get the sales rows
    return db.SelectSalesRows("", department, startDate, endDate);
}

void ReportController::ExportSalesReport(QUrl filename, QString department, QString startDate, QString endDate)
{
    Report r;
    // create the report in excel
    r.SalesReport(db.SelectSalesRows("", department, startDate, endDate), filename, "", department, startDate, endDate);
}

QList<SalesRow> ReportController::CreateCustomerOrderSummaryReport(QString username, QString startDate, QString endDate)
{
    // get the customer order summary rows
    return db.SelectSalesRows(username, "", startDate, endDate);
}

void ReportController::ExportCustomerOrderSummaryReport(QUrl filename, QString username, QString startDate, QString endDate)
{
    Report r;
    // create the report in excel
    r.SalesReport(db.SelectSalesRows(username, "", startDate, endDate), filename, username, "", startDate, endDate);
}

QList<ExpenditureRow> ReportController::CreateExpenditureReport(QString startDate, QString endDate)
{
    // get the expenditure rows
    return db.SelectExpenditureRows(startDate, endDate);
}

void ReportController::ExportExpenditureReport(QUrl filename, QString startDate, QString endDate)
{
    Report r;
    // create the report in excel
    r.ExpenditureReport(db.SelectExpenditureRows(startDate, endDate), filename, startDate, endDate);
}

QList<StockHistory> ReportController::CreateAdjustmentReport(QString startDate, QString endDate, QString amendtype, QString prodcode)
{
    // get the expenditure rows
    return db.SelectAdjustmentRows(startDate, endDate, amendtype, prodcode);
}

void ReportController::ExportAdjustmentReport(QUrl filename, QString startDate, QString endDate, QString amendtype, QString prodcode)
{
    Report r;
    // create the report in excel
    r.AdjustmentReport(db.SelectAdjustmentRows(startDate, endDate, amendtype, prodcode), filename, startDate, endDate, amendtype, prodcode);
}

