#ifndef TELEPHONEBOOK_H
#define TELEPHONEBOOK_H

#include <QWidget>
#include <QDebug>
#include <QtSql>
#include <QFileInfo>
#include <QString>
#include <QMap>
#include <QMessageBox>



QT_BEGIN_NAMESPACE
namespace Ui { class TelephoneBook; }
QT_END_NAMESPACE

class TelephoneBook : public QWidget
{
    Q_OBJECT

public:
    TelephoneBook(QWidget *parent = nullptr);
    ~TelephoneBook();

public slots:
     void addContact();
     void deleteContact();
     void next();
     void previous();

private:
    Ui::TelephoneBook *ui;
    QSqlDatabase DB_TelephoneBook;
    QMap<QString, QString> contacts;

};
#endif // TELEPHONEBOOK_H
