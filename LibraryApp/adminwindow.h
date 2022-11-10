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

private slots:
    void on_pushButton_admin_logout_clicked();
     void on_pushButton_admin_logout_2_clicked();
      void on_pushButton_admin_logout_3_clicked();

      void on_bookSearchButton_clicked();
      void show_index();
      void targetButtonPressed();



private:
    Ui::adminWindow *ui;
    FileManager fManager;
      QVector<QVector<QString>> bookCatalogue;
      void btnSetup();
};

#endif // ADMINWINDOW_H
