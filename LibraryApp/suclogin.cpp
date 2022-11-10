#include "suclogin.h"
#include "ui_suclogin.h"
#include "mainwindow.h"
#include "bookmodal.h"


#include <QLabel>
#include <QBoxLayout>
#include <QVector>

#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QTextBrowser>
#include <QPushButton>


//Vectors to hold book pictures and info
QVector<QPushButton*> bookCoversList;
QVector<QTextBrowser*> bookInformation;
QVector<QPushButton*> reserveBookButtonVector; //button
QString iterationAsString;
//QVector<QString> listOfReservedBooks;


sucLogin::sucLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sucLogin)
{
    ui->setupUi(this);


//Reads "Books" Fine and generates 2d array with information
    bookCatalogue = fManager.ReadFile("Books", 5);

//    QVBoxLayout* displayReservedList = new QVBoxLayout(this);

    ui->scrollContents->setLayout(ui->horizontalLayout);
    ui->scrollAreaReservedBooks_Area->setLayout(ui->reservedBooks);
    ui->yourReservedBooks_scrollArea->setLayout(ui->yourReservedBooksList);
        //Cover pics
        // when using resource folder    :/images/Resources/grudges.jpg

        for (int i = 0; i < bookCatalogue.length();i++){
        QPixmap bookCover(bookCatalogue.at(i).at(0)); //0 because column 1 of pics is 0
        QPushButton* labelPic = new QPushButton(this);
        QPixmap map(bookCover.scaled(84,125/*Qt::KeepAspectRatio*/));
        labelPic->setFixedSize(84,125);
        labelPic->setIconSize(QSize(84,125));
        labelPic->setIcon(map);
        labelPic->connect(labelPic, SIGNAL(clicked()), this, SLOT(targetButtonPressed()));
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


         //add buttons
            //cast i into string
            iterationAsString = QString::number(i);
            QPushButton* reserveBook = new QPushButton("Reserve book '" + bookCatalogue.at(i).at(1) + "' (CatIndex: " + iterationAsString + ")");
            reserveBook->setProperty("bookIndex", i);
//            int index = reserveBook->property("bookIndex").toInt();
            qDebug() << "book " << bookCatalogue.at(i).at(1) << "has the index of " << reserveBook->property("bookIndex");

            connect(reserveBook, SIGNAL(clicked()), this, SLOT(show_index()));

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


// for (QVector<QString> book: bookCatalogue){

void sucLogin::on_bookSearchButton_clicked()
{
    ui->scrollContents->setLayout(ui->horizontalLayout);
    QString searchedText = ui->lineEdit_bookSearchText->text();


    for (int i = 0; i < bookCatalogue.length();i++){
    ui->bookInfoVertLayout->removeWidget(bookInformation[i]);
    ui->bookInfoVertLayout->removeWidget(bookCoversList[i]);
    ui->bookInfoVertLayout->removeWidget(reserveBookButtonVector[i]);


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
          QPushButton* labelPic = new QPushButton(this);
          QPixmap map(bookCover.scaled(84,125/*Qt::KeepAspectRatio*/));
          labelPic->setFixedSize(84,125);
          labelPic->setIconSize(QSize(84,125));
          labelPic->setIcon(map);
          labelPic->connect(labelPic, SIGNAL(clicked()), this, SLOT(targetButtonPressed()));
          bookCoversList.append(labelPic);


          //add buttons

             //cast i into string
             iterationAsString = QString::number(i);
             QPushButton* reserveBook = new QPushButton("Reserve book '" + bookCatalogue.at(i).at(1) + "' (CatIndex: " + iterationAsString + ")");
             reserveBook->setProperty("bookIndex", i);
 //            int index = reserveBook->property("bookIndex").toInt();
             qDebug() << "book " << bookCatalogue.at(i).at(1) << "has the index of " << reserveBook->property("bookIndex");
             connect(reserveBook, SIGNAL(clicked()), this, SLOT(show_index()));
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


    QPushButton* pButton = qobject_cast<QPushButton*>(sender());
    if (pButton) // this is the type we expect
    {
        int bookIndexNum = pButton->property("bookIndex").toInt();
        // recognize buttonText here
        qDebug() << bookIndexNum;
        QLabel* reservedBookListItem = new QLabel(bookCatalogue.at(bookIndexNum).at(1));
        ui->reservedBooks->addWidget(reservedBookListItem);

        QLabel* dashboardReservedBookListItem = new QLabel(bookCatalogue.at(bookIndexNum).at(1));
        ui->yourReservedBooksList->addWidget(dashboardReservedBookListItem);
    }
}

void sucLogin::targetButtonPressed(){
    QPushButton* pButton = qobject_cast<QPushButton*>(sender());
    if (pButton) // this is the type we expect
    {
        qDebug() << "" << pButton->objectName() << "\t" << pButton->property("bookIndex").toInt() << "\t" << bookCatalogue.at(pButton->property("bookIndex").toInt()).size();


        BookModal* modal = new BookModal(this);

        modal->bookInfo = bookCatalogue.at(pButton->property("bookIndex").toInt());
        modal->show();
        modal->setModal(true);
        modal->AssignInfo();
    }
}
