/********************************************************************************
** Form generated from reading UI file 'bookmodal.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKMODAL_H
#define UI_BOOKMODAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookModal
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *Image;
    QLabel *Title;
    QLabel *Author;
    QTextBrowser *Description;

    void setupUi(QDialog *BookModal)
    {
        if (BookModal->objectName().isEmpty())
            BookModal->setObjectName("BookModal");
        BookModal->resize(634, 473);
        buttonBox = new QDialogButtonBox(BookModal);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(450, 430, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(BookModal);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 641, 481));
        widget->setStyleSheet(QString::fromUtf8("background-color: #858D6F;"));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 50, 171, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Image = new QLabel(verticalLayoutWidget);
        Image->setObjectName("Image");

        verticalLayout->addWidget(Image);

        Title = new QLabel(widget);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(200, 30, 311, 71));
        Title->setStyleSheet(QString::fromUtf8("\n"
"font: 20pt \"Sitka Text\";"));
        Author = new QLabel(widget);
        Author->setObjectName("Author");
        Author->setGeometry(QRect(200, 80, 261, 31));
        Author->setStyleSheet(QString::fromUtf8("\n"
"font: 15pt \"Sitka Text\";"));
        Description = new QTextBrowser(widget);
        Description->setObjectName("Description");
        Description->setGeometry(QRect(200, 150, 411, 251));
        widget->raise();
        buttonBox->raise();

        retranslateUi(BookModal);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, BookModal, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, BookModal, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(BookModal);
    } // setupUi

    void retranslateUi(QDialog *BookModal)
    {
        BookModal->setWindowTitle(QCoreApplication::translate("BookModal", "Dialog", nullptr));
        Image->setText(QCoreApplication::translate("BookModal", "TextLabel", nullptr));
        Title->setText(QCoreApplication::translate("BookModal", "TextLabel", nullptr));
        Author->setText(QCoreApplication::translate("BookModal", "#0000000", nullptr));
        Description->setHtml(QCoreApplication::translate("BookModal", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Lorem Ipsummm</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookModal: public Ui_BookModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKMODAL_H
