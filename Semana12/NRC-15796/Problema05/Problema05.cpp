#include <iostream>
#include "LibreriaLectura01.h"
using namespace std;

void procMostrarMenu();

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	
	// Bucle general del men�
	do{
		procMostrarMenu();
		opMenu = leerOpcion(1,4);
		
		cout << endl;
		cout << "En construcci�n" << endl;
		cout << endl;
		system("pause");
		
	}while(opMenu!=4);
	
	// Fin
	system("pause");
	return 0;
}

void procMostrarMenu(){
	system("cls");
	cout << "COLEGIO SAN IGNACIO" << endl;
	cout << "Men� de Opciones" << endl;
	cout << "===============================" << endl;
	cout << "1.- Calculo de pensi�n" << endl;
	cout << "2.- Listado de estudiantes" << endl;
	cout << "3.- Resumen" << endl;
	cout << "4.- Salir" << endl;
}



