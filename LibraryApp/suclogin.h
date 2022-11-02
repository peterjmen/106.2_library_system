#ifndef SUCLOGIN_H
#define SUCLOGIN_H

#include <QDialog>

namespace Ui {
class sucLogin;
}

class sucLogin : public QDialog
{
    Q_OBJECT

public:
    explicit sucLogin(QWidget *parent = nullptr);
    ~sucLogin();

private slots:
    void on_pushButton_logout_clicked();

private:
    Ui::sucLogin *ui;
};

#endif // SUCLOGIN_H
