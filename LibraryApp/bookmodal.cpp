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

    Picture.push_back(ui->Image);
    Title.push_back(ui->Title);
    Author.push_back(ui->Author);
    Description.push_back(ui->Description);
    SeriesLinkCode.push_back(ui->SeriesLinkCode);


}

void BookModal::AssignInfo(){
       Picture[0]->setPixmap(modalBookCat.at(modalBookIndex.toInt()).at(0));
       Picture[0]->setScaledContents(true);
       Title[0]->setText(modalBookCat.at(modalBookIndex.toInt()).at(1));
       Author[0]->setText(modalBookCat.at(modalBookIndex.toInt()).at(2));
       Description[0]->setText(modalBookCat.at(modalBookIndex.toInt()).at(3));
       SeriesLinkCode[0]->setText("Series link code: \n" + modalBookCat.at(modalBookIndex.toInt()).at(7));

}


BookModal::~BookModal()
{
    delete ui;
}

