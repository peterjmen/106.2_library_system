#include "mainwindow.h"
#include "ui_mainwindow.h"



#include <QMessageBox>
#include <QPixmap>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QDate>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();


    QVector<QVector<QString>> fileContent = fManager.ReadFile("accountInformation", 4);


        if(username == "admin" && password == "admin"){
            QMessageBox::information(this, "Admin Login", "Proceed to admin page");
            hide();
            adminwindow = new adminWindow(this);
            adminwindow->show();
            signedIn = true;

        } else if(username == "nil" && password == "nil"){
            QMessageBox::warning(this, "Error", "Reserved name");

            return;
        }else if(username == "" || password == "") {
            QMessageBox::warning(this, "Error", "Please enter a username and password.");

            return;

        }

        else {

}

        for(int i = 0; i < fileContent.size(); i++){
                if (username == fileContent.at(i).at(0)){
                    if(password == fileContent.at(i).at(1)){
                       QMessageBox::information(this, "Login", "Username and Password is correct");


                       //stores username & id as variables if sucessful
                       //availible through methodsgetloggedInUserName() + getloggedInUserID() from class
                       loggedInUserName = fileContent.at(i).at(0);
                       if (loggedInUserName == ""){
                               loggedInUserName = "default";
                    }
                          loggedInUserID = i;

                       //then closes main window and opens up sucessful login window
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



void MainWindow::on_pushButton_register_clicked()
{

    QVector<QVector<QString>> fileContent = fManager.ReadFile("accountInformation", 4);
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    int newID = fileContent.length();
    QString userID = QString::number(newID);
    QVector<QString> content;

    if(username != "" && password != ""){
    content.append(username);
    content.append(password);
    content.append("1"); //1 for access level 1
    content.append(userID);

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
    }else {

        QMessageBox::warning(this, "Error", "Please enter a username and password.");

        return;

    }
}



