/********************************************************************************
** Form generated from reading UI file 'suclogin.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUCLOGIN_H
#define UI_SUCLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sucLogin
{
public:
    QLabel *label;
    QPushButton *pushButton_logout;
    QPushButton *showBook;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *bookCoverVertLayout;
    QVBoxLayout *bookInfoVertLayout;
    QTextEdit *textEdit;
    QPushButton *searchClear;

    void setupUi(QDialog *sucLogin)
    {
        if (sucLogin->objectName().isEmpty())
            sucLogin->setObjectName(QString::fromUtf8("sucLogin"));
        sucLogin->resize(810, 545);
        label = new QLabel(sucLogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, -30, 531, 101));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton_logout = new QPushButton(sucLogin);
        pushButton_logout->setObjectName(QString::fromUtf8("pushButton_logout"));
        pushButton_logout->setGeometry(QRect(360, 40, 80, 24));
        showBook = new QPushButton(sucLogin);
        showBook->setObjectName(QString::fromUtf8("showBook"));
        showBook->setGeometry(QRect(520, 70, 171, 31));
        horizontalLayoutWidget = new QWidget(sucLogin);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(150, 110, 541, 421));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        bookCoverVertLayout = new QVBoxLayout();
        bookCoverVertLayout->setObjectName(QString::fromUtf8("bookCoverVertLayout"));

        horizontalLayout->addLayout(bookCoverVertLayout);

        bookInfoVertLayout = new QVBoxLayout();
        bookInfoVertLayout->setObjectName(QString::fromUtf8("bookInfoVertLayout"));

        horizontalLayout->addLayout(bookInfoVertLayout);

        textEdit = new QTextEdit(sucLogin);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(160, 70, 351, 31));
        searchClear = new QPushButton(sucLogin);
        searchClear->setObjectName(QString::fromUtf8("searchClear"));
        searchClear->setGeometry(QRect(700, 70, 91, 31));

        retranslateUi(sucLogin);

        QMetaObject::connectSlotsByName(sucLogin);
    } // setupUi

    void retranslateUi(QDialog *sucLogin)
    {
        sucLogin->setWindowTitle(QCoreApplication::translate("sucLogin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("sucLogin", "This is the logged window for standard user", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("sucLogin", "Log Out", nullptr));
        showBook->setText(QCoreApplication::translate("sucLogin", "Search (not implemented)", nullptr));
        searchClear->setText(QCoreApplication::translate("sucLogin", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sucLogin: public Ui_sucLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUCLOGIN_H
