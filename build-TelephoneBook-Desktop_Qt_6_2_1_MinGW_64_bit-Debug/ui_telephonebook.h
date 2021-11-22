/********************************************************************************
** Form generated from reading UI file 'telephonebook.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELEPHONEBOOK_H
#define UI_TELEPHONEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelephoneBook
{
public:
    QLabel *currentContactLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *CurrentNameLabel;
    QLineEdit *CurrentNameEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *CurrentPhoneLabel;
    QLineEdit *CurrentTelephoneEdit;
    QPushButton *deleteButton;
    QPushButton *previousButton;
    QPushButton *nextButton;
    QLabel *addContactLabel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *NameLabel;
    QLineEdit *NameEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *PhoneLabel;
    QLineEdit *TelephoneEdit;
    QPushButton *addButton;

    void setupUi(QWidget *TelephoneBook)
    {
        if (TelephoneBook->objectName().isEmpty())
            TelephoneBook->setObjectName(QString::fromUtf8("TelephoneBook"));
        TelephoneBook->resize(651, 307);
        currentContactLabel = new QLabel(TelephoneBook);
        currentContactLabel->setObjectName(QString::fromUtf8("currentContactLabel"));
        currentContactLabel->setGeometry(QRect(10, 130, 611, 31));
        currentContactLabel->setFrameShape(QFrame::Box);
        currentContactLabel->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(TelephoneBook);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 170, 621, 63));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        CurrentNameLabel = new QLabel(layoutWidget);
        CurrentNameLabel->setObjectName(QString::fromUtf8("CurrentNameLabel"));

        horizontalLayout_5->addWidget(CurrentNameLabel);

        CurrentNameEdit = new QLineEdit(layoutWidget);
        CurrentNameEdit->setObjectName(QString::fromUtf8("CurrentNameEdit"));
        CurrentNameEdit->setReadOnly(true);

        horizontalLayout_5->addWidget(CurrentNameEdit);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        CurrentPhoneLabel = new QLabel(layoutWidget);
        CurrentPhoneLabel->setObjectName(QString::fromUtf8("CurrentPhoneLabel"));

        horizontalLayout_6->addWidget(CurrentPhoneLabel);

        CurrentTelephoneEdit = new QLineEdit(layoutWidget);
        CurrentTelephoneEdit->setObjectName(QString::fromUtf8("CurrentTelephoneEdit"));
        CurrentTelephoneEdit->setReadOnly(true);

        horizontalLayout_6->addWidget(CurrentTelephoneEdit);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout_4->addLayout(verticalLayout_2);

        deleteButton = new QPushButton(layoutWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        horizontalLayout_4->addWidget(deleteButton);

        previousButton = new QPushButton(TelephoneBook);
        previousButton->setObjectName(QString::fromUtf8("previousButton"));
        previousButton->setEnabled(false);
        previousButton->setGeometry(QRect(120, 250, 80, 25));
        nextButton = new QPushButton(TelephoneBook);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setEnabled(false);
        nextButton->setGeometry(QRect(360, 250, 80, 25));
        addContactLabel = new QLabel(TelephoneBook);
        addContactLabel->setObjectName(QString::fromUtf8("addContactLabel"));
        addContactLabel->setGeometry(QRect(10, 0, 611, 31));
        addContactLabel->setFrameShape(QFrame::Box);
        addContactLabel->setFrameShadow(QFrame::Raised);
        widget = new QWidget(TelephoneBook);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 40, 621, 63));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        NameLabel = new QLabel(widget);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));

        horizontalLayout->addWidget(NameLabel);

        NameEdit = new QLineEdit(widget);
        NameEdit->setObjectName(QString::fromUtf8("NameEdit"));

        horizontalLayout->addWidget(NameEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        PhoneLabel = new QLabel(widget);
        PhoneLabel->setObjectName(QString::fromUtf8("PhoneLabel"));

        horizontalLayout_2->addWidget(PhoneLabel);

        TelephoneEdit = new QLineEdit(widget);
        TelephoneEdit->setObjectName(QString::fromUtf8("TelephoneEdit"));

        horizontalLayout_2->addWidget(TelephoneEdit);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);

        addButton = new QPushButton(widget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout_3->addWidget(addButton);


        retranslateUi(TelephoneBook);

        QMetaObject::connectSlotsByName(TelephoneBook);
    } // setupUi

    void retranslateUi(QWidget *TelephoneBook)
    {
        TelephoneBook->setWindowTitle(QCoreApplication::translate("TelephoneBook", "TelephoneBook", nullptr));
        currentContactLabel->setText(QCoreApplication::translate("TelephoneBook", "Current Contact", nullptr));
        CurrentNameLabel->setText(QCoreApplication::translate("TelephoneBook", "Name", nullptr));
        CurrentPhoneLabel->setText(QCoreApplication::translate("TelephoneBook", "Phone", nullptr));
        deleteButton->setText(QCoreApplication::translate("TelephoneBook", "Delete", nullptr));
        previousButton->setText(QCoreApplication::translate("TelephoneBook", "Previous", nullptr));
        nextButton->setText(QCoreApplication::translate("TelephoneBook", "Next", nullptr));
        addContactLabel->setText(QCoreApplication::translate("TelephoneBook", "Add Contact", nullptr));
        NameLabel->setText(QCoreApplication::translate("TelephoneBook", "Name", nullptr));
        PhoneLabel->setText(QCoreApplication::translate("TelephoneBook", "Phone", nullptr));
        addButton->setText(QCoreApplication::translate("TelephoneBook", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelephoneBook: public Ui_TelephoneBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELEPHONEBOOK_H
