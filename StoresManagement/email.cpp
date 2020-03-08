#include "email.h"

Email::Email()
{

}

bool Email::SendLowStockEmail(QList<Product> p, QList<Users> u)
{
    // connect to the email server
    SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);
    smtp.setUser("storesmanagementb2@gmail.com");
    smtp.setPassword("St0r3sB2");

    MimeMessage message;

    EmailAddress sender("storesmanagementb2@gmail.com", "Stores Management");
    message.setSender(&sender);

    message.setSubject("Products low in stock");

    QString products;
    for (int j=0; j<p.size(); j++)
    {
        products+= p[j].getProdCode()+" - "
                + QString::number(p[j].getStockLevel()) + " in stock (low stock level: "
                + QString::number(p[j].getLowStockLevel())+")\n";
    }

    MimeText text;
    text.setText("The following products are low in stock:\n\n"+products+"\nYou may wish to order more stock.");

    message.addPart(&text);



    if (!smtp.connectToHost()) {
        return false;
    }

    if (!smtp.login()) {
        return false;
    }

    for (int i=0; i<u.size(); i++)
    {
        EmailAddress to(u[i].getEmail(), u[i].getForename()+" "+u[i].getSurname());
        message.addRecipient(&to);
        if (!smtp.sendMail(message)) {
            return false;
        }

    }



    smtp.quit();

    return true;
}
