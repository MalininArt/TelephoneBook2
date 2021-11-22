#include <QtGui>
#include "telephonebook.h"
#include "ui_telephonebook.h"
#define Path_to_DB  "E:/Работа/Test/TelephoneBook/TelephoneBook/TelephoneBook.sqlite"

TelephoneBook::TelephoneBook(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelephoneBook)
{
    ui->setupUi(this);
    DB_TelephoneBook = QSqlDatabase::addDatabase("QSQLITE");
    DB_TelephoneBook.setDatabaseName(Path_to_DB);
    QFileInfo checkFile(Path_to_DB);

    if (checkFile.isFile())
    {
        if(DB_TelephoneBook.open())
        {
            QMessageBox::information(this, tr("Welcome!"),
                                     tr("Hello. This is your telephone book."));
            QSqlQuery qry;
            if (qry.exec("Select name,telephone from TelephoneBook")){
                QString name ;
                QString telephone;
                while (qry.next()) {
                    name = qry.value(0).toString();
                    telephone = qry.value(1).toString();
                    contacts.insert(name, telephone);
                }
                int number = contacts.size();
                if (number > 0){
                    ui->nextButton->setEnabled(true);
                    ui->previousButton->setEnabled(true);
                    ui->CurrentNameEdit->setText(name);
                    ui->CurrentTelephoneEdit->setText(telephone);
                }
            }
        }

    }else{
        QMessageBox::information(this, tr("Welcome!"),
                                 tr("Hello. Sorry SQL_DB_TelephoneBook not exist! Check it."));

    }

    connect(ui->addButton, SIGNAL(clicked()), this, SLOT(addContact()));
    connect(ui->deleteButton, SIGNAL(clicked()), this, SLOT(deleteContact()));
    connect(ui->nextButton, SIGNAL(clicked()), this, SLOT(next()));
    connect(ui->previousButton, SIGNAL(clicked()), this, SLOT(previous()));
}

void TelephoneBook::addContact()
{

    QString name = ui->NameEdit->text();
    QString telephone = ui->TelephoneEdit->text();

    if (name == "" || telephone == "") {
        QMessageBox::information(this, tr("Empty Field"),
                                 tr("Please enter a name and telephone."));
        return;
    }

    if (!contacts.contains(name)) {

        QSqlQuery qry;
        if (qry.exec(tr("INSERT INTO TelephoneBook(name,telephone) VALUES(\"%1\",\"%2\")").arg(name,telephone))){

            contacts.insert(name, telephone);
            QMessageBox::information(this, tr("Add Successful"),
                                     tr("\"%1\" has been added to your telephone book.").arg(name));
        }


    } else {
        QMessageBox::information(this, tr("Add Unsuccessful"),
                                 tr("Sorry, \"%1\" is already in your telephone book.").arg(name));
        return;
    }

    ui->NameEdit->setText("");
    ui->TelephoneEdit->setText("");

    int number = contacts.size();
    if (number > 0){
        ui->nextButton->setEnabled(true);
        ui->previousButton->setEnabled(true);
        ui->CurrentNameEdit->setText(name);
        ui->CurrentTelephoneEdit->setText(telephone);
    }

}

void TelephoneBook::deleteContact()
{
    QString name = ui->CurrentNameEdit->text();
    QString telephone = ui->CurrentTelephoneEdit->text();

    if (contacts.contains(name)) {

        int button = QMessageBox::question(this,
                                           tr("Confirm Remove"),
                                           tr("Are you sure you want to remove \"%1\"?").arg(name),
                                           QMessageBox::Yes | QMessageBox::No);

        if (button == QMessageBox::Yes) {

            QSqlQuery qry;
            if (qry.exec(tr("DELETE FROM TelephoneBook WHERE name = \"%1\"").arg(name))){

                previous();
                contacts.remove(name);
                QMessageBox::information(this, tr("Remove Successful"),
                                         tr("\"%1\" has been removed from your telephone book.").arg(name));
            }


        }
    }


}

void TelephoneBook::next()
{
    QString name = ui->CurrentNameEdit->text();
    QMap<QString, QString>::iterator i = contacts.find(name);

    if (i != contacts.end())
        i++;

    if (i == contacts.end())
        i = contacts.begin();

    ui->CurrentNameEdit->setText(i.key());
    ui->CurrentTelephoneEdit->setText(i.value());
}
void TelephoneBook::previous()
{
    QString name = ui->CurrentNameEdit->text();
    QMap<QString, QString>::iterator i = contacts.find(name);

    if (i == contacts.end()){
        ui->CurrentNameEdit->setText("");
        ui->CurrentTelephoneEdit->setText("");
        return;
    }

    if (i == contacts.begin())
        i = contacts.end();
    i--;
    ui->CurrentNameEdit->setText(i.key());
    ui->CurrentTelephoneEdit->setText(i.value());
}


TelephoneBook::~TelephoneBook()
{
    delete ui;
    DB_TelephoneBook.close();
}





