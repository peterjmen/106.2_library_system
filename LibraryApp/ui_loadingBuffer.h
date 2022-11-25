/********************************************************************************
** Form generated from reading UI file 'loadingBuffer.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADINGBUFFER_H
#define UI_LOADINGBUFFER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loadingBuffer
{
public:

    void setupUi(QWidget *loadingBuffer)
    {
        if (loadingBuffer->objectName().isEmpty())
            loadingBuffer->setObjectName("loadingBuffer");
        loadingBuffer->resize(400, 300);

        retranslateUi(loadingBuffer);

        QMetaObject::connectSlotsByName(loadingBuffer);
    } // setupUi

    void retranslateUi(QWidget *loadingBuffer)
    {
        loadingBuffer->setWindowTitle(QCoreApplication::translate("loadingBuffer", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loadingBuffer: public Ui_loadingBuffer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADINGBUFFER_H
