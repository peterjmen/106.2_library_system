/********************************************************************************
** Form generated from reading UI file 'suclogin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sucLogin
{
public:
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QPushButton *bookSearchButton;
    QLineEdit *lineEdit_bookSearchText;
    QScrollArea *scrollArea;
    QWidget *scrollContents;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *bookCoverVertLayout;
    QVBoxLayout *bookInfoVertLayout;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *bookQuantityVertLayout;
    QVBoxLayout *bookOptions;
    QScrollArea *scrollAreaReservedBooks;
    QWidget *scrollAreaReservedBooks_Area;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *reservedBooks;
    QLabel *label_2;
    QWidget *widget_2;
    QLabel *label_3;
    QLabel *label_5;
    QWidget *tab;
    QPushButton *pushButton_logout;
    QLabel *loggedInUsernameLabel;
    QLabel *loggedInUsernameID;
    QLabel *label_4;
    QScrollArea *recc_genre;
    QWidget *recc_genre_scrollArea;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *reccomended_genre_window;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *reccomended_books_window;
    QLabel *label_6;
    QWidget *widget_3;
    QWidget *widget;
    QLabel *label;
    QScrollArea *yourReservedBooks;
    QWidget *yourReservedBooks_scrollArea;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *allReservedBookInfo;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *yourReservedBooksList;
    QVBoxLayout *yourReservedBooksListReservedDate;
    QVBoxLayout *yourReservedBooksListDueDate;
    QVBoxLayout *yourReservedBooksListStatus;
    QVBoxLayout *yourReservedBooksListReturnButton;
    QLabel *label_7;

    void setupUi(QDialog *sucLogin)
    {
        if (sucLogin->objectName().isEmpty())
            sucLogin->setObjectName("sucLogin");
        sucLogin->resize(1221, 646);
        sucLogin->setStyleSheet(QString::fromUtf8("background-color: #858D6F;"));
        horizontalLayout_2 = new QHBoxLayout(sucLogin);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        tabWidget = new QTabWidget(sucLogin);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: #CED2BA;\n"
"font: 300 12pt \"Segoe UI Light\";\n"
"border-color: #858D6F;\n"
"color: #ffffff;\n"
"\n"
"\n"
"\n"
"\n"
""));
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        bookSearchButton = new QPushButton(tab_2);
        bookSearchButton->setObjectName("bookSearchButton");
        bookSearchButton->setGeometry(QRect(380, 120, 171, 31));
        bookSearchButton->setStyleSheet(QString::fromUtf8("background-color:#858D6F ;\n"
"border-radius : 1px;\n"
"font: 300 12pt \"Segoe UI Light\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_bookSearchText = new QLineEdit(tab_2);
        lineEdit_bookSearchText->setObjectName("lineEdit_bookSearchText");
        lineEdit_bookSearchText->setGeometry(QRect(10, 120, 361, 31));
        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(20, 180, 651, 351));
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
        scrollContents->setGeometry(QRect(0, 0, 649, 349));
        horizontalLayoutWidget = new QWidget(scrollContents);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 641, 321));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
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

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(5, 5, 5, 5);
        bookQuantityVertLayout = new QVBoxLayout();
        bookQuantityVertLayout->setObjectName("bookQuantityVertLayout");

        horizontalLayout_4->addLayout(bookQuantityVertLayout);

        bookOptions = new QVBoxLayout();
        bookOptions->setObjectName("bookOptions");

        horizontalLayout_4->addLayout(bookOptions);


        horizontalLayout->addLayout(horizontalLayout_4);

        scrollArea->setWidget(scrollContents);
        scrollAreaReservedBooks = new QScrollArea(tab_2);
        scrollAreaReservedBooks->setObjectName("scrollAreaReservedBooks");
        scrollAreaReservedBooks->setGeometry(QRect(700, 240, 321, 301));
        scrollAreaReservedBooks->setStyleSheet(QString::fromUtf8("border: 0px solid lightgray;\n"
"font: 300 12pt \"Segoe UI Light\";\n"
"color : #fffffF;\n"
""));
        scrollAreaReservedBooks->setWidgetResizable(true);
        scrollAreaReservedBooks_Area = new QWidget();
        scrollAreaReservedBooks_Area->setObjectName("scrollAreaReservedBooks_Area");
        scrollAreaReservedBooks_Area->setGeometry(QRect(0, 0, 321, 301));
        verticalLayoutWidget_2 = new QWidget(scrollAreaReservedBooks_Area);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(20, 20, 271, 281));
        reservedBooks = new QVBoxLayout(verticalLayoutWidget_2);
        reservedBooks->setObjectName("reservedBooks");
        reservedBooks->setContentsMargins(0, 0, 0, 0);
        scrollAreaReservedBooks->setWidget(scrollAreaReservedBooks_Area);
        label_2 = new QLabel(tab_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(700, 200, 371, 31));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"font: 700 20pt \"Sitka Banner\";\n"
"color :#858D6F;"));
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
        tabWidget->addTab(tab_2, QString());
        bookSearchButton->raise();
        scrollArea->raise();
        scrollAreaReservedBooks->raise();
        label_2->raise();
        widget_2->raise();
        label_3->raise();
        label_5->raise();
        lineEdit_bookSearchText->raise();
        tab = new QWidget();
        tab->setObjectName("tab");
        pushButton_logout = new QPushButton(tab);
        pushButton_logout->setObjectName("pushButton_logout");
        pushButton_logout->setGeometry(QRect(1070, 500, 80, 24));
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
        loggedInUsernameID = new QLabel(tab);
        loggedInUsernameID->setObjectName("loggedInUsernameID");
        loggedInUsernameID->setGeometry(QRect(10, 50, 251, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Light")});
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        loggedInUsernameID->setFont(font1);
        loggedInUsernameID->setStyleSheet(QString::fromUtf8("font: 300 16pt \"Segoe UI Light\";\n"
"color : #858D6F;\n"
""));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(590, 70, 471, 31));
        label_4->setStyleSheet(QString::fromUtf8("\n"
"font: 700 20pt \"Sitka Banner\";\n"
"color :#858D6F;\n"
""));
        recc_genre = new QScrollArea(tab);
        recc_genre->setObjectName("recc_genre");
        recc_genre->setGeometry(QRect(580, 320, 591, 171));
        recc_genre->setStyleSheet(QString::fromUtf8("\n"
"QScrollBar{\n"
"	border: none;\n"
"    Background-color: #CED2BA;\n"
"    width: 14px;\n"
"    margin: 15px 0 15px 0;\n"
"	border-radius: 0px;\n"
" }\n"
"\n"
"/*  HANDLE BAR VERTICAL */\n"
"QScrollBar::handle{	\n"
"	background-color: #858D6F;\n"
"	min-height: 30px;\n"
"\n"
"}\n"
"QScrollBar::handle:hover{	\n"
"	background-color:#858D6F;\n"
"}\n"
"QScrollBar::handle:pressed {	\n"
"	background-color: #858D6F;\n"
"}\n"
"\n"
"/* BTN TOP - SCROLLBAR */\n"
"QScrollBar::sub-line {\n"
"	border: none;\n"
"	background-color: #858D6F;\n"
"	height: 15px;\n"
"	border-top-left-radius: 7px;\n"
"	border-top-right-radius: 7px;\n"
"	subcontrol-position: top;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:hover {	\n"
"	background-color:rgb(206, 210, 186);\n"
"}\n"
"QScrollBar::sub-line:pressed {	\n"
"	background-color: rgb(206, 210, 186);\n"
"}\n"
"\n"
"/* BTN BOTTOM - SCROLLBAR */\n"
"QScrollBar::add-line:{\n"
"	border: none;\n"
"	background-color: #858D6F;\n"
"	height: 15px;\n"
"	border-bottom-left-radius:"
                        " 7px;\n"
