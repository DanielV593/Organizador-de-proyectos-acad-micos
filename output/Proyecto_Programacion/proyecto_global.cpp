#include "proyecto_global.h"
#include <fstream>
#include <sstream>
#include <QDir>
#include <QString>
#include <QDebug>

std::vector<Proyecto> proyectos;

QString obtenerRutaArchivo() {
    QString rutaCarpeta = "C:/Users/User/Documents/GitHub/Organizador-de-proyectos-acad-micos/output/Proyecto_Programacion";
    QDir dir(rutaCarpeta);
    if (!dir.exists()) {
        dir.mkpath(".");
    }
    return rutaCarpeta + "/proyectos.txt";
}


void guardarEnArchivo() {
    QString ruta = obtenerRutaArchivo();


    std::ofstream archivo(ruta.toStdString());
    if (!archivo.is_open()) {
        qDebug() << "No se pudo abrir el archivo para escritura en: " << ruta;
        return;
    }

    for (const auto& p : proyectos) {
        archivo << p.codigo << ";"
                << p.nombre << ";"
                << p.materia << ";"
                << p.integrantes << ";"
                << (p.entregado ? "1" : "0") << "\n";
    }
    archivo.close();
    qDebug() << "Archivo guardado en: " << ruta;
}

void cargarDesdeArchivo() {
    proyectos.clear();

    QString ruta = obtenerRutaArchivo();
    std::ifstream archivo(ruta.toStdString());
    if (!archivo.is_open()) return;

    std::string linea;
    while (std::getline(archivo, linea)) {
        std::stringstream ss(linea);
        Proyecto p;
        std::string entregadoStr;

        std::getline(ss, p.codigo, ';');
        std::getline(ss, p.nombre, ';');
        std::getline(ss, p.materia, ';');
        std::getline(ss, p.integrantes, ';');
        std::getline(ss, entregadoStr, ';');

        p.entregado = (entregadoStr == "1");

        proyectos.push_back(p);
    }
    archivo.close();
}

int buscarProyecto(const std::string& codigo) {
    for (size_t i = 0; i < proyectos.size(); ++i) {
        if (proyectos[i].codigo == codigo) {
            return static_cast<int>(i);
        }
    }
    return -1;
}
