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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sucLogin
{
public:
    QWidget *widget;
    QLabel *label;
    QLineEdit *lineEdit_bookSearchText;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *bookSearchButton;
    QPushButton *pushButton_logout;
    QWidget *widget1;
    QVBoxLayout *bookInfoVertLayout;
    QWidget *layoutWidget;
    QVBoxLayout *bookCoverVertLayout;

    void setupUi(QDialog *sucLogin)
    {
        if (sucLogin->objectName().isEmpty())
            sucLogin->setObjectName(QString::fromUtf8("sucLogin"));
        sucLogin->resize(1074, 727);
        widget = new QWidget(sucLogin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, -30, 1171, 731));
        widget->setStyleSheet(QString::fromUtf8("background-color: #CED2BA;"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 301, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Banner")});
        font.setPointSize(54);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 700 54pt \"Sitka Banner\";\n"
"color: #858D6F;"));
        lineEdit_bookSearchText = new QLineEdit(widget);
        lineEdit_bookSearchText->setObjectName(QString::fromUtf8("lineEdit_bookSearchText"));
        lineEdit_bookSearchText->setGeometry(QRect(20, 150, 331, 41));
        lineEdit_bookSearchText->setStyleSheet(QString::fromUtf8("border-size:1.2px; \n"
"border-color:white;\n"
"border-style: solid;\n"
"background-color: #AAB095;"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 240, 111, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 25px \"Sitka Banner\";\n"
"color: #858D6F;"));
        horizontalLayoutWidget_2 = new QWidget(widget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 270, 1041, 231));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_3->addWidget(pushButton_4);

        bookSearchButton = new QPushButton(widget);
        bookSearchButton->setObjectName(QString::fromUtf8("bookSearchButton"));
        bookSearchButton->setGeometry(QRect(340, 150, 41, 41));
        bookSearchButton->setStyleSheet(QString::fromUtf8("background-color: #858D6F;\n"
"border-radius: 1px;\n"
"font: 700 11pt \"Segoe UI\";\n"
"\n"
"color: rgb(255, 255, 255);"));
        pushButton_logout = new QPushButton(widget);
        pushButton_logout->setObjectName(QString::fromUtf8("pushButton_logout"));
        pushButton_logout->setGeometry(QRect(560, 40, 500, 121));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(250);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_logout->sizePolicy().hasHeightForWidth());
        pushButton_logout->setSizePolicy(sizePolicy);
        pushButton_logout->setMinimumSize(QSize(500, 0));
        pushButton_logout->setBaseSize(QSize(500, 0));
        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 590, 931, 31));
        bookInfoVertLayout = new QVBoxLayout(widget1);
        bookInfoVertLayout->setObjectName(QString::fromUtf8("bookInfoVertLayout"));
        bookInfoVertLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 510, 931, 91));
        bookCoverVertLayout = new QVBoxLayout(layoutWidget);
        bookCoverVertLayout->setObjectName(QString::fromUtf8("bookCoverVertLayout"));
        bookCoverVertLayout->setContentsMargins(0, 0, 0, 0);
        widget->raise();
        widget1->raise();

        retranslateUi(sucLogin);

        QMetaObject::connectSlotsByName(sucLogin);
    } // setupUi

    void retranslateUi(QDialog *sucLogin)
    {
        sucLogin->setWindowTitle(QCoreApplication::translate("sucLogin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("sucLogin", "Catalogue", nullptr));
        label_2->setText(QCoreApplication::translate("sucLogin", "Trending", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        bookSearchButton->setText(QCoreApplication::translate("sucLogin", "GO", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("sucLogin", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sucLogin: public Ui_sucLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUCLOGIN_H
