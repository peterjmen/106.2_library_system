/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
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
    QPushButton *pushButton_admin_logout_2;

    void setupUi(QDialog *adminWindow)
    {
        if (adminWindow->objectName().isEmpty())
            adminWindow->setObjectName("adminWindow");
        adminWindow->resize(706, 450);
        label = new QLabel(adminWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 90, 381, 181));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton_admin_logout = new QPushButton(adminWindow);
        pushButton_admin_logout->setObjectName("pushButton_admin_logout");
        pushButton_admin_logout->setGeometry(QRect(300, 290, 80, 24));
        pushButton_admin_logout_2 = new QPushButton(adminWindow);
        pushButton_admin_logout_2->setObjectName("pushButton_admin_logout_2");
        pushButton_admin_logout_2->setGeometry(QRect(460, 250, 80, 24));

        retranslateUi(adminWindow);

        QMetaObject::connectSlotsByName(adminWindow);
    } // setupUi

    void retranslateUi(QDialog *adminWindow)
    {
        adminWindow->setWindowTitle(QCoreApplication::translate("adminWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("adminWindow", "Welcome to the admin window", nullptr));
        pushButton_admin_logout->setText(QCoreApplication::translate("adminWindow", "Log out", nullptr));
        pushButton_admin_logout_2->setText(QCoreApplication::translate("adminWindow", "Log out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminWindow: public Ui_adminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
