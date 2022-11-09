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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminWindow
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QLabel *label;
    QPushButton *pushButton_admin_logout;
    QWidget *tab_2;
    QWidget *tab;
    QWidget *tab_3;

    void setupUi(QDialog *adminWindow)
    {
        if (adminWindow->objectName().isEmpty())
            adminWindow->setObjectName(QString::fromUtf8("adminWindow"));
        adminWindow->resize(706, 450);
        tabWidget = new QTabWidget(adminWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 711, 451));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        label = new QLabel(tab_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 30, 381, 181));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton_admin_logout = new QPushButton(tab_1);
        pushButton_admin_logout->setObjectName(QString::fromUtf8("pushButton_admin_logout"));
        pushButton_admin_logout->setGeometry(QRect(300, 210, 80, 24));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());

        retranslateUi(adminWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(adminWindow);
    } // setupUi

    void retranslateUi(QDialog *adminWindow)
    {
        adminWindow->setWindowTitle(QCoreApplication::translate("adminWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("adminWindow", "Welcome to the admin window", nullptr));
        pushButton_admin_logout->setText(QCoreApplication::translate("adminWindow", "Log out", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("adminWindow", "Account", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("adminWindow", "Manage Users", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("adminWindow", "Catalogue", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("adminWindow", "System Notifications", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminWindow: public Ui_adminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
