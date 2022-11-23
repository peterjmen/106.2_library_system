#include "admintest.h"
#include "ui_admintest.h"
#include "mainwindow.h"

adminTest::adminTest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminTest)
{
    ui->setupUi(this);
}

adminTest::~adminTest()
{
    delete ui;
}

void adminTest::on_pushButton_admin_logout_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

