#include <iostream>
#include "LecturaDatosV3.h"
using namespace std;

// Variables globales


// Declaración de las funciones
void mostrarMenu();
void registrarVenta();
void reporteVentas();
void salir();

// Función principal
int main(){
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	// Proceso principal
	do{
		// El menú
		mostrarMenu();
		opMenu =  leerOpcion(1,3);
		// Procesar opción
		system("cls");
		switch(opMenu){
			case 1:
				registrarVenta();
				break;
			case 2:
				reporteVentas();
				break;
			case 3:
				salir();
				break;
		}
		system("pause");
	} while(opMenu!=3);
	// Fin
	return 0;
}

void mostrarMenu(){
	system("cls");
	cout << "EL PESCADOR" << endl;
	cout << "MENU DE OPCIONES" << endl;
	cout << "============================" << endl;
	cout << "1.- Registro de ventas" << endl;
	cout << "2.- Reporte de ventas" << endl;
	cout << "3.- Salir" << endl;
	cout << "============================" << endl;	
}

void registrarVenta(){
	cout << "En construcción" << endl;
}

void reporteVentas(){
	cout << "En construcción" << endl;
}

void salir(){
	cout << "En construcción" << endl;
}


