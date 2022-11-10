#include "bookmodal.h"
#include "ui_bookmodal.h"

#include <QLabel>
#include <QBoxLayout>
#include <QVector>

#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QTextBrowser>

#include <QPixmap>
#include <QIcon>




BookModal::BookModal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BookModal)
{
    ui->setupUi(this);
    labels.push_back(ui->Image);
    labels.push_back(ui->Title);
    labels.push_back(ui->Author);
    labels.push_back(ui->Description);

    qDebug() << "" << bookInfo.size();





    //0 = image dir
    //1 = Title
    //2 = Author
    //3 = description
}

void BookModal::AssignInfo(){
        labels.at(0)->setPixmap(bookInfo.at(0));
        for(int i = 1; i < labels.size(); i++){
            labels.at(i)->setText(bookInfo.at(i));
        }
}


BookModal::~BookModal()
{
    delete ui;
}

