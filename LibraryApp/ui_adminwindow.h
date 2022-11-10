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
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton_admin_logout;
    QLabel *welcomeLabel;
    QScrollArea *accountScrollArea;
    QWidget *scrollContents_3;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *accountIdList;
    QVBoxLayout *accountUsernameList;
    QVBoxLayout *accountPasswordList;
    QPushButton *accountSearchButton;
    QLineEdit *accountSearchBar;
    QWidget *tab_2;
    QPushButton *bookSearchButton;
    QLineEdit *lineEdit_bookSearchText;
    QScrollArea *scrollArea;
    QWidget *scrollContents;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *bookCoverVertLayout;
    QVBoxLayout *bookInfoVertLayout;
    QVBoxLayout *editBook;
    QVBoxLayout *deleteBook;
    QPushButton *pushButton_admin_logout_2;

    void setupUi(QDialog *adminWindow)
    {
        if (adminWindow->objectName().isEmpty())
            adminWindow->setObjectName(QString::fromUtf8("adminWindow"));
        adminWindow->resize(837, 564);
        horizontalLayout_2 = new QHBoxLayout(adminWindow);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tabWidget = new QTabWidget(adminWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton_admin_logout = new QPushButton(tab);
        pushButton_admin_logout->setObjectName(QString::fromUtf8("pushButton_admin_logout"));
        pushButton_admin_logout->setGeometry(QRect(700, 20, 80, 24));
        welcomeLabel = new QLabel(tab);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(40, -10, 141, 101));
        QFont font;
        font.setPointSize(20);
        welcomeLabel->setFont(font);
        accountScrollArea = new QScrollArea(tab);
        accountScrollArea->setObjectName(QString::fromUtf8("accountScrollArea"));
        accountScrollArea->setGeometry(QRect(60, 150, 681, 301));
        accountScrollArea->setWidgetResizable(true);
        scrollContents_3 = new QWidget();
        scrollContents_3->setObjectName(QString::fromUtf8("scrollContents_3"));
        scrollContents_3->setGeometry(QRect(0, 0, 679, 299));
        horizontalLayoutWidget_3 = new QWidget(scrollContents_3);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 10, 661, 241));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(10, 10, 10, 10);
        accountIdList = new QVBoxLayout();
        accountIdList->setObjectName(QString::fromUtf8("accountIdList"));
        accountIdList->setContentsMargins(-1, 0, -1, 0);

        horizontalLayout_4->addLayout(accountIdList);

        accountUsernameList = new QVBoxLayout();
        accountUsernameList->setObjectName(QString::fromUtf8("accountUsernameList"));

        horizontalLayout_4->addLayout(accountUsernameList);

        accountPasswordList = new QVBoxLayout();
        accountPasswordList->setObjectName(QString::fromUtf8("accountPasswordList"));

        horizontalLayout_4->addLayout(accountPasswordList);

        accountScrollArea->setWidget(scrollContents_3);
        accountSearchButton = new QPushButton(tab);
        accountSearchButton->setObjectName(QString::fromUtf8("accountSearchButton"));
        accountSearchButton->setGeometry(QRect(480, 80, 171, 31));
        accountSearchBar = new QLineEdit(tab);
        accountSearchBar->setObjectName(QString::fromUtf8("accountSearchBar"));
        accountSearchBar->setGeometry(QRect(60, 80, 361, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        bookSearchButton = new QPushButton(tab_2);
        bookSearchButton->setObjectName(QString::fromUtf8("bookSearchButton"));
        bookSearchButton->setGeometry(QRect(490, 70, 171, 31));
        lineEdit_bookSearchText = new QLineEdit(tab_2);
        lineEdit_bookSearchText->setObjectName(QString::fromUtf8("lineEdit_bookSearchText"));
        lineEdit_bookSearchText->setGeometry(QRect(90, 70, 361, 31));
        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 130, 791, 301));
        scrollArea->setWidgetResizable(true);
        scrollContents = new QWidget();
        scrollContents->setObjectName(QString::fromUtf8("scrollContents"));
        scrollContents->setGeometry(QRect(0, 0, 789, 299));
        horizontalLayoutWidget = new QWidget(scrollContents);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 781, 271));
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

        editBook = new QVBoxLayout();
        editBook->setObjectName(QString::fromUtf8("editBook"));

        horizontalLayout->addLayout(editBook);

        deleteBook = new QVBoxLayout();
        deleteBook->setObjectName(QString::fromUtf8("deleteBook"));

        horizontalLayout->addLayout(deleteBook);

        scrollArea->setWidget(scrollContents);
        pushButton_admin_logout_2 = new QPushButton(tab_2);
        pushButton_admin_logout_2->setObjectName(QString::fromUtf8("pushButton_admin_logout_2"));
        pushButton_admin_logout_2->setGeometry(QRect(710, 10, 80, 24));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout_2->addWidget(tabWidget);

        QWidget::setTabOrder(bookSearchButton, lineEdit_bookSearchText);
        QWidget::setTabOrder(lineEdit_bookSearchText, scrollArea);
        QWidget::setTabOrder(scrollArea, pushButton_admin_logout);
        QWidget::setTabOrder(pushButton_admin_logout, tabWidget);

        retranslateUi(adminWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(adminWindow);
    } // setupUi

    void retranslateUi(QDialog *adminWindow)
    {
        adminWindow->setWindowTitle(QCoreApplication::translate("adminWindow", "Dialog", nullptr));
        pushButton_admin_logout->setText(QCoreApplication::translate("adminWindow", "Log Out", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("adminWindow", "Account List", nullptr));
        accountSearchButton->setText(QCoreApplication::translate("adminWindow", "Search", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("adminWindow", "Accounts", nullptr));
        bookSearchButton->setText(QCoreApplication::translate("adminWindow", "Search", nullptr));
        pushButton_admin_logout_2->setText(QCoreApplication::translate("adminWindow", "Log Out", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("adminWindow", "Manage Catalogue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminWindow: public Ui_adminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
