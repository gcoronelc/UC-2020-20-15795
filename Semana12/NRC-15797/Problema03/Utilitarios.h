#include<iostream>
using namespace std;


float obtenerPorcDcto(int cantidad){
	float porcDcto;
	// Proceso: Inicio
	porcDcto = 0.0; // Punto de partida
	porcDcto = (cantidad>100)?4:porcDcto;
	porcDcto = (cantidad>25 && cantidad<=100)?2:porcDcto;
	porcDcto = (cantidad>10 && cantidad<=25)?1:porcDcto;
	// Proceso: Fin
	return porcDcto;
}


void mostrarMenu(){
	system("cls");
	cout << "SISTEMA DE VENTAS" << endl;
	cout << "Menú de opciones" << endl;
	cout << "==============================" << endl;
	cout << "1.- Registrar venta" << endl;
	cout << "2.- Listado" << endl;
	cout << "3.- Reporte" << endl;
	cout << "4.- Salir" << endl;
	cout << endl;	
}


