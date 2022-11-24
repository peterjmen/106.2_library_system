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
    QScrollArea *accounts_scrollArea;
    QWidget *horizont;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *accountsVertLayout;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *userIDList;
    QVBoxLayout *usernameList;
    QVBoxLayout *userPasswordList;
    QLabel *label_8;
    QLabel *label_4;
    QWidget *tab_2;
    QPushButton *bookSearchButtonAdmin;
    QLineEdit *lineEdit_bookSearchText;
    QScrollArea *catalogue_scrollArea;
    QWidget *catalogueVertLayout;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *catalogueLayout;
    QVBoxLayout *bookCoverVertLayout;
    QVBoxLayout *bookInfoVertLayout;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *bookQuantityVertLayout;
    QVBoxLayout *bookEditVertLayout;
    QVBoxLayout *bookDeleteVertLayout;
    QWidget *widget_2;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *addBookButton;
    QWidget *tab;
    QLabel *loggedInUsernameLabel;
    QWidget *widget_3;
    QWidget *widget;
    QLabel *label;
    QScrollArea *notifScrollArea;
    QWidget *catalogueVertLayout_3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *allBookCovers;
    QVBoxLayout *allReservedBooksList;
    QVBoxLayout *allReservedBooksListReservedDate;
    QVBoxLayout *allReservedBooksListDueDate;
    QVBoxLayout *allReservedBooksListStatus;
    QVBoxLayout *allReservedBooksUserName;
    QVBoxLayout *allReservedBooksListUserID;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;

    void setupUi(QDialog *adminWindow)
    {
        if (adminWindow->objectName().isEmpty())
            adminWindow->setObjectName("adminWindow");
        adminWindow->resize(1204, 626);
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
        pushButton_admin_logout->setGeometry(QRect(1100, 30, 80, 24));
        widget_4 = new QWidget(tab_3);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(10, 70, 1151, 441));
        widget_4->setStyleSheet(QString::fromUtf8("background-color:#858D6F; \n"
"border-style:none  ;\n"
""));
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(10, 50, 1101, 341));
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
        accounts_scrollArea = new QScrollArea(widget_5);
        accounts_scrollArea->setObjectName("accounts_scrollArea");
        accounts_scrollArea->setGeometry(QRect(10, 10, 1101, 331));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(206, 210, 186, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        accounts_scrollArea->setPalette(palette);
        accounts_scrollArea->setAutoFillBackground(false);
        accounts_scrollArea->setStyleSheet(QString::fromUtf8("\n"
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
"	border-top-left-radius: 7px;\n"
"	border-top-right-radius: 7px;\n"
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
"QScrollBar::add-line:vertical {\n"
"	border: none;\n"
"	bac"
                        "kground-color: #858D6F;\n"
"	height: 15px;\n"
"	border-bottom-left-radius: 7px;\n"
"	border-bottom-right-radius: 7px;\n"
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
        accounts_scrollArea->setWidgetResizable(true);
        horizont = new QWidget();
        horizont->setObjectName("horizont");
        horizont->setGeometry(QRect(0, 0, 1101, 331));
        verticalLayoutWidget_8 = new QWidget(horizont);
        verticalLayoutWidget_8->setObjectName("verticalLayoutWidget_8");
        verticalLayoutWidget_8->setGeometry(QRect(10, 10, 1061, 311));
        accountsVertLayout = new QVBoxLayout(verticalLayoutWidget_8);
        accountsVertLayout->setObjectName("accountsVertLayout");
        accountsVertLayout->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(5, 5, 5, 5);
        userIDList = new QVBoxLayout();
        userIDList->setObjectName("userIDList");

        horizontalLayout_5->addLayout(userIDList);

        usernameList = new QVBoxLayout();
        usernameList->setObjectName("usernameList");
        usernameList->setSizeConstraint(QLayout::SetNoConstraint);

        horizontalLayout_5->addLayout(usernameList);

        userPasswordList = new QVBoxLayout();
        userPasswordList->setObjectName("userPasswordList");

        horizontalLayout_5->addLayout(userPasswordList);


        accountsVertLayout->addLayout(horizontalLayout_5);

        accounts_scrollArea->setWidget(horizont);
        label_8 = new QLabel(widget_4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 20, 471, 21));
        label_8->setStyleSheet(QString::fromUtf8("\n"
"font: 700 20pt \"Sitka Banner\";\n"
"color: #CED2BA;\n"
""));
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
        catalogue_scrollArea = new QScrollArea(tab_2);
        catalogue_scrollArea->setObjectName("catalogue_scrollArea");
        catalogue_scrollArea->setGeometry(QRect(20, 180, 1151, 351));
        catalogue_scrollArea->setAutoFillBackground(false);
        catalogue_scrollArea->setStyleSheet(QString::fromUtf8("QscrollArea{\n"
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
        catalogue_scrollArea->setWidgetResizable(true);
        catalogueVertLayout = new QWidget();
        catalogueVertLayout->setObjectName("catalogueVertLayout");
        catalogueVertLayout->setGeometry(QRect(0, 0, 1149, 349));
        horizontalLayoutWidget = new QWidget(catalogueVertLayout);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 1121, 321));
        catalogueLayout = new QHBoxLayout(horizontalLayoutWidget);
        catalogueLayout->setSpacing(2);
        catalogueLayout->setObjectName("catalogueLayout");
        catalogueLayout->setContentsMargins(10, 10, 10, 10);
        bookCoverVertLayout = new QVBoxLayout();
        bookCoverVertLayout->setObjectName("bookCoverVertLayout");
        bookCoverVertLayout->setContentsMargins(-1, 0, -1, 0);

        catalogueLayout->addLayout(bookCoverVertLayout);

        bookInfoVertLayout = new QVBoxLayout();
        bookInfoVertLayout->setObjectName("bookInfoVertLayout");

        catalogueLayout->addLayout(bookInfoVertLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(5, 5, 5, 5);
        bookQuantityVertLayout = new QVBoxLayout();
        bookQuantityVertLayout->setObjectName("bookQuantityVertLayout");

        horizontalLayout_4->addLayout(bookQuantityVertLayout);

        bookEditVertLayout = new QVBoxLayout();
        bookEditVertLayout->setObjectName("bookEditVertLayout");

        horizontalLayout_4->addLayout(bookEditVertLayout);

        bookDeleteVertLayout = new QVBoxLayout();
        bookDeleteVertLayout->setObjectName("bookDeleteVertLayout");

        horizontalLayout_4->addLayout(bookDeleteVertLayout);


        catalogueLayout->addLayout(horizontalLayout_4);

        catalogue_scrollArea->setWidget(catalogueVertLayout);
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
        tabWidget->addTab(tab_2, QString());
        bookSearchButtonAdmin->raise();
        catalogue_scrollArea->raise();
        widget_2->raise();
        label_3->raise();
        label_5->raise();
        lineEdit_bookSearchText->raise();
        addBookButton->raise();
        tab = new QWidget();
        tab->setObjectName("tab");
        loggedInUsernameLabel = new QLabel(tab);
        loggedInUsernameLabel->setObjectName("loggedInUsernameLabel");
        loggedInUsernameLabel->setGeometry(QRect(10, 10, 431, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Banner")});
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        loggedInUsernameLabel->setFont(font);
        loggedInUsernameLabel->setStyleSheet(QString::fromUtf8("\n"
"font: 700 20pt \"Sitka Banner\";\n"
"color :#858D6F;\n"
""));
        widget_3 = new QWidget(tab);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(10, 60, 1181, 441));
        widget_3->setStyleSheet(QString::fromUtf8("background-color:#858D6F; \n"
"border-style:none  ;\n"
""));
        widget = new QWidget(widget_3);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 90, 1161, 341));
        widget->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"background-color: #CED2BA;"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 161, 31));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 700 20pt \"Sitka Banner\";\n"
