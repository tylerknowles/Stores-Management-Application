#ifndef EXCEL_H
#define EXCEL_H
#include <QAxObject>
#include <QAxWidget>
#include <QUrl>
class Excel
{
private:
    QAxWidget* excelApp = nullptr;
    QAxObject* workbooks = nullptr;
    QAxObject* workbook = nullptr;
    QAxObject* worksheet = nullptr;
    QAxObject* cell = nullptr;
    QAxObject* font = nullptr;
    QAxObject* range = nullptr;
public:
    Excel();
    ~Excel();
    void SetCell(int column,int row, QColor colour, QString text, int size, QString fontname);
    void SaveAndClose(QUrl filename);
};

#endif // EXCEL_H
