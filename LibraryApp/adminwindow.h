#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QDialog>


#include "filemanager.h"




namespace Ui {
class adminWindow;
}


class adminWindow : public QDialog
{
    Q_OBJECT

public:
    explicit adminWindow(QWidget *parent = nullptr);
    ~adminWindow();
    QVector<QVector<QString>> ReadFile(QString fileName, int numCols);
      void WriteFile(QString fileName, QVector<QString> fileContent);
      bool CheckValidUser(QString username, QString fileName);
      bool nameFound = false;
      QString userID;


private slots:
    void on_pushButton_admin_logout_clicked();
    void on_bookSearchButtonAdmin_clicked();
    void editBookClicked();
    void bookPicClicked();
    void deleteBookClicked();
    void on_addBookButton_clicked();

    void editUserClicked();
    void deleteUserClicked();
    void on_addUserButton_clicked();

private:
    Ui::adminWindow *ui;
    FileManager fManager;
    QVector<QVector<QString>> bookCatalogue;
    QVector<QVector<QString>> reservedRecordArray;
     QVector<QVector<QString>> accountArray;
    void btnSetup();

  adminWindow *adminwindow;




};

#endif // ADMINWINDOW_H
