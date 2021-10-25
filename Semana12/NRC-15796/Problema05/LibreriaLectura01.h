#include<iostream>
using namespace std;


// Leer opción
int leerOpcion(int opMin, int opMax){
	int opcion;
	cout << endl;
	do{
		cout << "Opcion: "; cin >> opcion;
		if(opcion < opMin || opcion > opMax){
			cout << "Opcion incorrecta." << endl;
		}
	} while(opcion < opMin || opcion > opMax);
	return opcion;
}


