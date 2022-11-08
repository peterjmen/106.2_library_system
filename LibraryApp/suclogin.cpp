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

//Vectors to hold book pictures and info
QVector<QLabel*> bookCoversList;
QVector<QTextBrowser*> bookInformation;

sucLogin::sucLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sucLogin)
{
    ui->setupUi(this);

//Reads "Books" Fine and generates 2d array with information
 QVector<QVector<QString>> bookCatalogue = fManager.ReadFile("Books", 4);


//        //Vectors to hold book pictures and info
//        QVector<QLabel*> bookCoversList;
//        QVector<QTextBrowser*> bookInformation;

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



};




sucLogin::~sucLogin()
{
    delete ui;
}

void sucLogin::on_pushButton_logout_clicked()
{
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






void sucLogin::on_searchClear_clicked()
{
    for (int i = 0; i < bookCoversList.length();i++){
       bookCoversList[i]->setVisible(false);
       bookInformation[i]->setVisible(false);
    }
}

