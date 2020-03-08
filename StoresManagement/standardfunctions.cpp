#include "standardfunctions.h"

QString StandardFunctions::getCurrentDateTime()
{
    time_t now = time(0);
    tm *dt = localtime(&now);
    QString day = QString::number(dt->tm_mday);
    day = day.length()<2 ? "0"+day : day;
    QString mon = QString::number(dt->tm_mon+1);
    mon = mon.length()<2 ? "0"+mon : mon;
    QString year = QString::number(dt->tm_year+1900);
    QString hour = QString::number(dt->tm_hour);
    hour = hour.length()<2 ? "0"+hour : hour;
    QString min = QString::number(dt->tm_min);
    min = min.length()<2 ? "0"+min : min;
    QString sec = QString::number(dt->tm_sec);
    sec = sec.length()<2 ? "0"+sec : sec;

    return year+"-"+mon+"-"+day+" "+hour+":"+min+":"+sec;
}
