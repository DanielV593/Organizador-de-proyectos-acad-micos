#ifndef PROYECTO_GLOBAL_H
#define PROYECTO_GLOBAL_H

#include <vector>
#include <string>

struct Proyecto {
    std::string codigo;
    std::string nombre;
    std::string materia;
    std::string integrantes;
    bool entregado;
};

extern std::vector<Proyecto> proyectos;

void guardarEnArchivo();
void cargarDesdeArchivo();

int buscarProyecto(const std::string& codigo);

#endif // PROYECTO_GLOBAL_H
