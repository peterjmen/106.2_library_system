/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminWindow
{
public:
    QLabel *label;
    QPushButton *pushButton_admin_logout;

    void setupUi(QDialog *adminWindow)
    {
        if (adminWindow->objectName().isEmpty())
            adminWindow->setObjectName(QString::fromUtf8("adminWindow"));
        adminWindow->resize(400, 300);
        label = new QLabel(adminWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 60, 211, 171));
        pushButton_admin_logout = new QPushButton(adminWindow);
        pushButton_admin_logout->setObjectName(QString::fromUtf8("pushButton_admin_logout"));
        pushButton_admin_logout->setGeometry(QRect(150, 230, 80, 24));

        retranslateUi(adminWindow);

        QMetaObject::connectSlotsByName(adminWindow);
    } // setupUi

    void retranslateUi(QDialog *adminWindow)
    {
        adminWindow->setWindowTitle(QCoreApplication::translate("adminWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("adminWindow", "Welcome to the admin window", nullptr));
        pushButton_admin_logout->setText(QCoreApplication::translate("adminWindow", "Log out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminWindow: public Ui_adminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
