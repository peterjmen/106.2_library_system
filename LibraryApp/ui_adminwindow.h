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
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QLabel *label;
    QPushButton *pushButton_admin_logout;
    QWidget *tab_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollContents_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_bookSearchText_2;
    QPushButton *bookSearchButton_2;
    QWidget *tab;
    QPushButton *bookSearchButton;
    QLineEdit *lineEdit_bookSearchText;
    QScrollArea *scrollArea;
    QWidget *scrollContents;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *bookCoverVertLayout;
    QVBoxLayout *bookInfoVertLayout;
    QVBoxLayout *bookOptions;
    QWidget *tab_3;
    QScrollArea *scrollArea_3;
    QWidget *scrollContents_3;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *bookCoverVertLayout_2;
    QVBoxLayout *bookInfoVertLayout_2;
    QVBoxLayout *bookOptions_2;
    QLineEdit *lineEdit_bookSearchText_3;
    QPushButton *bookSearchButton_3;

    void setupUi(QDialog *adminWindow)
    {
        if (adminWindow->objectName().isEmpty())
            adminWindow->setObjectName(QString::fromUtf8("adminWindow"));
        adminWindow->resize(837, 534);
        tabWidget = new QTabWidget(adminWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 841, 531));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        label = new QLabel(tab_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 30, 381, 181));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton_admin_logout = new QPushButton(tab_1);
        pushButton_admin_logout->setObjectName(QString::fromUtf8("pushButton_admin_logout"));
        pushButton_admin_logout->setGeometry(QRect(360, 260, 80, 24));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        scrollArea_2 = new QScrollArea(tab_2);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(40, 100, 761, 331));
        scrollArea_2->setWidgetResizable(true);
        scrollContents_2 = new QWidget();
        scrollContents_2->setObjectName(QString::fromUtf8("scrollContents_2"));
        scrollContents_2->setGeometry(QRect(0, 0, 759, 329));
        horizontalLayoutWidget_2 = new QWidget(scrollContents_2);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(50, 40, 661, 241));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 10, 10, 10);
        scrollArea_2->setWidget(scrollContents_2);
        lineEdit_bookSearchText_2 = new QLineEdit(tab_2);
        lineEdit_bookSearchText_2->setObjectName(QString::fromUtf8("lineEdit_bookSearchText_2"));
        lineEdit_bookSearchText_2->setGeometry(QRect(90, 20, 361, 31));
        bookSearchButton_2 = new QPushButton(tab_2);
        bookSearchButton_2->setObjectName(QString::fromUtf8("bookSearchButton_2"));
        bookSearchButton_2->setGeometry(QRect(480, 20, 171, 31));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        bookSearchButton = new QPushButton(tab);
        bookSearchButton->setObjectName(QString::fromUtf8("bookSearchButton"));
        bookSearchButton->setGeometry(QRect(460, 20, 171, 31));
        lineEdit_bookSearchText = new QLineEdit(tab);
        lineEdit_bookSearchText->setObjectName(QString::fromUtf8("lineEdit_bookSearchText"));
        lineEdit_bookSearchText->setGeometry(QRect(70, 20, 361, 31));
        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(40, 70, 761, 401));
        scrollArea->setWidgetResizable(true);
        scrollContents = new QWidget();
        scrollContents->setObjectName(QString::fromUtf8("scrollContents"));
        scrollContents->setGeometry(QRect(0, 0, 759, 399));
        horizontalLayoutWidget = new QWidget(scrollContents);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 40, 661, 321));
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
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        scrollArea_3 = new QScrollArea(tab_3);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(50, 70, 761, 401));
        scrollArea_3->setWidgetResizable(true);
        scrollContents_3 = new QWidget();
        scrollContents_3->setObjectName(QString::fromUtf8("scrollContents_3"));
        scrollContents_3->setGeometry(QRect(0, 0, 759, 399));
        horizontalLayoutWidget_3 = new QWidget(scrollContents_3);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(50, 40, 661, 321));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, 10, 10, 10);
        bookCoverVertLayout_2 = new QVBoxLayout();
        bookCoverVertLayout_2->setObjectName(QString::fromUtf8("bookCoverVertLayout_2"));
        bookCoverVertLayout_2->setContentsMargins(-1, 0, -1, 0);

        horizontalLayout_3->addLayout(bookCoverVertLayout_2);

        bookInfoVertLayout_2 = new QVBoxLayout();
        bookInfoVertLayout_2->setObjectName(QString::fromUtf8("bookInfoVertLayout_2"));

        horizontalLayout_3->addLayout(bookInfoVertLayout_2);

        bookOptions_2 = new QVBoxLayout();
        bookOptions_2->setObjectName(QString::fromUtf8("bookOptions_2"));

        horizontalLayout_3->addLayout(bookOptions_2);

        scrollArea_3->setWidget(scrollContents_3);
        lineEdit_bookSearchText_3 = new QLineEdit(tab_3);
        lineEdit_bookSearchText_3->setObjectName(QString::fromUtf8("lineEdit_bookSearchText_3"));
        lineEdit_bookSearchText_3->setGeometry(QRect(70, 20, 361, 31));
        bookSearchButton_3 = new QPushButton(tab_3);
        bookSearchButton_3->setObjectName(QString::fromUtf8("bookSearchButton_3"));
        bookSearchButton_3->setGeometry(QRect(520, 20, 171, 31));
        tabWidget->addTab(tab_3, QString());

        retranslateUi(adminWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(adminWindow);
    } // setupUi

    void retranslateUi(QDialog *adminWindow)
    {
        adminWindow->setWindowTitle(QCoreApplication::translate("adminWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("adminWindow", "Welcome to the admin window", nullptr));
        pushButton_admin_logout->setText(QCoreApplication::translate("adminWindow", "Log out", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("adminWindow", "Account", nullptr));
        bookSearchButton_2->setText(QCoreApplication::translate("adminWindow", "Search", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("adminWindow", "Manage Users", nullptr));
        bookSearchButton->setText(QCoreApplication::translate("adminWindow", "Search", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("adminWindow", "Catalogue", nullptr));
        bookSearchButton_3->setText(QCoreApplication::translate("adminWindow", "Search", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("adminWindow", "System Notifications", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminWindow: public Ui_adminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
