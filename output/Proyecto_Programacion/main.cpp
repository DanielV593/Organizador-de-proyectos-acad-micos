#include "mainwindow.h"
#include <QApplication>
#include "proyecto_global.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    cargarDesdeArchivo(); // Cargar proyectos desde archivo

    MainWindow w;
    w.show();

    int result = a.exec();

    guardarEnArchivo(); // Guardar proyectos al salir

    return result;
}
