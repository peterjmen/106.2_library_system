#include "suclogin.h"
#include "ui_suclogin.h"
#include "mainwindow.h"


#include <QLabel>
#include <QBoxLayout>
#include <QVector>

#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QTextBrowser>

#include <QPixmap>
#include <QIcon>


//Vectors to hold book pictures and info
QVector<QLabel*> bookCoversList;
QVector<QTextBrowser*> bookInformation;


sucLogin::sucLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sucLogin)
{
    ui->setupUi(this);

//Reads "Books" Fine and generates 2d array with information
    bookCatalogue = fManager.ReadFile("Books", 4);


        //Cover pics

        for (int i = 0; i < bookCatalogue.length();i++){
        QPixmap bookCover(bookCatalogue.at(i).at(0)); //0 because column 1 of pics is 0
        QLabel* labelPic = new QLabel(this);
        labelPic->setPixmap(bookCover.scaled(200,100,Qt::KeepAspectRatio));
        bookCoversList.append(labelPic);
        ui->bookCoverVertLayout->addWidget(bookCoversList[i]);


        //Book info

        QTextBrowser* info = new QTextBrowser(this);
        info->setText(
            "Title: " + bookCatalogue.at(i).at(1) + "\n" +
            "Author: " + bookCatalogue.at(i).at(2) + "\n" +
            "Description: "+ bookCatalogue.at(i).at(3) + "\n"
            );
        bookInformation.append(info);
        ui->bookInfoVertLayout->addWidget(bookInformation[i]);





            //iteration/entries checker
            qDebug() << "iteration " << i;
            if (i == bookCatalogue.length()-1){
                qDebug() << i+1 << "book entries";
            }


        }


Temp();
};




sucLogin::~sucLogin()
{
    delete ui;
}

void sucLogin::on_pushButton_logout_clicked()
{
    qDeleteAll(bookCoversList);
    bookCoversList.clear();
    qDeleteAll(bookInformation);
    bookInformation.clear();
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}







////        // ---book menu ---
//        QHBoxLayout* hBox = new QHBoxLayout(this);
//        QVBoxLayout* vBox = new QVBoxLayout();
//        QLabel* cover = new QLabel();


//        QWidget* title;
//        QWidget* description;
//        QWidget* author;



//        hBox->addWidget(title);
//        vBox->addWidget(description);
//        vBox->addWidget(author);



//        for(int i = 0; i < 4; i++){
//            cover = numCols.at(0);
//            title = numCols.at(1);
//            description = numCols.at(2);
//            author = numCols.at(3);



//void sucLogin::on_searchClear_clicked()
//{

//    for (int i = 0; i < bookCoversList.length();i++){
//       bookCoversList[i]->setVisible(false);
//       bookInformation[i]->setVisible(false);
//    }

//    //clear vector of book covers and info
//    qDeleteAll(bookCoversList);
//    bookCoversList.clear();
//    qDeleteAll(bookInformation);
//    bookInformation.clear();
//}


// for (QVector<QString> book: bookCatalogue){

void sucLogin::on_bookSearchButton_clicked()
{
    QString searchedText = ui->lineEdit_bookSearchText->text();


    for (int i = 0; i < bookCatalogue.length();i++){
    ui->bookInfoVertLayout->removeWidget(bookInformation[i]);
    ui->bookInfoVertLayout->removeWidget(bookCoversList[i]);
    }

    //clear vector of book covers and info
    qDeleteAll(bookCoversList);
    bookCoversList.clear();
    qDeleteAll(bookInformation);
    bookInformation.clear();


qDebug() <<searchedText;

 //   bookCatalogue = fManager.ReadFile("Books", 4);

    qDebug() << bookCatalogue.at(0).at(1);
    qDebug() << "bookCatalogue.length is" << bookCatalogue.length();

    for (int i = 0; i < bookCatalogue.length();i++){
        qDebug() << "iteration " << i << " titled " << bookCatalogue.at(i).at(1);

          //add book info
          QTextBrowser* info = new QTextBrowser(this);
          info->setText(
              "Title: " + bookCatalogue.at(i).at(1) + "\n" +
              "Author: " + bookCatalogue.at(i).at(2) + "\n" +
              "Description: "+ bookCatalogue.at(i).at(3) + "\n"
              );
          bookInformation.append(info);


          //add book pic
          QPixmap bookCover(bookCatalogue.at(i).at(0)); //0 because column 1 of pics is 0
          QLabel* labelPic = new QLabel(this);
          labelPic->setPixmap(bookCover.scaled(200,100,Qt::KeepAspectRatio));
          bookCoversList.append(labelPic);

          if (bookCatalogue.at(i).at(1).contains(searchedText)){
              qDebug() << bookCatalogue.at(i).at(1) << " found";
          ui->bookCoverVertLayout->addWidget(bookCoversList[i]);
          ui->bookInfoVertLayout->addWidget(bookInformation[i]);
          }
      }
}

// makes the buttons pictures for the landing page;
void sucLogin::Temp(){
qDebug() << "Entered Temp";

QPixmap map(bookCatalogue[0][0]);
QRect rect = map.rect();
QVector<QPushButton*> btns;
for(int i = 0; i < (ui->horizontalLayout_3->count()); i++){
    if(QPushButton* tempBtn = dynamic_cast<QPushButton*>(ui->horizontalLayout_3->itemAt(i)->widget())){
        btns.push_back(tempBtn);


        QPixmap map(bookCatalogue.at(i).at(0));
        QIcon icon(map);
        tempBtn->setIcon(icon);
        tempBtn->setIconSize(rect.size());
        tempBtn->setGeometry(rect);
    }
}
//for(QPushButton* btn : btns){
//    qDebug() << "hit";
//}

//    QVector<QObject*>objPtrs = ui->horizontalLayout_3->children();
//    for(QObject* obj : objPtrs){
//        if(dynamic_cast<QPushButton*>(obj))
//        {
//            qDebug() << "hit";
//        }
//    }


}

//string.contains

