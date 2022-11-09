#include "bookmodal.h"
#include "ui_bookmodal.h"

BookModal::BookModal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BookModal)
{
    ui->setupUi(this);
}

BookModal::~BookModal()
{
    delete ui;
}
