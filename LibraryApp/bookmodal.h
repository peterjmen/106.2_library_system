#ifndef BOOKMODAL_H
#define BOOKMODAL_H

#include <QDialog>
#include <QString>
#include <QLabel>
#include <QTextBrowser>
#include <QVector>

namespace Ui {
class BookModal;
}

class BookModal : public QDialog
{
    Q_OBJECT

public:
    explicit BookModal(QWidget *parent = nullptr);
    ~BookModal();
    QString modalBookIndex;
    void AssignInfo();
    QVector<QVector<QString>> modalBookCat;

private:
    Ui::BookModal *ui;
    QVector<QLabel*> Picture;
    QVector<QLabel*> Title;
    QVector<QLabel*> Author;
    QVector<QLabel*> SeriesLinkCode;
    QVector<QTextBrowser*> Description;
};

#endif // BOOKMODAL_H
