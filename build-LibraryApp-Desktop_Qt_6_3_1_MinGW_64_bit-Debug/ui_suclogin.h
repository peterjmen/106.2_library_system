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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_sucLogin
{
public:
    QLabel *label;
    QPushButton *pushButton_logout;

    void setupUi(QDialog *sucLogin)
    {
        if (sucLogin->objectName().isEmpty())
            sucLogin->setObjectName(QString::fromUtf8("sucLogin"));
        sucLogin->resize(810, 517);
        label = new QLabel(sucLogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 220, 261, 101));
        pushButton_logout = new QPushButton(sucLogin);
        pushButton_logout->setObjectName(QString::fromUtf8("pushButton_logout"));
        pushButton_logout->setGeometry(QRect(500, 400, 80, 24));

        retranslateUi(sucLogin);

        QMetaObject::connectSlotsByName(sucLogin);
    } // setupUi

    void retranslateUi(QDialog *sucLogin)
    {
        sucLogin->setWindowTitle(QCoreApplication::translate("sucLogin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("sucLogin", "This is the logged in box", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("sucLogin", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sucLogin: public Ui_sucLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUCLOGIN_H
