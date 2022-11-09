#include "adminwindow.h"
#include "ui_adminwindow.h"
#include "mainwindow.h"

#include <QLabel>
#include <QBoxLayout>
#include <QVector>

#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QTextBrowser>
#include <QPushButton>


adminWindow::adminWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminWindow)
{
    ui->setupUi(this);
}

adminWindow::~adminWindow()
{
    delete ui;
}

void adminWindow::on_pushButton_admin_logout_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


