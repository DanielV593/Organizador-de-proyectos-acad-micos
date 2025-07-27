#include "mainwindow.h"
#include <QApplication>
#include "proyecto_global.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    cargarDesdeArchivo();

    MainWindow w;
    w.show();

    int result = a.exec();

    guardarEnArchivo();

    return result;
}
