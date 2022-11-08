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



sucLogin::sucLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sucLogin)
{
    ui->setupUi(this);


 QVector<QVector<QString>> bookCatalogue = fManager.ReadFile("Books", 4);
 qDebug() << bookCatalogue.at(0).at(0) << "is at fileContent.at(0).at(0)";



    //generic label test
        QPixmap myfirstpic("Resources/grudges.jpg");
//        QPixmap bookImage();//vector 1.0)
//        int w = ui->book_pic_label->width();
//        int h = ui->book_pic_label->height();
        ui->book_pic_label->setPixmap(myfirstpic.scaled(200,100,Qt::KeepAspectRatio));


        //previous test
        //        //generic label test
        //        QPixmap cappy(bookCatalogue.at(1).at(0));
        //        ui->book_cover_test->setPixmap(cappy.scaled(100,100,Qt::KeepAspectRatio));


        QVector<QLabel*> bookCoversList;
//        QVector<QLabel*> bookTitleList;
//        QVector<QLabel*> bookAuthorList;
//        QVector<QLabel*> bookDescriptionList;

        QVector<QTextBrowser*> newTitleList;




//        QVBoxLayout* vBox = new QVBoxLayout(this);
//        vBox->addStretch();
//        vBox->setAlignment(Qt::AlignLeft);


        //Cover
        for (int i = 0; i < bookCatalogue.length();i++){
        QPixmap bookCover(bookCatalogue.at(i).at(0)); //0 because column 1 of pics is 0
        QLabel* labelPic = new QLabel(this);
        labelPic->setPixmap(bookCover.scaled(100,100,Qt::KeepAspectRatio));
        bookCoversList.append(labelPic);
        qDebug() << "iteration " << i;
        ui->bookCoverVertLayout->addWidget(bookCoversList[i]);
        }

        //Title
        for (int i = 0; i < bookCatalogue.length();i++){

//            QTextBrowser* info = new QTextBrowser(this);
//            QString hello = "hello ";
//            QString how = "how ";
//            QString goes = "goes";
//            QString newLine = "\n";
//            QString all(hello + how + goes + newLine);

//            info->setText(all);

//            ui->bookInfoVertLayout->addWidget(info);


            QTextBrowser* info = new QTextBrowser(this);
//            QString titleTag = "Title: ";
            info->setText(
                        "Title: " + bookCatalogue.at(i).at(1) + "\n" +
                        "Author: " + bookCatalogue.at(i).at(2) + "\n" +
                        "Description: "+ bookCatalogue.at(i).at(3) + "\n"
                        );
            newTitleList.append(info);
            ui->bookInfoVertLayout->addWidget(info);




//        QString titleTag = "Title: ";
//        QString bookTitleString(titleTag + bookCatalogue.at(i).at(1)); //0 because column 1 of pics is 0
//        QLabel* bookTitle = new QLabel(this);
//        bookTitle->setText(bookTitleString);
//        bookTitleList.append(bookTitle);
//        qDebug() << "iteration " << i;
//        ui->bookInfoVertLayout->addWidget(bookTitleList[i]);


//        //Author
//        QString authorTag = "Author: ";
//        QString bookAuthorString(authorTag + bookCatalogue.at(i).at(2)); //0 because column 1 of pics is 0
//        QLabel* bookAuthor = new QLabel(this);
//        bookAuthor->setText(bookAuthorString);
//        bookAuthorList.append(bookAuthor);
//        qDebug() << "iteration " << i;
//        ui->bookInfoVertLayout->addWidget(bookAuthorList[i]);

//        //Description
//        QString descriptionTag = "Description: ";
//        QString bookDescriptionString(bookCatalogue.at(i).at(3)); //0 because column 1 of pics is 0
//        QLabel* bookDesription = new QLabel(this);
//        bookDesription->setText(descriptionTag + bookDescriptionString);
//        bookDescriptionList.append(bookDesription);
//        qDebug() << "iteration " << i;
//        ui->bookInfoVertLayout->addWidget(bookDescriptionList[i]);
        }


//        //Description
//        for (int i = 0; i < bookCatalogue.length();i++){
//        QString descriptionTag = "Description: ";
//        QString bookDescriptionString(bookCatalogue.at(i).at(3)); //0 because column 1 of pics is 0
//        QLabel* bookDesription = new QLabel(this);
//        bookDesription->setText(descriptionTag + bookDescriptionString);
//        bookDescriptionList.append(bookDesription);
//        qDebug() << "iteration " << i;
//        ui->bookInfoVertLayout->addWidget(bookDescriptionList[i]);
//        }






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


