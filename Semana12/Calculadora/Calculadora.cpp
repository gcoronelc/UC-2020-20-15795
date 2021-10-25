#include <iostream>
#include "CalculadoraBasica.h"
#include "LibreriaEGCC.h"
using namespace std;

// Crear menú
void crearMenu(){
	system("cls");
	cout << "MENU DE OPCIONES" << endl << endl;
	cout << "1.- Suma" << endl;
	cout << "2.- Resta" << endl;
	cout << "3.- Multiplicar" << endl;
	cout << "4.- Salir" << endl;
}


// Proceso sumar
void procesoSumar(){
	// Variables
	int numero1, numero2, suma;
	// Entrada
	cout << endl << endl;
	cout << "PROCESO SUMAR" << endl;
	cout << "Numero 1: "; cin >> numero1;
	cout << "Numero 2: "; cin >> numero2;
	// Proceso
	suma = sumar(numero1,numero2);	
	// Salida
	cout << "\nREPORTE\n";
	cout << "Suma: " << suma << endl;
	system("pause");
}

// Proceso restar
void procesoRestar(){
	// VARIABLES
	int numero1, numero2, resta;
	
	//Entrada
	cout << endl << endl;
	cout << "Proceso Restar" << endl;
	cout << "Numero 1: "; cin >> numero1;
	cout << "Numero 2: "; cin >> numero2;
     
	//Proceso
	resta= numero1 - numero2;
	
	//Salida
	cout << "\nREPORTE\n";
	cout << "Resta: " << resta << endl;
	system ("pause"); 

}

// Proceso multiplicar
void procesoMultiplicar(){
	// Variables
	int numero1, numero2, multiplicacion;
	// Entrada
	cout << endl << endl;
	cout << "PROCESO MULTIPLICAR" << endl;
	cout << "Numero 1: "; cin >> numero1;
	cout << "Numero 2: "; cin >> numero2;
	// Proceso
	multiplicacion = numero1 * numero2;	
	// Salida
	cout << "\nREPORTE\n";
	cout << "MULTIPLICACION: " << multiplicacion << endl;
	system("pause");

}

int main(int argc, char** argv) {
		// Variables
	int opcion;
	// Proceso principal
	do{
		
		crearMenu();
		opcion = leerOpcion(1,4);
		
		switch(opcion){
			case 1:
				procesoSumar();
				break;
			case 2:
				procesoRestar();
				break;
			case 3:
				procesoMultiplicar();
				break;
		}
		
	} while(opcion != 4);
	system("pause");
}
