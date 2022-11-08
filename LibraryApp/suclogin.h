#ifndef SUCLOGIN_H
#define SUCLOGIN_H

#include <QDialog>
#include "filemanager.h"

namespace Ui {
class sucLogin;
}

class sucLogin : public QDialog
{
    Q_OBJECT


public:
    explicit sucLogin(QWidget *parent = nullptr);
    ~sucLogin();
    QVector<QVector<QString>> ReadFile(QString fileName, int numCols);
    void WriteFile(QString fileName, QVector<QString> fileContent);
    bool CheckValidUser(QString username, QString fileName);
    bool nameFound = false;


private slots:
    void on_pushButton_logout_clicked();


    void on_searchClear_clicked();

private:
    Ui::sucLogin *ui;
    FileManager fManager;

};

#endif // SUCLOGIN_H



