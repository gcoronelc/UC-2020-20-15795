/*
Fase 1: Estructura de la soluci�n
*/
#include <iostream>
#include "LibreriaLectura01.h"
using namespace std;

void procMostrarMenu();
void calcPension();
void listado();
void resumen();

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	
	// Bucle general del men�
	do{
		procMostrarMenu();
		opMenu = leerOpcion(1,4);
		
		switch(opMenu){
			case 1:
				calcPension();
				break;
			case 2:
				listado();
				break;
			case 3:
				resumen();
				break;
		}
		
		if(opMenu!=4){
			system("pause");
		}
	}while(opMenu!=4);
	
	// Fin
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

void calcPension(){
		cout << endl;
		cout << "En construcci�n" << endl;
		cout << endl;
}

void listado(){
		cout << endl;
		cout << "En construcci�n" << endl;
		cout << endl;

}
void resumen(){
		cout << endl;
		cout << "En construcci�n" << endl;
		cout << endl;
}

