#include "suclogin.h"
#include "ui_suclogin.h"
#include "mainwindow.h"

sucLogin::sucLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sucLogin)
{
    ui->setupUi(this);

        QPixmap myfirstpic("Resources/grudges.jpg");
//        QPixmap bookImage();//vector 1.0)
//        int w = ui->book_pic_label->width();
//        int h = ui->book_pic_label->height();
        ui->book_pic_label->setPixmap(myfirstpic.scaled(200,100,Qt::KeepAspectRatio));

    }

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

