/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminWindow
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QPushButton *pushButton_admin_logout;
    QWidget *widget_4;
    QWidget *widget_5;
    QLabel *label_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollContents_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *usernameList;
    QVBoxLayout *userPasswordList;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *userIDList;
    QVBoxLayout *userEditButtons;
    QVBoxLayout *userDeleteButtons;
    QLabel *label_9;
    QPushButton *addUserButton;
    QLabel *label_4;
    QWidget *tab_2;
    QPushButton *bookSearchButtonAdmin;
    QLineEdit *lineEdit_bookSearchText;
    QWidget *widget_2;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *addBookButton;
    QScrollArea *scrollArea;
    QWidget *scrollContents;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *bookCoverVertLayout;
    QVBoxLayout *bookInfoVertLayout;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *bookQuantityVertLayout;
    QVBoxLayout *bookEditVertLayout;
    QVBoxLayout *bookDeleteVertLayout;
    QWidget *layoutWidget;
    QVBoxLayout *usernameList_2;

    void setupUi(QDialog *adminWindow)
    {
        if (adminWindow->objectName().isEmpty())
            adminWindow->setObjectName("adminWindow");
        adminWindow->resize(1204, 626);
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
        adminWindow->setPalette(palette);
        adminWindow->setStyleSheet(QString::fromUtf8("background-color: #858D6F;"));
        tabWidget = new QTabWidget(adminWindow);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 1203, 628));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: #CED2BA;\n"
"font: 300 12pt \"Segoe UI Light\";\n"
"border-color: #858D6F;\n"
"color: #000000;\n"
"\n"
""));
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        pushButton_admin_logout = new QPushButton(tab_3);
        pushButton_admin_logout->setObjectName("pushButton_admin_logout");
        pushButton_admin_logout->setGeometry(QRect(1120, 10, 80, 24));
        widget_4 = new QWidget(tab_3);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(10, 70, 1191, 441));
        widget_4->setStyleSheet(QString::fromUtf8("background-color:#858D6F; \n"
"border-style:none  ;\n"
""));
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(10, 80, 1151, 341));
        widget_5->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"background-color: #CED2BA;"));
        label_2 = new QLabel(widget_5);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 20, 161, 31));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"font: 700 20pt \"Sitka Banner\";\n"
