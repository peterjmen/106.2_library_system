/********************************************************************************
** Form generated from reading UI file 'bookmodal.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
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

QT_BEGIN_NAMESPACE

class Ui_BookModal
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BookModal)
    {
        if (BookModal->objectName().isEmpty())
            BookModal->setObjectName(QString::fromUtf8("BookModal"));
        BookModal->resize(525, 394);
        buttonBox = new QDialogButtonBox(BookModal);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(150, 340, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(BookModal);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, BookModal, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, BookModal, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(BookModal);
    } // setupUi

    void retranslateUi(QDialog *BookModal)
    {
        BookModal->setWindowTitle(QCoreApplication::translate("BookModal", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookModal: public Ui_BookModal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKMODAL_H
