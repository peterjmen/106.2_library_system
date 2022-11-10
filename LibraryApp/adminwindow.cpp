#include "adminwindow.h"
#include "ui_adminwindow.h"
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
QVector<QPushButton*> bookCoversListAdmin;
QVector<QTextBrowser*> bookInformationAdmin;
QVector<QPushButton*> editBookButtonVector; //button
QString iterationAsStringAdmin;
//QVector<QString> listOfReservedBooks;


adminWindow::adminWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminWindow)
{
    ui->setupUi(this);


//Reads "Books" Fine and generates 2d array with information
    bookCatalogue = fManager.ReadFile("Books", 5);

//    QVBoxLayout* displayReservedList = new QVBoxLayout(this);

    ui->scrollContents->setLayout(ui->horizontalLayout);

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
        bookCoversListAdmin.append(labelPic);
        ui->bookCoverVertLayout->addWidget(bookCoversListAdmin[i]);


        //Book info

        QTextBrowser* info = new QTextBrowser(this);
        info->setMaximumHeight(125);
        info->setText(
            "Title: " + bookCatalogue.at(i).at(1) + "\n" +
            "Author: " + bookCatalogue.at(i).at(2) + "\n" +
            "Description: "+ bookCatalogue.at(i).at(3) + "\n"
            );
        bookInformationAdmin.append(info);
        ui->bookInfoVertLayout->addWidget(bookInformationAdmin[i]);

            //iteration/entries checker
            qDebug() << "iteration " << i;
            if (i == bookCatalogue.length()-1){
                qDebug() << i+1 << "book entries";
            }


         //add buttons
            //cast i into string
            iterationAsStringAdmin = QString::number(i);
            QPushButton* reserveBook = new QPushButton("Edit book '" + bookCatalogue.at(i).at(1) + "' (CatIndex: " + iterationAsStringAdmin + ")");
            reserveBook->setProperty("bookIndex", i);
//            int index = reserveBook->property("bookIndex").toInt();
            qDebug() << "book " << bookCatalogue.at(i).at(1) << "has the index of " << reserveBook->property("bookIndex");

            connect(reserveBook, SIGNAL(clicked()), this, SLOT(show_index()));

            editBookButtonVector.append(reserveBook);
            ui->editBook->addWidget(editBookButtonVector[i]);

        }



};

adminWindow::~adminWindow()
{
    delete ui;
}

void adminWindow::on_pushButton_admin_logout_clicked()
{
    qDeleteAll(bookCoversListAdmin);
    bookCoversListAdmin.clear();
    qDeleteAll(bookInformationAdmin);
    bookInformationAdmin.clear();
    qDeleteAll(editBookButtonVector);
    editBookButtonVector.clear();


    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

void adminWindow::on_pushButton_admin_logout_2_clicked()
{
    qDeleteAll(bookCoversListAdmin);
    bookCoversListAdmin.clear();
    qDeleteAll(bookInformationAdmin);
    bookInformationAdmin.clear();
    qDeleteAll(editBookButtonVector);
    editBookButtonVector.clear();


    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}
void adminWindow::on_pushButton_admin_logout_3_clicked()
{
    qDeleteAll(bookCoversListAdmin);
    bookCoversListAdmin.clear();
    qDeleteAll(bookInformationAdmin);
    bookInformationAdmin.clear();
    qDeleteAll(editBookButtonVector);
    editBookButtonVector.clear();


    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

// for (QVector<QString> book: bookCatalogue){

void adminWindow::on_bookSearchButton_clicked()
{
    ui->scrollContents->setLayout(ui->horizontalLayout);
    QString searchedText = ui->lineEdit_bookSearchText->text();


    for (int i = 0; i < bookCatalogue.length();i++){
    ui->bookInfoVertLayout->removeWidget(bookInformationAdmin[i]);
    ui->bookInfoVertLayout->removeWidget(bookCoversListAdmin[i]);
    ui->bookInfoVertLayout->removeWidget(editBookButtonVector[i]);


    }

    //clear vector of book covers and info
    qDeleteAll(bookCoversListAdmin);
    bookCoversListAdmin.clear();
    qDeleteAll(bookInformationAdmin);
    bookInformationAdmin.clear();
    qDeleteAll(editBookButtonVector);
    editBookButtonVector.clear();


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
          bookInformationAdmin.append(info);


          //add book pic
          QPixmap bookCover(bookCatalogue.at(i).at(0)); //0 because column 1 of pics is 0
          QPushButton* labelPic = new QPushButton(this);
          QPixmap map(bookCover.scaled(84,125/*Qt::KeepAspectRatio*/));
          labelPic->setFixedSize(84,125);
          labelPic->setIconSize(QSize(84,125));
          labelPic->setIcon(map);
          labelPic->connect(labelPic, SIGNAL(clicked()), this, SLOT(targetButtonPressed()));
          bookCoversListAdmin.append(labelPic);


          //add buttons

             //cast i into string
             iterationAsStringAdmin = QString::number(i);
             QPushButton* reserveBook = new QPushButton("Edit Book '" + bookCatalogue.at(i).at(1) + "' (CatIndex: " + iterationAsStringAdmin + ")");
             reserveBook->setProperty("bookIndex", i);
 //            int index = reserveBook->property("bookIndex").toInt();
             qDebug() << "book " << bookCatalogue.at(i).at(1) << "has the index of " << reserveBook->property("bookIndex");
             connect(reserveBook, SIGNAL(clicked()), this, SLOT(show_index()));
             editBookButtonVector.append(reserveBook);



          if (bookCatalogue.at(i).at(1).contains(searchedText)){
              qDebug() << bookCatalogue.at(i).at(1) << " found";
          ui->bookCoverVertLayout->addWidget(bookCoversListAdmin[i]);
          ui->bookInfoVertLayout->addWidget(bookInformationAdmin[i]);
          ui->editBook->addWidget(editBookButtonVector[i]);


          }
      }
}

//string.contains

void adminWindow::show_index(){
    qDebug() << "book edit button clicked";


    QPushButton* pButton = qobject_cast<QPushButton*>(sender());
    if (pButton) // this is the type we expect
    {
        int bookIndexNum = pButton->property("bookIndex").toInt();
        // recognize buttonText here
        qDebug() << bookIndexNum;
        QLabel* editedBookListItem = new QLabel(bookCatalogue.at(bookIndexNum).at(1));


        QLabel* dashboardEditedBookListItem = new QLabel(bookCatalogue.at(bookIndexNum).at(1));
    }
}

void adminWindow::targetButtonPressed(){
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
