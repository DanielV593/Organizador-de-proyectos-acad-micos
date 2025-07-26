#include "proyecto_global.h"
#include <fstream>
#include <sstream>

std::vector<Proyecto> proyectos;

void guardarEnArchivo() {
    std::ofstream archivo("proyectos.txt");
    if (!archivo.is_open()) return;

    for (const auto& p : proyectos) {
        archivo << p.codigo << ";"
                << p.nombre << ";"
                << p.materia << ";"
                << p.integrantes << ";"
                << (p.entregado ? "1" : "0") << "\n";
    }
    archivo.close();
}

void cargarDesdeArchivo() {
    proyectos.clear();
    std::ifstream archivo("proyectos.txt");
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
