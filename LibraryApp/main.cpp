#include "mainwindow.h"
//#include "suclogin.h" TODO remove


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    sucLogin w; TODO remove
    w.show();
    return a.exec();
}
