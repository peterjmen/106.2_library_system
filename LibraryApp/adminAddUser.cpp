#include "adminAddUser.h"
#include "adminwindow.h"
#include "ui_adminAddUser.h"
#include "mainwindow.h"


#include <QLabel>
#include <QBoxLayout>
#include <QVector>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QTextBrowser>
#include <QPushButton>
#include <QMessageBox>
#include <QApplication>
#include <QProcess>

adminAddUser::adminAddUser(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminAddUser)
{
    ui->setupUi(this);
}

adminAddUser::~adminAddUser()
{
    delete ui;
}

void adminAddUser::on_pushButton_cancel_clicked()
{


 ui->lineEdit_username-> clear();
 ui->lineEdit_password-> clear();


    //closes sucLogin window and re-opens mainwindow fresh
    hide();


    QString program = qApp->arguments()[0];
    QStringList arguments = qApp->arguments().mid(1); // remove the 1st argument - the program name
    qApp->quit();
    QProcess::startDetached(program, arguments);

    adminWindow * mainWindow = new adminWindow();
    mainWindow -> show();
    close();

 }



void adminAddUser::on_pushButton_continue_clicked()
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





