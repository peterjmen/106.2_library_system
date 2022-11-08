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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sucLogin
{
public:
    QLabel *label;
    QPushButton *pushButton_logout;
    QPushButton *bookSearchButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *bookCoverVertLayout;
    QVBoxLayout *bookInfoVertLayout;
    QLineEdit *lineEdit_bookSearchText;

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
        bookSearchButton = new QPushButton(sucLogin);
        bookSearchButton->setObjectName(QString::fromUtf8("bookSearchButton"));
        bookSearchButton->setGeometry(QRect(520, 70, 171, 31));
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

        lineEdit_bookSearchText = new QLineEdit(sucLogin);
        lineEdit_bookSearchText->setObjectName(QString::fromUtf8("lineEdit_bookSearchText"));
        lineEdit_bookSearchText->setGeometry(QRect(150, 70, 361, 31));
        QWidget::setTabOrder(bookSearchButton, pushButton_logout);
        QWidget::setTabOrder(pushButton_logout, lineEdit_bookSearchText);

        retranslateUi(sucLogin);

        QMetaObject::connectSlotsByName(sucLogin);
    } // setupUi

    void retranslateUi(QDialog *sucLogin)
    {
        sucLogin->setWindowTitle(QCoreApplication::translate("sucLogin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("sucLogin", "This is the logged window for standard user", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("sucLogin", "Log Out", nullptr));
        bookSearchButton->setText(QCoreApplication::translate("sucLogin", "bookSearchButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sucLogin: public Ui_sucLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUCLOGIN_H
