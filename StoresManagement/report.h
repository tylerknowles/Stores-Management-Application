#ifndef REPORT_H
#define REPORT_H
#include "excel.h"
#include "shrinkagerow.h"
#include "salesrow.h"
#include "expenditurerow.h"
#include "stockhistory.h"
#include "standardfunctions.h"

class Report
{
private:
    void CreateHeader(Excel*,QString reportTitle, QString, QString);
public:
    void StockTakeReport(QList<Product> rows, QUrl filename);
    void ShrinkageReport(QList<ShrinkageRow> rows, QUrl filename, QString startDate, QString endDate);
    void SalesReport(QList<SalesRow> rows, QUrl filename, QString username, QString department, QString startDate, QString endDate);
    void ExpenditureReport(QList<ExpenditureRow> rows, QUrl filename, QString startDate, QString endDate);
    void AdjustmentReport(QList<StockHistory> rows, QUrl filename, QString startDate, QString endDate, QString amendtype, QString prodcode);
};

#endif // REPORT_H
