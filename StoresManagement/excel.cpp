#include "excel.h"

Excel::Excel()
{
    excelApp = new QAxWidget("Excel.Application");
    workbooks = excelApp->querySubObject("WorkBooks");
    workbooks->dynamicCall("Add");
    workbook = excelApp->querySubObject("ActiveWorkBook");
    worksheet = workbook->querySubObject("Sheets(int)", 1);
}

Excel::~Excel()
{
    delete excelApp;
}

void Excel::SetCell(int column,int row, QColor colour, QString text, int size, QString fontname)
{
    cell = worksheet->querySubObject("Cells(int,int)", row, column);
    cell->setProperty("Value", text);
    font = cell->querySubObject("Font");
    font->setProperty("Color", colour);
    font->setProperty("Size", size);
    font->setProperty("Name", fontname);
}

void Excel::SaveAndClose(QUrl filename)
{
    range = worksheet->querySubObject("Columns(const QString &)", "a:z");
    range->dynamicCall("AutoFit()");

    excelApp->setProperty("DisplayAlerts", 0);

    workbook->dynamicCall("SaveAs (const QString&)", filename);

    workbook->dynamicCall("Close (Boolean)", false);
    excelApp->setProperty("DisplayAlerts", 1);
    excelApp->dynamicCall("Quit (void)");
}
