#include "suclogin.h"
#include "ui_suclogin.h"
#include "mainwindow.h"


#include <QLabel>
#include <QBoxLayout>
#include <QVector>

#include <QFile>
#include <QTextStream>
#include <QDebug>





sucLogin::sucLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sucLogin)
{
    ui->setupUi(this);


 QVector<QVector<QString>> bookCatalogue = fManager.ReadFile("Books", 4);
 qDebug() << bookCatalogue.at(0).at(0) << "is at fileContent.at(0).at(0)";




        QPixmap myfirstpic("Resources/grudges.jpg");
//        QPixmap bookImage();//vector 1.0)
//        int w = ui->book_pic_label->width();
//        int h = ui->book_pic_label->height();
        ui->book_pic_label->setPixmap(myfirstpic.scaled(200,100,Qt::KeepAspectRatio));
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


