#include "filemanager.h"

#include <QFile>
#include <QTextStream>
#include <QDebug>


FileManager::FileManager()
{

}


//below is creating dynamic 2d array to store username and passwords
QVector<QVector<QString>> FileManager::ReadFile(QString fileName, int numCols){
    fileName.append(".csv"); //added to automatically look for csv files, so can just use file name and not extension
    QVector<QVector<QString>> columns;
    QVector<QString> rows;

    QFile file(fileName); //created a Qfile called file as variable
    file.open(QIODevice::ReadOnly); //read only as this file is being read to confirm username and password


    //below is check that file is open, if not throw error
    if(!file.isOpen()){
        qDebug("Could not open file, no file found");
        return columns; //using columns as if file not found should be 0
    }

    QTextStream stream(&file); //creates qtextstream called stream

    while(!stream.atEnd()){ //if and end of file

            QString stringOfFile = stream.readLine(); //makes a string of whole doc, comma's and all
            rows.append(stringOfFile.split(",")); //splits string into individual strings seperated by comma's

            for(int i = 0; i < numCols; i++){
            if (i == numCols-1){
                qDebug() << "Reached iteraton " << i+1; //as start is 0
                columns.append(rows); //adds content of row to columns vector
                qDebug() << "String in this row :" << qUtf8Printable(stringOfFile);
                qDebug() << "Length of row " << qUtf8Printable(QString::number(rows.size()));
                rows.clear(); //clears content of row before it goes onto next row so doesn't duplicate
            }
        }
    }

}
