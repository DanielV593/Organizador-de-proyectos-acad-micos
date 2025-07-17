#include <iostream>
#include <vector>
#include <limits>
#include <string>
#include <clocale>
#include <fstream>

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
//Funcion Para actualizar proyecto por codigo
void actualizarProyecto() {
	if(proyectos.empty()){
		cout << "\nNo existen proyectos agregados para actualizar...\n";
		return;
	}
	cout << "\n- - - ACTUALIZAR PROYECTO - - -";
	cout <<"Ingresa el codigo del proyecto para actualizarlo: ";
	string codigo; 
	getline(cin, codigo);
	
bool encontrado = false;
for(auto& p: proyectos) {
	if (p.codigo == codigo){
		encontrado = true;
		
		string entrada;
		cout << "(Puede dejar en blanco si no se desea cambiar el campo)\n"; 
		//Este apartado es por si el usuario no desea cambiar algun campo del proyecto seleccionado
		
		cout << "Nombre actual  [" << p.nombre << "]: ";
		getline(cin, entrada);
		if (!entrada.empty()) p.nombre = entrada;
		
		cout << "Materia actual  [" << p.materia << "]: ";
		getline(cin, entrada);
		if(!entrada.empty()) p.materia = entrada;
		
		cout << "Integrante(s) actual(es)  [" << p.integrantes << "]: ";
		getline(cin, entrada);
		if(!entrada.empty()) p.integrantes = entrada;
		
		cout <<  "Estado actual (" << (p.entregado ? "Entregado" : "Pendiente")	<< "). Marcar como entregado? (s/n): ";
		getline(cin, entrada);
		if(!entrada.empty() &&(entrada == "s" || entrada == "S" )) p.entregado = true;
		
		cout << "Proyecto actualizado correctamente...\n";
		break;
	}
}
if (!encontrado) {
	cout << "No se encontro ningun proyecto con ese codigo... Por favor intente con otro: \n";
	
	}	
}
//Funcion para eliminar un proyecto por el codigo

void eliminarProyecto(){
	if (proyectos.empty()){
		cout <<"\nNo se ha agregado ningun proyecto aun...\n";
		return;
	}
	cout << "\n- - - ELIMINAR PROYECTO - - -\n";
	cout << "Ingrese el codigo del proyecto a eliminar: ";
	string codigo;
	
	for(auto it = proyectos.begin(); it != proyectos.end(); ++it) {
		if (it -> codigo == codigo){
			proyectos.erase(it);
			cout << "El proyecto ha sido eliminado correctamente...\n";
			return;
		}
	}
	cout << "No se encontro ningun proyecto con ese codigo... Por favor ingrese uno existente: \n";
}

//CRUD para seleccionar opciones
int main () {
    setlocale(LC_ALL, "Spanish");

    int opcion; 
    do {
        cout << "- - - MENU PRINCIPAL - - -\n";
        cout << "1. Crear Nuevo Proyecto\n";
        cout << "2. Mostrar Proyectos\n";
        cout << "3. Actualizar Proyecto\n";
        cout << "4. Eliminar Proyecto\n";
        cout << "0. Salir\n";
        cout << "Elige una opcion por favor: ";
        
        //Validar y limpiar el buffer para cin y el getline
        while (!(cin >> opcion)){
            cout << "OPCION INVALIDA! Por favor ingresa uno de los del menu: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
        }
        cin.ignore(numeric_limits<streamsize>::max(),'\n');

	//Agregamos un switch para manejar el menu
	 switch (opcion) {
		case 1:
			crearProyecto();
			break;
		case 2:
			mostrarProyectos();
			break;
		case 3:
			actualizarProyecto();
		 	break;
		case 4:
			eliminarProyecto();
			break;
		case 0:
			cout<<"Programa Finalizado";
			break;
		default:
			cout<<"Opcion no valida. Intenta otra vez\n";
			break;
	}
    } while (opcion != 0);
} 

//Integrante 2 Alejandro Taco
void guardarEnArchivo(){
	//el archivo se va a llamar asi:
	ofstream archivo ("proyectos.txt");
	if (!archivo.is_open()){ //comprobar que el archivo se abrio correctamente.
		cout << "Error, no se puedo abrir el archivo para guardar.\n";
			return;
	}
	for (const auto& p : proyectos){
		//cada cosa se va a escirbir en una linea
		archivo << "Codio: " << p.codigo << "\n";
		archivo << "Nombre: " << p.nombre << "\n";
		archivo << "Materia: " << p.materia << "\n";
		archivo << "Integrantes: " << p.integrantes << "\n";
		archivo << "Entregado: " << (p.entregado ? "true" : "false") << "\n";
		archivo << "----\n";
	}
	archivo.close(); //proyectos guardados.
}
//Integrante 2 Alejandro Taco
void carfarProyectoArchivo(){
	ifstream archivo("proyectos.txt"); //abrir el archivo para lectura
	if (!archivo.is_open()){ //verificar si el archivo existe y si se abrio correctamente
		cout << "El archivo proyectos.txt no existe o no se abrio corectamente...\n"; //sirve para depuracion
		return;
	}
	proyectos.clear(); //limpia el vector antes de cargar desde el archivo
	
	string linea;
	Proyecto tempProyecto;
	int campo_actual = 0; //0 para iniciar con el codigo 1 para nombre, 2 para materia, 3 para integrantes y 4 para entregado.
	
	while(getline(archivo, linea)){ //lee el archivo linea por linea
		if (linea.rfind("Codigo: ", 0) == 0){//rfind para buscar al inicio
			tempProyecto.codigo = linea.substr(8); // el codigo tiene solo 8 caracteres.
			campo_actual = 1;
		}else if (linea.rfind("Nombre: ", 0) == 0){
			tempProyecto.nombre = linea.substr(8);
			campo_actual = 2;
		}else if (linea.rfind("Materia: ", 0) == 0){
			tempProyecto.materia = linea.substr(9);
			campo_actual = 3;
		}else if (linea.rfind("Integrantes: ", 0) == 0){
			tempProyecto.integrantes = linea.substr(13);
			campo_actual = 4;
		}else if (linea.rfind("Entregado: ", 0) == 0){
			tempProyecto.entregado = (linea.substr(11) == "true")
			campo_actual = 5;
		}else if (linea == "----"){ //el separador de proyectos
			if (campo_actual == 5){ //para asegurar que todos los campos del proyecto haya sido leidos
				proyectos.push_back(tempProyecto);
				tempProyecto = Proyecto();// reinicia el ciclo para el siguiente proyecto
				campo_actual = 0;
			}
		}
	}
	archivo.close();
}
