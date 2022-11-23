#ifndef ADMINTEST_H
#define ADMINTEST_H

#include <QDialog>

namespace Ui {
class adminTest;
}

class adminTest : public QDialog
{
    Q_OBJECT

public:
    explicit adminTest(QWidget *parent = nullptr);
    ~adminTest();

private slots:
    void on_pushButton_admin_logout_clicked();

private:
    Ui::adminTest *ui;
};

#endif // ADMINTEST_H
