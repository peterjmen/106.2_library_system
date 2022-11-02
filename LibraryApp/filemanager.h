#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <QVector>


class FileManager
{
public:
    FileManager();
    QVector<QVector<QString>> ReadFile(QString fileName, int numCols);

};

#endif // FILEMANAGER_H
