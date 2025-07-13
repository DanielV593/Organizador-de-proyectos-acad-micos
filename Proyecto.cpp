#include <iostream>
#include <vector>
#include <limits>
#include <string>
#include <clocale>

//Integrante 1 Juan Vasquez
using namespace std; 

//Creacion de una estructura "PROYECTO"

struct Proyecto { 
    string codigo; //Codigo del proyecto
    string nombre; //Nombre del proyecto
    string materia; //Materia para la que se realiza el proyecto
    string integrantes; //Nombre de quien o quienes realizan el proyecto 
    bool entregado; //Si el proyecto fue o no entregado 
};
//Crear un contenedor donde se guarden los proyectos
vector <Proyecto> proyectos;

//
int buscarProyecto(const string& codigo) {
    for (size_t i = 0; i < proyectos.size(); ++i)
        if (proyectos[i].codigo == codigo)
            return static_cast<int>(i);
    return -1;
}
//Funcion para crear un nuevo proyecto

void crearProyecto(){
    Proyecto nuevo; //Se crea un nuevo Proyecto 
    cout << "\n- - - AGREGAR NUEVO PROYECTO ACADEMICO - - -\n";

    do{
        cout << "Codigo del proyecto ej 001: ";//Funcion para asiganr codigo y que no se repitan
        getline(cin, nuevo.codigo);
        if (buscarProyecto(nuevo.codigo)!= -1){
            cout << "Ya existe un proyecto con ese codigo, por favor asigna otro: \n";
        }
    } while (buscarProyecto(nuevo.codigo)!= -1);
    cout <<"Nombre del proyecto: ";
    getline(cin, nuevo.nombre);

    cout << "Materia del Proyecto: ";
    getline(cin, nuevo.materia);

    cout << "Nombre del/los integrante(s) a cargo del proyecto: ";
    getline(cin, nuevo.integrantes);

    nuevo.entregado = false;
    proyectos.push_back(nuevo);
    cout << "Proyecto guardado correctamente\n";


}
//Funcion para mostrar todos los proyectos registrados
void mostrarProyectos(){
    if (proyectos.empty()){
        cout << "\nPor ahora no has agregado ningun Proyecto...\n"; //Este mensaje es por si no se han agregado proyectos
        return;
    }
    //El encabezado de lista de proyectos quedaria asi: 
    cout <<"\n- - - LISTA DE PROYECTOS ACADEMICOS - - -" << endl;
    cout <<"Codigo\tNombre\t\t\tMateria\t\tFecha\t\tEstado"<< endl; //el /t es para que se pueda leer de mejor manera, como usar un tab 
    
    //Esta funcioon busca los proyectos y tambien muestra su informacion 
    for (const auto& p: proyectos) {
        cout << p.codigo << "\t" // Muestra el codigo del proyecto
             << p.nombre << "\t\t\t" // Muestra el nombre del proyecto
             << p.materia << "\t\t" // Muestra la materia del proyecto
             << p.integrantes << "\t\t"//Muestra el/los integrante(s) del Proyecto
             << (p.entregado ? "Entregado" : "Pendiente") << endl; // Muestra el estado de entrega
    }
}

//CRUD para seleccionar opciones
int main () {
    setlocale(LC_ALL, "Spanish");

    int opcion; 
    do {
        cout << "\n- - - MENU PRINCIPAL - - -";
        cout << "1. Crear Nuevo Proyecto\n";
        cout << "2. Mostrar Proyectos\n";
        cout << "0. Salir\n";
        cout << "Elige una opcion por favor... ";
        //Validar y limpiar el buffer para cin y el getline
        while (!(cin >> opcion)){
            cout << "OPCION INVALIDA! Por favor ingresa uno de los del menu: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
        }
        cin.ignore(numeric_limits<streamsize>::max(),'\n');

    }
}