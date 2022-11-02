#include "suclogin.h"
#include "ui_suclogin.h"
#include "mainwindow.h"

sucLogin::sucLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sucLogin)
{
    ui->setupUi(this);
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

