#ifndef BOOKMODAL_H
#define BOOKMODAL_H

#include <QDialog>
#include <QString>
#include <QLabel>

namespace Ui {
class BookModal;
}

class BookModal : public QDialog
{
    Q_OBJECT

public:
    explicit BookModal(QWidget *parent = nullptr);
    ~BookModal();
    QVector<QString> bookInfo;
    void AssignInfo();

private:
    Ui::BookModal *ui;
    QVector<QLabel*> labels;
};

#endif // BOOKMODAL_H
