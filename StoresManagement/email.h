#ifndef EMAIL_H
#define EMAIL_H
#include "SmtpClient-for-Qt-1.1\src\SmtpMime"
#include "product.h"
#include "users.h"

class Email
{
public:
    Email();
    bool SendLowStockEmail(QList<Product> p, QList<Users> u);
};

#endif // EMAIL_H
