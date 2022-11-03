#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adminwindow.h"

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
    QPixmap myfirstpic("C:/Github/106.2_library_system/Resources/grudges.jpg");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(myfirstpic.scaled(w,h,Qt::KeepAspectRatio));
//    ui->pushButton_signUp.connect(ui->pushButton_signUp, SIGNAL(clicked()), this,SLOT(on_pushButton_signUp_clicked()));

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
            QMessageBox::information(this, "Admin Login", "Proceed to admin page");
            hide();
            adminwindow = new adminWindow(this);
            adminwindow->show();
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


void MainWindow::on_pushButton_register_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    QVector<QString> content;
    content.append(username);
    content.append(password);
    content.append("1"); //1 for access level 1

    if(fManager.CheckValidUser(username, "accountInformation")){
        fManager.WriteFile("accountInformation", content);

        QMessageBox box(this);
        box.setIcon(QMessageBox::Information);
        box.setText("Congratulations, you have signed up successfully");
        box.setWindowTitle("Sign-up");
        box.setStandardButtons(QMessageBox::Ok);
        box.exec();
    } else {
        QMessageBox box(this);
        box.setIcon(QMessageBox::Warning);
        box.setText("Unfortunatley that username has been taken");
        box.setWindowTitle("Sign-up failed");
        box.setStandardButtons(QMessageBox::Ok);
        box.exec();
    }
}