"color :#CED2BA;\n"
""));
        notifScrollArea = new QScrollArea(widget);
        notifScrollArea->setObjectName("notifScrollArea");
        notifScrollArea->setGeometry(QRect(10, 0, 1151, 351));
        notifScrollArea->setAutoFillBackground(false);
        notifScrollArea->setStyleSheet(QString::fromUtf8("QscrollArea{\n"
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
        notifScrollArea->setWidgetResizable(true);
        catalogueVertLayout_3 = new QWidget();
        catalogueVertLayout_3->setObjectName("catalogueVertLayout_3");
        catalogueVertLayout_3->setGeometry(QRect(0, 0, 1151, 351));
        horizontalLayoutWidget_2 = new QWidget(catalogueVertLayout_3);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(0, 10, 1121, 321));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(10, 10, 10, 10);
        allBookCovers = new QVBoxLayout();
        allBookCovers->setObjectName("allBookCovers");
        allBookCovers->setContentsMargins(-1, 0, -1, 0);

        horizontalLayout_3->addLayout(allBookCovers);

        allReservedBooksList = new QVBoxLayout();
        allReservedBooksList->setObjectName("allReservedBooksList");

        horizontalLayout_3->addLayout(allReservedBooksList);

        allReservedBooksListReservedDate = new QVBoxLayout();
        allReservedBooksListReservedDate->setObjectName("allReservedBooksListReservedDate");

        horizontalLayout_3->addLayout(allReservedBooksListReservedDate);

        allReservedBooksListDueDate = new QVBoxLayout();
        allReservedBooksListDueDate->setObjectName("allReservedBooksListDueDate");

        horizontalLayout_3->addLayout(allReservedBooksListDueDate);

        allReservedBooksListStatus = new QVBoxLayout();
        allReservedBooksListStatus->setObjectName("allReservedBooksListStatus");

        horizontalLayout_3->addLayout(allReservedBooksListStatus);

        allReservedBooksUserName = new QVBoxLayout();
        allReservedBooksUserName->setObjectName("allReservedBooksUserName");

        horizontalLayout_3->addLayout(allReservedBooksUserName);

        allReservedBooksListUserID = new QVBoxLayout();
        allReservedBooksListUserID->setObjectName("allReservedBooksListUserID");

        horizontalLayout_3->addLayout(allReservedBooksListUserID);

        notifScrollArea->setWidget(catalogueVertLayout_3);
        label_7 = new QLabel(widget_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(70, 40, 71, 21));
        label_7->setStyleSheet(QString::fromUtf8("\n"
"font: 700 20pt \"Sitka Banner\";\n"
"color: #CED2BA;\n"
""));
        label_9 = new QLabel(widget_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(350, 40, 161, 21));
        label_9->setStyleSheet(QString::fromUtf8("\n"
"font: 700 20pt \"Sitka Banner\";\n"
"color: #CED2BA;\n"
""));
        label_10 = new QLabel(widget_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(540, 40, 161, 21));
        label_10->setStyleSheet(QString::fromUtf8("\n"
"font: 700 20pt \"Sitka Banner\";\n"
"color: #CED2BA;\n"
""));
        label_11 = new QLabel(widget_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(890, 40, 61, 21));
        label_11->setStyleSheet(QString::fromUtf8("\n"
"font: 700 20pt \"Sitka Banner\";\n"
"color: #CED2BA;\n"
""));
        label_12 = new QLabel(widget_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(1040, 40, 201, 21));
        label_12->setStyleSheet(QString::fromUtf8("\n"
"font: 700 20pt \"Sitka Banner\";\n"
"color: #CED2BA;\n"
""));
        label_13 = new QLabel(widget_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(710, 40, 71, 21));
        label_13->setStyleSheet(QString::fromUtf8("\n"
"font: 700 20pt \"Sitka Banner\";\n"
"color: #CED2BA;\n"
""));
        label_14 = new QLabel(widget_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(230, 40, 71, 21));
        label_14->setStyleSheet(QString::fromUtf8("\n"
"font: 700 20pt \"Sitka Banner\";\n"
"color: #CED2BA;\n"
""));
        widget->raise();
        label_7->raise();
        label_9->raise();
        label_10->raise();
        label_12->raise();
        label_13->raise();
        label_11->raise();
        label_14->raise();
        tabWidget->addTab(tab, QString());
        widget_3->raise();
        loggedInUsernameLabel->raise();

        retranslateUi(adminWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(adminWindow);
    } // setupUi

    void retranslateUi(QDialog *adminWindow)
    {
        adminWindow->setWindowTitle(QCoreApplication::translate("adminWindow", "Dialog", nullptr));
        pushButton_admin_logout->setText(QCoreApplication::translate("adminWindow", "Log Out", nullptr));
        label_2->setText(QCoreApplication::translate("adminWindow", "My Books", nullptr));
        label_8->setText(QCoreApplication::translate("adminWindow", "User Account List", nullptr));
        label_4->setText(QCoreApplication::translate("adminWindow", "Welcome Administrator", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("adminWindow", "User Accounts", nullptr));
        bookSearchButtonAdmin->setText(QCoreApplication::translate("adminWindow", "Search", nullptr));
        label_3->setText(QCoreApplication::translate("adminWindow", "Find Books ", nullptr));
        label_5->setText(QCoreApplication::translate("adminWindow", "Enter title and click search below ", nullptr));
        addBookButton->setText(QCoreApplication::translate("adminWindow", "Add new Book", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("adminWindow", "Catalogue", nullptr));
        loggedInUsernameLabel->setText(QCoreApplication::translate("adminWindow", "Review all Active notifications", nullptr));
        label->setText(QCoreApplication::translate("adminWindow", "My Books", nullptr));
        label_7->setText(QCoreApplication::translate("adminWindow", "Book", nullptr));
        label_9->setText(QCoreApplication::translate("adminWindow", "Date Reserved", nullptr));
        label_10->setText(QCoreApplication::translate("adminWindow", "Date Due", nullptr));
        label_11->setText(QCoreApplication::translate("adminWindow", "User", nullptr));
        label_12->setText(QCoreApplication::translate("adminWindow", "User ID", nullptr));
        label_13->setText(QCoreApplication::translate("adminWindow", "Status", nullptr));
        label_14->setText(QCoreApplication::translate("adminWindow", "Title", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("adminWindow", "Notifications", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminWindow: public Ui_adminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
