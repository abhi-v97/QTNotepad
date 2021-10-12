#include "mainwindow.h"
#include <QApplication>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // create the app, then display it
    Notepad w;
    w.show();

    // puts the app in a loop where events take place
    return a.exec();
}
