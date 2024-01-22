#include "mainwindow.h"
#include "glview.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    glView myGl;
    myGl.show();
    w.show();
    return a.exec();
}
