#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDate>


#include "suclogin.h" //and created instances in private
#include "filemanager.h" //and created instances in private
#include "adminwindow.h"
#include "admintest.h"
#include "adminAddUser.h"




QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // ** getter for QString loggedInUserName;
    QString getloggedInUserName(){
        return loggedInUserName;
    }

    // ** getter for int loggedInUserID;
    int getloggedInUserID(){
        return loggedInUserID;
    }

  adminAddUser *adminadduser;
  adminWindow *adminwindow;

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_register_clicked();

private:
    Ui::MainWindow *ui;
    sucLogin *suclogin;

    adminTest *admintest;
    FileManager fManager;
    bool signedIn = false;
    QString loggedInUserName;
    int loggedInUserID;



};


#endif // MAINWINDOW_H

