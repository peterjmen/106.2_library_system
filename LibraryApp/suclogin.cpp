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
#include <QPushButton>


//Vectors to hold book pictures and info
QVector<QLabel*> bookCoversList;
QVector<QTextBrowser*> bookInformation;
QVector<QPushButton*> reserveBookButtonVector; //button
QString iterationAsString;
QVector<QString> listOfReservedBooks;


sucLogin::sucLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sucLogin)
{
    ui->setupUi(this);

//    QVBoxLayout* lay = new QVBoxLayout(this);
//    for (int i = 0; i < total; ++i) {

//    }
//    ui->scrollContents->setLayout(ui->bookInfoVertLayout);

//Reads "Books" Fine and generates 2d array with information
    bookCatalogue = fManager.ReadFile("Books", 4);

    ui->scrollContents->setLayout(ui->horizontalLayout);
        //Cover pics
        // when using resource folder    :/images/Resources/grudges.jpg

        for (int i = 0; i < bookCatalogue.length();i++){
        QPixmap bookCover(bookCatalogue.at(i).at(0)); //0 because column 1 of pics is 0
        QLabel* labelPic = new QLabel(this);
        labelPic->setPixmap(bookCover.scaled(84,125/*Qt::KeepAspectRatio*/));
        bookCoversList.append(labelPic);
        ui->bookCoverVertLayout->addWidget(bookCoversList[i]);


        //Book info

        QTextBrowser* info = new QTextBrowser(this);
        info->setMaximumHeight(125);
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

            QString titleAttachedToButton = bookCatalogue.at(i).at(1);


            //cast i into string
            iterationAsString = QString::number(i);
            //add buttons
            QPushButton* reserveBook = new QPushButton("Reserve book " + iterationAsString);
            reserveBook->setProperty("bookIndex", i);
            int index = reserveBook->property("bookIndex").toInt();
            qDebug() << "book " << bookCatalogue.at(i).at(1) << "has the index of " << index;
//            connect(reserveBook, SIGNAL(clicked()), this, SLOT(show_index()));


            //lambda function
            connect(reserveBook, &QPushButton::clicked, [index, titleAttachedToButton]() {
                qDebug() << "book with index " << index << " with title " << titleAttachedToButton << " was added to the list";
                listOfReservedBooks.append(titleAttachedToButton);
                qDebug() << listOfReservedBooks << "is the list of reserved books";
//                QLabel* displayedReservedBook = new QLabel(titleAttachedToButton);
//                Ui::sucLogin::reservedBooksLayout.addWidget(displayedReservedBook);
            });

            reserveBookButtonVector.append(reserveBook);
            ui->bookOptions->addWidget(reserveBookButtonVector[i]);
        }



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
    qDeleteAll(reserveBookButtonVector);
    reserveBookButtonVector.clear();


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
    ui->scrollContents->setLayout(ui->horizontalLayout);
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
    qDeleteAll(reserveBookButtonVector);
    reserveBookButtonVector.clear();


qDebug() <<searchedText;

 //   bookCatalogue = fManager.ReadFile("Books", 4);

    qDebug() << bookCatalogue.at(0).at(1);
    qDebug() << "bookCatalogue.length is" << bookCatalogue.length();

    for (int i = 0; i < bookCatalogue.length();i++){
        qDebug() << "iteration " << i << " titled " << bookCatalogue.at(i).at(1);

          //add book info
          QTextBrowser* info = new QTextBrowser(this);
          info->setMaximumHeight(125);
          info->setText(
              "Title: " + bookCatalogue.at(i).at(1) + "\n" +
              "Author: " + bookCatalogue.at(i).at(2) + "\n" +
              "Description: "+ bookCatalogue.at(i).at(3) + "\n"
              );
          bookInformation.append(info);


          //add book pic
          QPixmap bookCover(bookCatalogue.at(i).at(0)); //0 because column 1 of pics is 0
          QLabel* labelPic = new QLabel(this);
          labelPic->setPixmap(bookCover.scaled(84,125/*,*Qt::KeepAspectRatio)*/));
          bookCoversList.append(labelPic);


          //add buttons
          //cast i into string
          iterationAsString = QString::number(i);
          QPushButton* reserveBook = new QPushButton("Reserve book " + iterationAsString);
          reserveBookButtonVector.append(reserveBook);

          if (bookCatalogue.at(i).at(1).contains(searchedText)){
              qDebug() << bookCatalogue.at(i).at(1) << " found";
          ui->bookCoverVertLayout->addWidget(bookCoversList[i]);
          ui->bookInfoVertLayout->addWidget(bookInformation[i]);
          ui->bookOptions->addWidget(reserveBookButtonVector[i]);
          }
      }
}

//string.contains

void sucLogin::show_index(){
    qDebug() << "book reserve button clicked";
}
