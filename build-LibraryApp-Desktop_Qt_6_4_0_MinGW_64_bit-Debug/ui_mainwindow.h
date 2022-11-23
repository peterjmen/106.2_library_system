/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *label_pic;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_login;
    QPushButton *pushButton_register;
    QLineEdit *lineEdit_username;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_password;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(774, 542);
        MainWindow->setStyleSheet(QString::fromUtf8("this-> rgb(60, 121, 90);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-10, -30, 1351, 951));
        widget->setStyleSheet(QString::fromUtf8("background-color: #858D6F;"));
        label_pic = new QLabel(widget);
        label_pic->setObjectName("label_pic");
        label_pic->setGeometry(QRect(930, 140, 101, 171));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 200, 291, 81));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"font: 700 54pt \"Sitka Banner\";\n"
"color : #CED2BA;"));
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 270, 231, 31));
        label_4->setStyleSheet(QString::fromUtf8("\n"
"font: 700 20pt \"Sitka Banner\";\n"
"color :#CED2BA;"));
        pushButton_login = new QPushButton(widget);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(20, 440, 191, 41));
        pushButton_login->setStyleSheet(QString::fromUtf8("background-color: #CED2BA;\n"
"border-radius: 1px;\n"
"font: 300 12pt \"Segoe UI Light\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_register = new QPushButton(widget);
        pushButton_register->setObjectName("pushButton_register");
        pushButton_register->setGeometry(QRect(230, 440, 191, 41));
        pushButton_register->setStyleSheet(QString::fromUtf8("background-color: #CED2BA;\n"
"border-radius : 1px;\n"
"font: 300 12pt \"Segoe UI Light\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_username = new QLineEdit(widget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(20, 320, 401, 41));
        lineEdit_username->setStyleSheet(QString::fromUtf8("border-color: #CED2BA;\n"
"border-width : 1.2px;\n"
"border-style:solid;"));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 370, 241, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 300 12pt \"Segoe UI Light\";\n"
"color : #CED2BA ;"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 300, 81, 20));
        label->setStyleSheet(QString::fromUtf8("font: 300 12pt \"Segoe UI Light\";\n"
"color : #CED2BA;"));
        lineEdit_password = new QLineEdit(widget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(20, 390, 401, 41));
        lineEdit_password->setStyleSheet(QString::fromUtf8("border-color: #CED2BA;\n"
"border-width : 1.2px;\n"
"border-style:solid;"));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 774, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_pic->setText(QCoreApplication::translate("MainWindow", "grudges is here", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "KIA ORA ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Lets Get Started ", nullptr));
        pushButton_login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_register->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        lineEdit_username->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Password  ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lineEdit_password->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
