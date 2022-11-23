/********************************************************************************
** Form generated from reading UI file 'admintest.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINTEST_H
#define UI_ADMINTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminTest
{
public:
    QPushButton *pushButton_admin_logout;

    void setupUi(QDialog *adminTest)
    {
        if (adminTest->objectName().isEmpty())
            adminTest->setObjectName("adminTest");
        adminTest->resize(1087, 611);
        pushButton_admin_logout = new QPushButton(adminTest);
        pushButton_admin_logout->setObjectName("pushButton_admin_logout");
        pushButton_admin_logout->setGeometry(QRect(490, 410, 80, 24));

        retranslateUi(adminTest);

        QMetaObject::connectSlotsByName(adminTest);
    } // setupUi

    void retranslateUi(QDialog *adminTest)
    {
        adminTest->setWindowTitle(QCoreApplication::translate("adminTest", "Dialog", nullptr));
        pushButton_admin_logout->setText(QCoreApplication::translate("adminTest", "Log out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminTest: public Ui_adminTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINTEST_H
