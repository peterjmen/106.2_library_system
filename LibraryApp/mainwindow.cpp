#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QFile>
#include <QTextStream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap myfirstpic("C:/Users/peter/OneDrive/Desktop/cat/grudges.jpg");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(myfirstpic.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();






    QVector<QVector<QString>> fileContent = fManager.ReadFile("accountInformation", 3);

        if(username == "admin" && password == "admin"){
            QMessageBox::information(this, "Admin Login", "Thank you for logging in admin, this sections still needs to be implemented");
            hide();
//            adminlogin = new adminLogin(this);
//            adminlogin->show();
            signedIn = true;

        } else {


            //TODO remove debug
            qDebug() << fileContent.at(0).at(0) << "is at fileContent.at(0).at(0)";

}

        for(int i = 0; i < fileContent.size(); i++){
                if (username == fileContent.at(i).at(0)){
                    if(password == fileContent.at(i).at(1)){
                       QMessageBox::information(this, "Login", "Username and Password is correct");
                       hide();
                       suclogin = new sucLogin(this);
                       suclogin->show();
                       signedIn = true;
                    } else{
                        QMessageBox::warning(this, "Login", "Username and Password is not correct");
                    }
                } else{
                    continue; //to skip duplicate messages
                }
            }
            if(!signedIn){
                QMessageBox::warning(this, "Login", "No user found");
            }
        }







//    if(username == "test" && password == "test"){
//        QMessageBox::information(this, "Login", "Username and Password is correct");
//        hide();
//        suclogin = new sucLogin(this);
//        suclogin->show();

//    } else {
//        QMessageBox::warning(this, "Login", "Username and Password is not correct");
//    }
//}

