#include "report.h"

void Report::CreateHeader(Excel *ex, QString reportTitle, QString startDate, QString endDate)
{
    ex->SetCell(2,2,QColor(0,0,0),reportTitle,16,"Arial");
    ex->SetCell(4,2,QColor(0,0,0),"Start Date:",16,"Arial");
    ex->SetCell(5,2,QColor(0,0,0),startDate,16,"Arial");
    ex->SetCell(7,2,QColor(0,0,0),"End Date:",16,"Arial");
    ex->SetCell(8,2,QColor(0,0,0),endDate,16,"Arial");
}

void Report::StockTakeReport(QList<Product> rows, QUrl filename)
{
    Excel ex;
    ex.SetCell(2,2,QColor(0,0,0),"Stock Take Report",16,"Arial");
    ex.SetCell(4,2,QColor(0,0,0),"Report Date:",16,"Arial");

    StandardFunctions sf;
    ex.SetCell(5,2,QColor(0,0,0),sf.getCurrentDateTime(),16,"Arial");

    // PRINT COLUMNS
    ex.SetCell(2,4,QColor(0,0,0),"Product Code",14,"Arial");
    ex.SetCell(3,4,QColor(0,0,0),"Description",14,"Arial");
    ex.SetCell(4,4,QColor(0,0,0),"Stock Level",14,"Arial");
    ex.SetCell(5,4,QColor(0,0,0),"Low Stock Level",14,"Arial");

    // PRINT DATA
    for (int i = 0; i<rows.size(); i++)
    {
        ex.SetCell(2,5+i,QColor(0,0,0),rows[i].getProdCode(),12,"Arial");
        ex.SetCell(3,5+i,QColor(0,0,0),rows[i].getProdDesc(),12,"Arial");
        ex.SetCell(4,5+i,QColor(0,0,0),QString::number(rows[i].getStockLevel()),12,"Arial");
        ex.SetCell(5,5+i,QColor(0,0,0),QString::number(rows[i].getLowStockLevel()),12,"Arial");
    }
    ex.SaveAndClose(filename);
}

void Report::ShrinkageReport(QList<ShrinkageRow> rows, QUrl filename, QString startDate, QString endDate)
{
    Excel ex;
    CreateHeader(&ex,"Shrinkage Report",startDate,endDate);
    // PRINT COLUMNS
    ex.SetCell(2,4,QColor(0,0,0),"Product Code",14,"Arial");
    ex.SetCell(3,4,QColor(0,0,0),"Description",14,"Arial");
    ex.SetCell(4,4,QColor(0,0,0),"Quantity",14,"Arial");

    // PRINT DATA
    for (int i = 0; i<rows.size(); i++)
    {
        ex.SetCell(2,5+i,QColor(0,0,0),rows[i].getProd().getProdCode(),12,"Arial");
        ex.SetCell(3,5+i,QColor(0,0,0),rows[i].getProd().getProdDesc(),12,"Arial");
        ex.SetCell(4,5+i,QColor(0,0,0),QString::number(rows[i].getQuantity()),12,"Arial");
    }
    ex.SaveAndClose(filename);
}

void Report::SalesReport(QList<SalesRow> rows, QUrl filename, QString username, QString department, QString startDate, QString endDate)
{
    Excel ex;
    // if sales report with no filters, use standard header
    if (username=="" && department == "")
    {
        CreateHeader(&ex,"Sales Report",startDate,endDate);
    }
    else
    {
        // if a customer order summary report
        if (username!="")
        {
            ex.SetCell(2,2,QColor(0,0,0),"Customer Order Summary Report",16,"Arial");
            ex.SetCell(4,2,QColor(0,0,0),"Username:",16,"Arial");
            ex.SetCell(5,2,QColor(0,0,0),username,16,"Arial");
        }
        // if a department filtered sales report
        else
        {
            ex.SetCell(2,2,QColor(0,0,0),"Sales Report",16,"Arial");
            ex.SetCell(4,2,QColor(0,0,0),"Department:",16,"Arial");
            ex.SetCell(5,2,QColor(0,0,0),department,16,"Arial");
        }

        ex.SetCell(7,2,QColor(0,0,0),"Start Date:",16,"Arial");
        ex.SetCell(8,2,QColor(0,0,0),startDate,16,"Arial");
        ex.SetCell(10,2,QColor(0,0,0),"End Date:",16,"Arial");
        ex.SetCell(11,2,QColor(0,0,0),endDate,16,"Arial");
    }


    // PRINT COLUMNS
    ex.SetCell(2,4,QColor(0,0,0),"Product Code",14,"Arial");
    ex.SetCell(3,4,QColor(0,0,0),"Description",14,"Arial");
    ex.SetCell(4,4,QColor(0,0,0),"Quantity",14,"Arial");
    ex.SetCell(5,4,QColor(0,0,0),"Total Price",14,"Arial");



    // PRINT DATA
    for (int i = 0; i<rows.size(); i++)
    {
        ex.SetCell(2,5+i,QColor(0,0,0),rows[i].getProd().getProdCode(),12,"Arial");
        ex.SetCell(3,5+i,QColor(0,0,0),rows[i].getProd().getProdDesc(),12,"Arial");
        ex.SetCell(4,5+i,QColor(0,0,0),QString::number(rows[i].getQuantity()),12,"Arial");
        ex.SetCell(5,5+i,QColor(0,0,0),"£"+QString::number(rows[i].getTotalPrice()),12,"Arial");
    }
    ex.SaveAndClose(filename);
}


