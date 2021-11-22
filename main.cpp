#include "telephonebook.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TelephoneBook w;
    w.show();
    return a.exec();
}
