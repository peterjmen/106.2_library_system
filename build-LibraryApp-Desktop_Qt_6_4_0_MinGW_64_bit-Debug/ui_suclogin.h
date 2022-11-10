/********************************************************************************
** Form generated from reading UI file 'suclogin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
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
            sucLogin->setObjectName("sucLogin");
        sucLogin->resize(826, 564);
        horizontalLayout_2 = new QHBoxLayout(sucLogin);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        tabWidget = new QTabWidget(sucLogin);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 20, 531, 101));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton_logout = new QPushButton(tab);
        pushButton_logout->setObjectName("pushButton_logout");
        pushButton_logout->setGeometry(QRect(310, 130, 80, 24));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        bookSearchButton = new QPushButton(tab_2);
        bookSearchButton->setObjectName("bookSearchButton");
        bookSearchButton->setGeometry(QRect(480, 20, 171, 31));
        lineEdit_bookSearchText = new QLineEdit(tab_2);
        lineEdit_bookSearchText->setObjectName("lineEdit_bookSearchText");
        lineEdit_bookSearchText->setGeometry(QRect(100, 20, 361, 31));
        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(100, 60, 681, 301));
        scrollArea->setWidgetResizable(true);
        scrollContents = new QWidget();
        scrollContents->setObjectName("scrollContents");
        scrollContents->setGeometry(QRect(0, 0, 679, 299));
        horizontalLayoutWidget = new QWidget(scrollContents);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 661, 241));
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

        bookOptions = new QVBoxLayout();
        bookOptions->setObjectName("bookOptions");

        horizontalLayout->addLayout(bookOptions);

        scrollArea->setWidget(scrollContents);
        scrollAreaReservedBooks = new QScrollArea(tab_2);
        scrollAreaReservedBooks->setObjectName("scrollAreaReservedBooks");
        scrollAreaReservedBooks->setGeometry(QRect(260, 370, 321, 131));
        scrollAreaReservedBooks->setWidgetResizable(true);
        scrollAreaReservedBooks_Area = new QWidget();
        scrollAreaReservedBooks_Area->setObjectName("scrollAreaReservedBooks_Area");
        scrollAreaReservedBooks_Area->setGeometry(QRect(0, 0, 319, 129));
        verticalLayoutWidget_2 = new QWidget(scrollAreaReservedBooks_Area);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(20, 20, 271, 91));
        reservedBooks = new QVBoxLayout(verticalLayoutWidget_2);
        reservedBooks->setObjectName("reservedBooks");
        reservedBooks->setContentsMargins(0, 0, 0, 0);
        scrollAreaReservedBooks->setWidget(scrollAreaReservedBooks_Area);
        label_2 = new QLabel(tab_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 380, 101, 20));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout_2->addWidget(tabWidget);

        QWidget::setTabOrder(bookSearchButton, lineEdit_bookSearchText);
        QWidget::setTabOrder(lineEdit_bookSearchText, scrollArea);
        QWidget::setTabOrder(scrollArea, pushButton_logout);
        QWidget::setTabOrder(pushButton_logout, tabWidget);

        retranslateUi(sucLogin);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(sucLogin);
    } // setupUi

    void retranslateUi(QDialog *sucLogin)
    {
        sucLogin->setWindowTitle(QCoreApplication::translate("sucLogin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("sucLogin", "This is the logged window for standard user", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("sucLogin", "Log Out", nullptr));
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
