#include<iostream>
#include <stdlib.h>
#include<string>
using namespace std;

int leeDatoEntero()
{
	int dato;
	cin>> dato;
	return dato;
}

int leeDatoEntero(string etiqueta, int valorMinimo, int valorMaximo)
{
	int dato;
	do{
		cout << etiqueta; cin >> dato;
		if(dato<valorMinimo || dato>valorMaximo){
			cout << "Valor incorrecto." << endl;
		}
	} while(dato<valorMinimo || dato>valorMaximo);
	return dato;
}

int leeDatoEnteroPositivo(string etiqueta)
{
	int dato;
	do{
		cout << etiqueta; cin >> dato;
		if(dato<1){
			cout << "Valor incorrecto." << endl;
		}
	} while(dato<1);
	return dato;
}

// Lee un dato float.
// Si el usuario ingresa una cadena, muestra un mensaje de error.
float leeDatoFloat()
{
	float dato;
	string cadena;
	do{
		cin >> cadena;
		if (isalpha(cadena[0])){
			cout << "Error, ingrese un número." << endl;
		}
	}while(isalpha(cadena[0]));
	dato = atof(cadena.c_str());
	return dato;
}

// Lee un dato float.
// Si el usuario ingresa una cadena, muestra un mensaje de error.
// Maneja la etiqueta del dato.
float leeDatoFloat(string etiqueta)
{
	float dato;
	string cadena;
	do{
		cout << etiqueta; cin >> cadena;
		if (isalpha(cadena[0])){
			cout << "Error, ingrese un número." << endl;
		}
	}while(isalpha(cadena[0]));
	dato = atof(cadena.c_str());
	return dato;
}

// Lee un dato float positivo, mayor que cero.
// Si el usuario ingresa una cadena, muestra un mensaje de error.
// Si el usuario ingresa un valor negativo, muestra un mensaje de error.
// Maneja la etiqueta del dato.
float leeDatoFloatPositivo(string etiqueta)
{
	float dato = -1;
	string cadena;
	do{
		cout << etiqueta; cin >> cadena;
		if (isalpha(cadena[0])){
			cout << "Error, ingrese un número." << endl;
			continue;
		}
		dato = atof(cadena.c_str());
		if (dato<=0){
			cout << "Error, ingrese un número positivo." << endl;
			continue;
		}		
	}while(dato<=0);
	return dato;
}

double leeDatoDouble()
{
	double dato;
	cin>> dato;
	return dato;
}

double leeDatoDouble(string etiqueta, double valorMinimo, double valorMaximo)
{
	double dato;
	do{
		cout << etiqueta; cin >> dato;
		if(dato<valorMinimo || dato>valorMaximo){
			cout << "Valor incorrecto." << endl;
		}
	} while(dato<valorMinimo || dato>valorMaximo);
	return dato;
}

double leeDatoDoublePositivo(string etiqueta)
{
	double dato;
	do{
		cout << etiqueta; cin >> dato;
		if(dato<=0){
			cout << "Valor incorrecto, intentalo nuevamente." << endl;
		}
	} while(dato<=0);
	return dato;
}

char leeDatoChar()
{
	char dato;
	cin>> dato;
	return dato;
}

char leeSexoMF(string etiqueta)
{
	char dato;
	do{
		cout << etiqueta; cin >> dato;
		dato = toupper(dato);
		if(dato!='M' && dato!='F'){
			cout << "Valor incorrecto, intentalo nuevamente." << endl;
		}
	} while(dato!='M' && dato!='F');
	return dato;
}


string leeDatoString()
{
	string dato;
	cin >> dato;
	return dato;
}

string leeDatoString(string etiqueta)
{
	string dato;
	cout << etiqueta; cin >> dato;
	return dato;
}


/*
   Leer opción de un rango de opciones.
   Por ejemplo:
   
      op =  leerOpcion(1,5);
      
   Lee una opción entre 1 y 5.
*/
int leerOpcion(int opMin, int opMax){
	int opcion;
	do{
		cout << "\nOpcion: "; cin >> opcion;
		if(opcion < opMin || opcion > opMax){
			cout << "Opcion incorrecta." << endl;
		}
	} while(opcion < opMin || opcion > opMax);
	return opcion;
}