void Report::ExpenditureReport(QList<ExpenditureRow> rows, QUrl filename, QString startDate, QString endDate)
{
    Excel ex;
    CreateHeader(&ex,"Expenditure Report",startDate,endDate);
    // PRINT COLUMNS
    ex.SetCell(2,4,QColor(0,0,0),"Product Code",14,"Arial");
    ex.SetCell(3,4,QColor(0,0,0),"Description",14,"Arial");
    ex.SetCell(4,4,QColor(0,0,0),"Quantity",14,"Arial");
    ex.SetCell(5,4,QColor(0,0,0),"Total Price",14,"Arial");

    // PRINT DATA
    for (int i = 0; i<rows.size(); i++)
    {
        ex.SetCell(2,5+i,QColor(0,0,0),rows[i].getProd().getProdCode(),12,"Arial");
        ex.SetCell(3,5+i,QColor(0,0,0),rows[i].getProd().getProdDesc(),12,"Arial");
        ex.SetCell(4,5+i,QColor(0,0,0),QString::number(rows[i].getQuantity()),12,"Arial");
        ex.SetCell(5,5+i,QColor(0,0,0),"£"+QString::number(rows[i].getTotalPrice()),12,"Arial");
    }
    ex.SaveAndClose(filename);
}

void Report::AdjustmentReport(QList<StockHistory> rows, QUrl filename, QString startDate, QString endDate, QString amendtype, QString prodcode)
{
    Excel ex;
    if (amendtype == "" && prodcode == "")
    {
        CreateHeader(&ex,"Adjustment Report",startDate,endDate);
    }
    else
    {
        ex.SetCell(2,2,QColor(0,0,0),"Adjustment Report",16,"Arial");
        if(amendtype != "" && prodcode == "")
        {
            ex.SetCell(4,2,QColor(0,0,0),"Amendment Type:",16,"Arial");
            ex.SetCell(5,2,QColor(0,0,0),amendtype,16,"Arial");
            ex.SetCell(7,2,QColor(0,0,0),"Start Date:",16,"Arial");
            ex.SetCell(8,2,QColor(0,0,0),startDate,16,"Arial");
            ex.SetCell(10,2,QColor(0,0,0),"End Date:",16,"Arial");
            ex.SetCell(11,2,QColor(0,0,0),endDate,16,"Arial");
        }
        else if(prodcode != "" && amendtype == "")
        {
            ex.SetCell(4,2,QColor(0,0,0),"Product Code:",16,"Arial");
            ex.SetCell(5,2,QColor(0,0,0),prodcode,16,"Arial");
            ex.SetCell(7,2,QColor(0,0,0),"Start Date:",16,"Arial");
            ex.SetCell(8,2,QColor(0,0,0),startDate,16,"Arial");
            ex.SetCell(10,2,QColor(0,0,0),"End Date:",16,"Arial");
            ex.SetCell(11,2,QColor(0,0,0),endDate,16,"Arial");
        }
        else
        {
            ex.SetCell(4,2,QColor(0,0,0),"Amendment Type:",16,"Arial");
            ex.SetCell(5,2,QColor(0,0,0),amendtype,16,"Arial");

            ex.SetCell(7,2,QColor(0,0,0),"Product Code:",16,"Arial");
            ex.SetCell(8,2,QColor(0,0,0),prodcode,16,"Arial");

            ex.SetCell(10,2,QColor(0,0,0),"Start Date:",16,"Arial");
            ex.SetCell(11,2,QColor(0,0,0),startDate,16,"Arial");
            ex.SetCell(13,2,QColor(0,0,0),"End Date:",16,"Arial");
            ex.SetCell(14,2,QColor(0,0,0),endDate,16,"Arial");
        }
    }

    // PRINT COLUMNS
    ex.SetCell(2,4,QColor(0,0,0),"Product Code",14,"Arial");
    ex.SetCell(3,4,QColor(0,0,0),"Description",14,"Arial");
    ex.SetCell(4,4,QColor(0,0,0),"Amendment Type",14,"Arial");
    ex.SetCell(5,4,QColor(0,0,0),"Quantity",14,"Arial");
    ex.SetCell(6,4,QColor(0,0,0),"Amendment Date",14,"Arial");

    // PRINT DATA
    for (int i = 0; i<rows.size(); i++)
    {
        ex.SetCell(2,5+i,QColor(0,0,0),rows[i].getProd().getProdCode(),12,"Arial");
        ex.SetCell(3,5+i,QColor(0,0,0),rows[i].getProd().getProdDesc(),12,"Arial");
        ex.SetCell(4,5+i,QColor(0,0,0),rows[i].getAmendType().getDescription(),12,"Arial");
        ex.SetCell(5,5+i,QColor(0,0,0),QString::number(rows[i].getQuantity()),12,"Arial");
        ex.SetCell(6,5+i,QColor(0,0,0),rows[i].getAmendDate(),12,"Arial");
    }
    ex.SaveAndClose(filename);
}
