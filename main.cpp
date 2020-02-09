#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{   //Класс запускающий все
    //Тестирование
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
