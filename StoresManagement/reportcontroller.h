#ifndef REPORTCONTROLLER_H
#define REPORTCONTROLLER_H
#include "report.h"
#include "database.h"

class ReportController
{
private:
    Database db;
public:
    QList<Product> CreateStockTakeReport();
    void ExportStockTakeReport(QUrl filename);
    QList<ShrinkageRow> CreateShrinkageReport(QString startDate, QString endDate);
    void ExportShrinkageReport(QUrl filename, QString startDate, QString endDate);
    QList<SalesRow> CreateSalesReport(QString department, QString startDate, QString endDate);
    void ExportSalesReport(QUrl filename, QString department, QString startDate, QString endDate);
    QList<SalesRow> CreateCustomerOrderSummaryReport(QString username, QString startDate, QString endDate);
    void ExportCustomerOrderSummaryReport(QUrl filename, QString username, QString startDate, QString endDate);
    QList<ExpenditureRow> CreateExpenditureReport(QString startDate, QString endDate);
    void ExportExpenditureReport(QUrl filename, QString startDate, QString endDate);
    QList<StockHistory> CreateAdjustmentReport(QString startDate, QString endDate, QString amendtype, QString prodcode);
    void ExportAdjustmentReport(QUrl filename, QString startDate, QString endDate, QString amendtype, QString prodcode);

};

#endif // REPORTCONTROLLER_H