"	border-bottom-right-radius: 7px;\n"
"	subcontrol-position: bottom;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-line:hover {	\n"
"	background-color: rgb(206, 210, 186);\n"
"}\n"
"QScrollBar::add-line:pressed {	\n"
"	background-color: rgb(206, 210, 186);\n"
"}\n"
"\n"
"/* RESET ARROW */\n"
"QScrollBar::up-arrow, QScrollBar::down-arrow: {\n"
"	background: none;\n"
"}\n"
"QScrollBar::add-page, QScrollBar::sub-page: {\n"
"	background: none;\n"
"}\n"
""));
        recc_genre->setWidgetResizable(true);
        recc_genre_scrollArea = new QWidget();
        recc_genre_scrollArea->setObjectName("recc_genre_scrollArea");
        recc_genre_scrollArea->setGeometry(QRect(0, 0, 589, 169));
        recc_genre_scrollArea->setStyleSheet(QString::fromUtf8("QScrollBar:vertical {\n"
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
"	backgrou"
                        "nd-color: #858D6F;\n"
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
        horizontalLayoutWidget_3 = new QWidget(recc_genre_scrollArea);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(10, 10, 571, 151));
        reccomended_genre_window = new QHBoxLayout(horizontalLayoutWidget_3);
        reccomended_genre_window->setObjectName("reccomended_genre_window");
        reccomended_genre_window->setContentsMargins(0, 0, 0, 0);
        recc_genre->setWidget(recc_genre_scrollArea);
        scrollArea_2 = new QScrollArea(tab);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(580, 100, 591, 171));
        scrollArea_2->setStyleSheet(QString::fromUtf8("border-style: none;"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 591, 171));
        horizontalLayoutWidget_2 = new QWidget(scrollAreaWidgetContents);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(10, 10, 571, 151));
        reccomended_books_window = new QHBoxLayout(horizontalLayoutWidget_2);
        reccomended_books_window->setObjectName("reccomended_books_window");
        reccomended_books_window->setContentsMargins(0, 0, 0, 0);
        scrollArea_2->setWidget(scrollAreaWidgetContents);
        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(580, 290, 471, 21));
        label_6->setStyleSheet(QString::fromUtf8("\n"
"font: 700 20pt \"Sitka Banner\";\n"
"color :#858D6F;\n"
""));
        widget_3 = new QWidget(tab);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(10, 100, 561, 411));
        widget_3->setStyleSheet(QString::fromUtf8("background-color:#858D6F; \n"
"border-style:none  ;\n"
""));
        widget = new QWidget(widget_3);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 50, 541, 341));
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
        yourReservedBooks = new QScrollArea(widget);
        yourReservedBooks->setObjectName("yourReservedBooks");
        yourReservedBooks->setGeometry(QRect(10, 10, 521, 331));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
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
        yourReservedBooks->setPalette(palette);
        yourReservedBooks->setAutoFillBackground(false);
        yourReservedBooks->setStyleSheet(QString::fromUtf8("\n"
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
        yourReservedBooks->setWidgetResizable(true);
        yourReservedBooks_scrollArea = new QWidget();
        yourReservedBooks_scrollArea->setObjectName("yourReservedBooks_scrollArea");
        yourReservedBooks_scrollArea->setGeometry(QRect(0, 0, 521, 331));
        verticalLayoutWidget_7 = new QWidget(yourReservedBooks_scrollArea);
        verticalLayoutWidget_7->setObjectName("verticalLayoutWidget_7");
        verticalLayoutWidget_7->setGeometry(QRect(10, 10, 511, 311));
        allReservedBookInfo = new QVBoxLayout(verticalLayoutWidget_7);
        allReservedBookInfo->setObjectName("allReservedBookInfo");
        allReservedBookInfo->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(5, 5, 5, 5);
        yourReservedBooksList = new QVBoxLayout();
        yourReservedBooksList->setObjectName("yourReservedBooksList");

        horizontalLayout_3->addLayout(yourReservedBooksList);

        yourReservedBooksListReservedDate = new QVBoxLayout();
        yourReservedBooksListReservedDate->setObjectName("yourReservedBooksListReservedDate");
        yourReservedBooksListReservedDate->setSizeConstraint(QLayout::SetNoConstraint);

        horizontalLayout_3->addLayout(yourReservedBooksListReservedDate);

        yourReservedBooksListDueDate = new QVBoxLayout();
        yourReservedBooksListDueDate->setObjectName("yourReservedBooksListDueDate");

        horizontalLayout_3->addLayout(yourReservedBooksListDueDate);

        yourReservedBooksListStatus = new QVBoxLayout();
        yourReservedBooksListStatus->setObjectName("yourReservedBooksListStatus");

        horizontalLayout_3->addLayout(yourReservedBooksListStatus);

        yourReservedBooksListReturnButton = new QVBoxLayout();
        yourReservedBooksListReturnButton->setObjectName("yourReservedBooksListReturnButton");

        horizontalLayout_3->addLayout(yourReservedBooksListReturnButton);


        allReservedBookInfo->addLayout(horizontalLayout_3);

        yourReservedBooks->setWidget(yourReservedBooks_scrollArea);
        label_7 = new QLabel(widget_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 20, 471, 21));
        label_7->setStyleSheet(QString::fromUtf8("\n"
"font: 700 20pt \"Sitka Banner\";\n"
"color: #CED2BA;\n"
""));
        tabWidget->addTab(tab, QString());
        widget_3->raise();
        pushButton_logout->raise();
        label_4->raise();
        recc_genre->raise();
        loggedInUsernameLabel->raise();
        loggedInUsernameID->raise();
        scrollArea_2->raise();
        label_6->raise();

        horizontalLayout_2->addWidget(tabWidget);

        QWidget::setTabOrder(bookSearchButton, lineEdit_bookSearchText);
        QWidget::setTabOrder(lineEdit_bookSearchText, scrollArea);
        QWidget::setTabOrder(scrollArea, pushButton_logout);

        retranslateUi(sucLogin);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(sucLogin);
    } // setupUi

    void retranslateUi(QDialog *sucLogin)
    {
        sucLogin->setWindowTitle(QCoreApplication::translate("sucLogin", "Dialog", nullptr));
        bookSearchButton->setText(QCoreApplication::translate("sucLogin", "Search", nullptr));
        label_2->setText(QCoreApplication::translate("sucLogin", "Books you reserved this session :", nullptr));
        label_3->setText(QCoreApplication::translate("sucLogin", "Find Books ", nullptr));
        label_5->setText(QCoreApplication::translate("sucLogin", "Enter title and click search below ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("sucLogin", "Catalogue", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("sucLogin", "Log Out", nullptr));
        loggedInUsernameLabel->setText(QCoreApplication::translate("sucLogin", "Welcome User : <insert user here>", nullptr));
        loggedInUsernameID->setText(QCoreApplication::translate("sucLogin", "ID: <Id number goe shere>", nullptr));
        label_4->setText(QCoreApplication::translate("sucLogin", "Most Popular Books (top 5)", nullptr));
        label_6->setText(QCoreApplication::translate("sucLogin", "Books Recomended For You ", nullptr));
        label->setText(QCoreApplication::translate("sucLogin", "My Books", nullptr));
        label_7->setText(QCoreApplication::translate("sucLogin", "My Books ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("sucLogin", "Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sucLogin: public Ui_sucLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUCLOGIN_H
