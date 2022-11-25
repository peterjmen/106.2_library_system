#ifndef ADMINADDUSER_H
#define ADMINADDUSER_H

#include <QDialog>
#include "filemanager.h"


namespace Ui {
class adminAddUser;
}

class adminAddUser : public QDialog
{
    Q_OBJECT

public:
    explicit adminAddUser(QWidget *parent = nullptr);
    ~adminAddUser();
    QVector<QVector<QString>> ReadFile(QString fileName, int numCols);
      void WriteFile(QString fileName, QVector<QString> fileContent);
      bool CheckValidUser(QString username, QString fileName);
      bool nameFound = false;



private slots:
      void on_pushButton_continue_clicked();

      void on_pushButton_cancel_clicked();

private:
    Ui::adminAddUser *ui;
    FileManager fManager;
    QVector<QVector<QString>> bookCatalogue;
    QVector<QVector<QString>> reservedRecordArray;
     QVector<QVector<QString>> accountArray;
    void btnSetup();




};

#endif // adminAddUser_H
