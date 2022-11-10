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
    QWidget *tab;
    QLabel *label;
    QPushButton *pushButton_logout;
    QScrollArea *yourReservedBooks;
    QWidget *yourReservedBooks_scrollArea;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *yourReservedBooksList;
    QLabel *welcomeLabel;
    QLabel *loggedInUsernameLabel;
    QWidget *tab_2;
    QPushButton *bookSearchButton;
    QLineEdit *lineEdit_bookSearchText;
    QScrollArea *scrollArea;
    QWidget *scrollContents;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *bookCoverVertLayout;
    QVBoxLayout *bookInfoVertLayout;
    QVBoxLayout *bookOptions;
    QScrollArea *scrollAreaReservedBooks;
    QWidget *scrollAreaReservedBooks_Area;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *reservedBooks;
    QLabel *label_2;

    void setupUi(QDialog *sucLogin)
    {
        if (sucLogin->objectName().isEmpty())
            sucLogin->setObjectName(QString::fromUtf8("sucLogin"));
        sucLogin->resize(826, 564);
        horizontalLayout_2 = new QHBoxLayout(sucLogin);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tabWidget = new QTabWidget(sucLogin);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 10, 531, 101));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton_logout = new QPushButton(tab);
        pushButton_logout->setObjectName(QString::fromUtf8("pushButton_logout"));
        pushButton_logout->setGeometry(QRect(700, 470, 80, 24));
        yourReservedBooks = new QScrollArea(tab);
        yourReservedBooks->setObjectName(QString::fromUtf8("yourReservedBooks"));
        yourReservedBooks->setGeometry(QRect(460, 190, 231, 141));
        yourReservedBooks->setWidgetResizable(true);
        yourReservedBooks_scrollArea = new QWidget();
        yourReservedBooks_scrollArea->setObjectName(QString::fromUtf8("yourReservedBooks_scrollArea"));
        yourReservedBooks_scrollArea->setGeometry(QRect(0, 0, 229, 139));
        verticalLayoutWidget = new QWidget(yourReservedBooks_scrollArea);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 19, 211, 111));
        yourReservedBooksList = new QVBoxLayout(verticalLayoutWidget);
        yourReservedBooksList->setObjectName(QString::fromUtf8("yourReservedBooksList"));
        yourReservedBooksList->setContentsMargins(0, 0, 0, 0);
        yourReservedBooks->setWidget(yourReservedBooks_scrollArea);
        welcomeLabel = new QLabel(tab);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(160, 90, 141, 101));
        welcomeLabel->setFont(font);
        loggedInUsernameLabel = new QLabel(tab);
        loggedInUsernameLabel->setObjectName(QString::fromUtf8("loggedInUsernameLabel"));
        loggedInUsernameLabel->setGeometry(QRect(360, 90, 341, 101));
        loggedInUsernameLabel->setFont(font);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        bookSearchButton = new QPushButton(tab_2);
        bookSearchButton->setObjectName(QString::fromUtf8("bookSearchButton"));
        bookSearchButton->setGeometry(QRect(480, 20, 171, 31));
        lineEdit_bookSearchText = new QLineEdit(tab_2);
        lineEdit_bookSearchText->setObjectName(QString::fromUtf8("lineEdit_bookSearchText"));
        lineEdit_bookSearchText->setGeometry(QRect(100, 20, 361, 31));
        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(100, 60, 681, 301));
        scrollArea->setWidgetResizable(true);
        scrollContents = new QWidget();
        scrollContents->setObjectName(QString::fromUtf8("scrollContents"));
        scrollContents->setGeometry(QRect(0, 0, 679, 299));
        horizontalLayoutWidget = new QWidget(scrollContents);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 661, 241));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        bookCoverVertLayout = new QVBoxLayout();
        bookCoverVertLayout->setObjectName(QString::fromUtf8("bookCoverVertLayout"));
        bookCoverVertLayout->setContentsMargins(-1, 0, -1, 0);

        horizontalLayout->addLayout(bookCoverVertLayout);

        bookInfoVertLayout = new QVBoxLayout();
        bookInfoVertLayout->setObjectName(QString::fromUtf8("bookInfoVertLayout"));

        horizontalLayout->addLayout(bookInfoVertLayout);

        bookOptions = new QVBoxLayout();
        bookOptions->setObjectName(QString::fromUtf8("bookOptions"));

        horizontalLayout->addLayout(bookOptions);

        scrollArea->setWidget(scrollContents);
        scrollAreaReservedBooks = new QScrollArea(tab_2);
        scrollAreaReservedBooks->setObjectName(QString::fromUtf8("scrollAreaReservedBooks"));
        scrollAreaReservedBooks->setGeometry(QRect(260, 370, 321, 131));
        scrollAreaReservedBooks->setWidgetResizable(true);
        scrollAreaReservedBooks_Area = new QWidget();
        scrollAreaReservedBooks_Area->setObjectName(QString::fromUtf8("scrollAreaReservedBooks_Area"));
        scrollAreaReservedBooks_Area->setGeometry(QRect(0, 0, 319, 129));
        verticalLayoutWidget_2 = new QWidget(scrollAreaReservedBooks_Area);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 20, 271, 91));
        reservedBooks = new QVBoxLayout(verticalLayoutWidget_2);
        reservedBooks->setObjectName(QString::fromUtf8("reservedBooks"));
        reservedBooks->setContentsMargins(0, 0, 0, 0);
        scrollAreaReservedBooks->setWidget(scrollAreaReservedBooks_Area);
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 380, 101, 20));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout_2->addWidget(tabWidget);

        QWidget::setTabOrder(bookSearchButton, lineEdit_bookSearchText);
        QWidget::setTabOrder(lineEdit_bookSearchText, scrollArea);
        QWidget::setTabOrder(scrollArea, pushButton_logout);
        QWidget::setTabOrder(pushButton_logout, tabWidget);

        retranslateUi(sucLogin);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(sucLogin);
    } // setupUi

    void retranslateUi(QDialog *sucLogin)
    {
        sucLogin->setWindowTitle(QCoreApplication::translate("sucLogin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("sucLogin", "This is the logged window for standard user", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("sucLogin", "Log Out", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("sucLogin", "Welcome:", nullptr));
        loggedInUsernameLabel->setText(QCoreApplication::translate("sucLogin", "username goe shere", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("sucLogin", "Account", nullptr));
        bookSearchButton->setText(QCoreApplication::translate("sucLogin", "bookSearchButton", nullptr));
        label_2->setText(QCoreApplication::translate("sucLogin", "Book reserved list", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("sucLogin", "Catalogue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sucLogin: public Ui_sucLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUCLOGIN_H