"color :#CED2BA;\n"
""));
        scrollArea_2 = new QScrollArea(widget_5);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(0, 10, 1151, 351));
        scrollArea_2->setAutoFillBackground(false);
        scrollArea_2->setStyleSheet(QString::fromUtf8("QscrollArea{\n"
"font: 300 12pt \"Segoe UI Light\";\n"
"color: #ffffff;\n"
"border-style: none;\n"
"\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"	border: none;\n"
"    Background-color: #CED2BA;\n"
"    width: 14px;\n"
"    margin: 15px 0 15px 0;\n"
"	border-radius: 0px;\n"
" }\n"
"\n"
"/*  HANDLE BAR VERTICAL */\n"
"QScrollBar::handle:vertical {	\n"
"	background-color: #858D6F;\n"
"	min-height: 30px;\n"
"\n"
"}\n"
"QScrollBar::handle:vertical:hover{	\n"
"	background-color:#858D6F;\n"
"}\n"
"QScrollBar::handle:vertical:pressed {	\n"
"	background-color: #858D6F;\n"
"}\n"
"\n"
"/* BTN TOP - SCROLLBAR */\n"
"QScrollBar::sub-line:vertical {\n"
"	border: none;\n"
"	background-color: #858D6F;\n"
"	height: 15px;\n"
"\n"
"	subcontrol-position: top;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:vertical:hover {	\n"
"	background-color:rgb(206, 210, 186);\n"
"}\n"
"QScrollBar::sub-line:vertical:pressed {	\n"
"	background-color: rgb(206, 210, 186);\n"
"}\n"
"\n"
"/* BTN BOTTOM - SCROLLBAR */\n"
"QScrollBar::"
                        "add-line:vertical {\n"
"	border: none;\n"
"	background-color: #858D6F;\n"
"	height: 15px;\n"
"\n"
"	subcontrol-position: bottom;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-line:vertical:hover {	\n"
"	background-color: rgb(206, 210, 186);\n"
"}\n"
"QScrollBar::add-line:vertical:pressed {	\n"
"	background-color: rgb(206, 210, 186);\n"
"}\n"
"\n"
"/* RESET ARROW */\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {\n"
"	background: none;\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"	background: none;\n"
"}\n"
""));
        scrollArea_2->setWidgetResizable(true);
        scrollContents_2 = new QWidget();
        scrollContents_2->setObjectName("scrollContents_2");
        scrollContents_2->setGeometry(QRect(0, 0, 1151, 351));
        horizontalLayoutWidget_3 = new QWidget(scrollContents_2);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(10, 0, 1101, 321));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(10, 10, 10, 10);
        usernameList = new QVBoxLayout();
        usernameList->setObjectName("usernameList");

        horizontalLayout_2->addLayout(usernameList);

        userPasswordList = new QVBoxLayout();
        userPasswordList->setObjectName("userPasswordList");

        horizontalLayout_2->addLayout(userPasswordList);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(5, 5, 5, 5);
        userIDList = new QVBoxLayout();
        userIDList->setObjectName("userIDList");

        horizontalLayout_7->addLayout(userIDList);

        userEditButtons = new QVBoxLayout();
        userEditButtons->setObjectName("userEditButtons");

        horizontalLayout_7->addLayout(userEditButtons);

        userDeleteButtons = new QVBoxLayout();
        userDeleteButtons->setObjectName("userDeleteButtons");

        horizontalLayout_7->addLayout(userDeleteButtons);


        horizontalLayout_2->addLayout(horizontalLayout_7);

        scrollArea_2->setWidget(scrollContents_2);
        label_9 = new QLabel(widget_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 20, 191, 21));
        label_9->setStyleSheet(QString::fromUtf8("\n"
"font: 700 20pt \"Sitka Banner\";\n"
"color: #CED2BA;\n"
""));
        addUserButton = new QPushButton(widget_4);
        addUserButton->setObjectName("addUserButton");
        addUserButton->setGeometry(QRect(940, 20, 171, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        addUserButton->setPalette(palette1);
        addUserButton->setStyleSheet(QString::fromUtf8("background-color:#858D6F ;\n"
"border-radius : 1px;\n"
"font: 300 12pt \"Segoe UI Light\";\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 10, 671, 51));
        label_4->setStyleSheet(QString::fromUtf8("\n"
"font: 700 50pt \"Sitka Banner\";\n"
"color :#858D6F;"));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        bookSearchButtonAdmin = new QPushButton(tab_2);
        bookSearchButtonAdmin->setObjectName("bookSearchButtonAdmin");
        bookSearchButtonAdmin->setGeometry(QRect(380, 120, 171, 31));
        bookSearchButtonAdmin->setStyleSheet(QString::fromUtf8("background-color:#858D6F ;\n"
"border-radius : 1px;\n"
"font: 300 12pt \"Segoe UI Light\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_bookSearchText = new QLineEdit(tab_2);
        lineEdit_bookSearchText->setObjectName("lineEdit_bookSearchText");
        lineEdit_bookSearchText->setGeometry(QRect(10, 120, 361, 31));
        widget_2 = new QWidget(tab_2);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(910, 640, 120, 80));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 30, 341, 51));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"font: 700 50pt \"Sitka Banner\";\n"
"color :#858D6F;"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 80, 381, 31));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"font: 700 20pt \"Sitka Banner\";\n"
"color :#858D6F;"));
        addBookButton = new QPushButton(tab_2);
        addBookButton->setObjectName("addBookButton");
        addBookButton->setGeometry(QRect(980, 120, 171, 31));
        addBookButton->setStyleSheet(QString::fromUtf8("background-color:#858D6F ;\n"
"border-radius : 1px;\n"
"font: 300 12pt \"Segoe UI Light\";\n"
"color: rgb(255, 255, 255);"));
        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(20, 160, 1151, 351));
        scrollArea->setAutoFillBackground(false);
        scrollArea->setStyleSheet(QString::fromUtf8("QscrollArea{\n"
"font: 300 12pt \"Segoe UI Light\";\n"
"color: #ffffff;\n"
"border-style: none;\n"
"\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"	border: none;\n"
"    Background-color: #CED2BA;\n"
"    width: 14px;\n"
"    margin: 15px 0 15px 0;\n"
"	border-radius: 0px;\n"
" }\n"
"\n"
"/*  HANDLE BAR VERTICAL */\n"
"QScrollBar::handle:vertical {	\n"
"	background-color: #858D6F;\n"
"	min-height: 30px;\n"
"\n"
"}\n"
"QScrollBar::handle:vertical:hover{	\n"
"	background-color:#858D6F;\n"
"}\n"
"QScrollBar::handle:vertical:pressed {	\n"
"	background-color: #858D6F;\n"
"}\n"
"\n"
"/* BTN TOP - SCROLLBAR */\n"
"QScrollBar::sub-line:vertical {\n"
"	border: none;\n"
"	background-color: #858D6F;\n"
"	height: 15px;\n"
"\n"
"	subcontrol-position: top;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:vertical:hover {	\n"
"	background-color:rgb(206, 210, 186);\n"
"}\n"
"QScrollBar::sub-line:vertical:pressed {	\n"
"	background-color: rgb(206, 210, 186);\n"
"}\n"
"\n"
"/* BTN BOTTOM - SCROLLBAR */\n"
"QScrollBar::"
                        "add-line:vertical {\n"
"	border: none;\n"
"	background-color: #858D6F;\n"
"	height: 15px;\n"
"\n"
"	subcontrol-position: bottom;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-line:vertical:hover {	\n"
"	background-color: rgb(206, 210, 186);\n"
"}\n"
"QScrollBar::add-line:vertical:pressed {	\n"
"	background-color: rgb(206, 210, 186);\n"
"}\n"
"\n"
"/* RESET ARROW */\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {\n"
"	background: none;\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"	background: none;\n"
"}\n"
""));
        scrollArea->setWidgetResizable(true);
        scrollContents = new QWidget();
        scrollContents->setObjectName("scrollContents");
        scrollContents->setGeometry(QRect(0, 0, 1149, 349));
        horizontalLayoutWidget_2 = new QWidget(scrollContents);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(10, 10, 1131, 321));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        bookCoverVertLayout = new QVBoxLayout();
        bookCoverVertLayout->setObjectName("bookCoverVertLayout");
        bookCoverVertLayout->setContentsMargins(-1, 0, -1, 0);

        horizontalLayout->addLayout(bookCoverVertLayout);

        bookInfoVertLayout = new QVBoxLayout();
        bookInfoVertLayout->setObjectName("bookInfoVertLayout");

        horizontalLayout->addLayout(bookInfoVertLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(5, 5, 5, 5);
        bookQuantityVertLayout = new QVBoxLayout();
        bookQuantityVertLayout->setObjectName("bookQuantityVertLayout");

        horizontalLayout_6->addLayout(bookQuantityVertLayout);

        bookEditVertLayout = new QVBoxLayout();
        bookEditVertLayout->setObjectName("bookEditVertLayout");

        horizontalLayout_6->addLayout(bookEditVertLayout);

        bookDeleteVertLayout = new QVBoxLayout();
        bookDeleteVertLayout->setObjectName("bookDeleteVertLayout");

        horizontalLayout_6->addLayout(bookDeleteVertLayout);


        horizontalLayout->addLayout(horizontalLayout_6);

        scrollArea->setWidget(scrollContents);
        tabWidget->addTab(tab_2, QString());
        bookSearchButtonAdmin->raise();
        widget_2->raise();
        label_3->raise();
        label_5->raise();
        lineEdit_bookSearchText->raise();
        addBookButton->raise();
        scrollArea->raise();
        layoutWidget = new QWidget(adminWindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(890, 600, 2, 2));
        usernameList_2 = new QVBoxLayout(layoutWidget);
        usernameList_2->setObjectName("usernameList_2");
        usernameList_2->setContentsMargins(0, 0, 0, 0);

        retranslateUi(adminWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(adminWindow);
    } // setupUi

    void retranslateUi(QDialog *adminWindow)
    {
        adminWindow->setWindowTitle(QCoreApplication::translate("adminWindow", "Dialog", nullptr));
        pushButton_admin_logout->setText(QCoreApplication::translate("adminWindow", "Log Out", nullptr));
        label_2->setText(QCoreApplication::translate("adminWindow", "My Books", nullptr));
        label_9->setText(QCoreApplication::translate("adminWindow", "USER DATABASE", nullptr));
        addUserButton->setText(QCoreApplication::translate("adminWindow", "Add new user", nullptr));
        label_4->setText(QCoreApplication::translate("adminWindow", "Welcome Administrator", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("adminWindow", "User Accounts", nullptr));
        bookSearchButtonAdmin->setText(QCoreApplication::translate("adminWindow", "Search", nullptr));
        label_3->setText(QCoreApplication::translate("adminWindow", "Find Books ", nullptr));
        label_5->setText(QCoreApplication::translate("adminWindow", "Enter title and click search below ", nullptr));
        addBookButton->setText(QCoreApplication::translate("adminWindow", "Add new Book", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("adminWindow", "Catalogue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminWindow: public Ui_adminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
