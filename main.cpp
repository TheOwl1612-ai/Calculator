#include "mainwindow.h"

#include <QApplication>
#include <QFile>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QFile file("D:/StudyDocuments/Coding/C++/Projects/Calculator/mystyles.qss");

    if (file.exists()){
        qDebug() << "file exist!" << Qt::endl;
    }
    if (file.open(QFile::ReadOnly)) {
        // Read the stylesheet content
        QString styleSheet = file.readAll();
        // Apply the stylesheet to the application
        a.setStyleSheet(styleSheet);
    }
    else{
        qDebug() << "can't open stylesheet";
    }
    w.show();
    return a.exec();
}
