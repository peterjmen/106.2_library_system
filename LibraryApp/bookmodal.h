#ifndef BOOKMODAL_H
#define BOOKMODAL_H

#include <QDialog>

namespace Ui {
class BookModal;
}

class BookModal : public QDialog
{
    Q_OBJECT

public:
    explicit BookModal(QWidget *parent = nullptr);
    ~BookModal();

private:
    Ui::BookModal *ui;
};

#endif // BOOKMODAL_H
