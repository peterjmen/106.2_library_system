/********************************************************************************
** Form generated from reading UI file 'adminAddUser.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINADDUSER_H
#define UI_ADMINADDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminAddUser
{
public:
    QWidget *widget_2;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_continue;
    QPushButton *pushButton_cancel;
    QLineEdit *lineEdit_username;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_password;

    void setupUi(QDialog *adminAddUser)
    {
        if (adminAddUser->objectName().isEmpty())
            adminAddUser->setObjectName("adminAddUser");
        adminAddUser->resize(1204, 626);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(133, 141, 111, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(250, 249, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(122, 122, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(163, 163, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(208, 208, 208, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        QBrush brush8(QColor(227, 227, 227, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        QBrush brush9(QColor(64, 65, 66, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        QBrush brush10(QColor(160, 160, 160, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        QBrush brush11(QColor(255, 51, 51, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush12(QColor(105, 105, 105, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush12);
        QBrush brush13(QColor(53, 54, 55, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        adminAddUser->setPalette(palette);
        adminAddUser->setStyleSheet(QString::fromUtf8("background-color: #858D6F;"));
        widget_2 = new QWidget(adminAddUser);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(60, -30, 1351, 951));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: #858D6F;"));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 200, 481, 81));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"font: 700 54pt \"Sitka Banner\";\n"
"color : #CED2BA;"));
        label_6 = new QLabel(widget_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 270, 321, 31));
        label_6->setStyleSheet(QString::fromUtf8("\n"
"font: 700 20pt \"Sitka Banner\";\n"
"color :#CED2BA;"));
        pushButton_continue = new QPushButton(widget_2);
        pushButton_continue->setObjectName("pushButton_continue");
        pushButton_continue->setGeometry(QRect(20, 440, 191, 41));
        pushButton_continue->setStyleSheet(QString::fromUtf8("background-color: #CED2BA;\n"
"border-radius: 1px;\n"
"font: 300 12pt \"Segoe UI Light\";\n"
"color: #858D6F;"));
        pushButton_cancel = new QPushButton(widget_2);
        pushButton_cancel->setObjectName("pushButton_cancel");
        pushButton_cancel->setGeometry(QRect(230, 440, 191, 41));
        pushButton_cancel->setStyleSheet(QString::fromUtf8("background-color: #CED2BA;\n"
"border-radius : 1px;\n"
"font: 300 12pt \"Segoe UI Light\";\n"
"color: #858D6F;"));
        lineEdit_username = new QLineEdit(widget_2);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(20, 320, 401, 41));
        lineEdit_username->setStyleSheet(QString::fromUtf8("border-color: #CED2BA;\n"
"border-width : 1.2px;\n"
"border-style:solid;"));
        label_7 = new QLabel(widget_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 370, 241, 16));
        label_7->setStyleSheet(QString::fromUtf8("font: 300 12pt \"Segoe UI Light\";\n"
"color : #CED2BA ;"));
        label_8 = new QLabel(widget_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 300, 81, 20));
        label_8->setStyleSheet(QString::fromUtf8("font: 300 12pt \"Segoe UI Light\";\n"
"color : #CED2BA;"));
        lineEdit_password = new QLineEdit(widget_2);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(20, 390, 401, 41));
        lineEdit_password->setStyleSheet(QString::fromUtf8("border-color: #CED2BA;\n"
"border-width : 1.2px;\n"
"border-style:solid;"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        retranslateUi(adminAddUser);

        QMetaObject::connectSlotsByName(adminAddUser);
    } // setupUi

    void retranslateUi(QDialog *adminAddUser)
    {
        adminAddUser->setWindowTitle(QCoreApplication::translate("adminAddUser", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("adminAddUser", "Add New User", nullptr));
        label_6->setText(QCoreApplication::translate("adminAddUser", "Please Enter User credentials", nullptr));
        pushButton_continue->setText(QCoreApplication::translate("adminAddUser", "Continue", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("adminAddUser", "Cancel", nullptr));
        lineEdit_username->setText(QString());
        label_7->setText(QCoreApplication::translate("adminAddUser", "Password  ", nullptr));
        label_8->setText(QCoreApplication::translate("adminAddUser", "Username", nullptr));
        lineEdit_password->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adminAddUser: public Ui_adminAddUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINADDUSER_H
