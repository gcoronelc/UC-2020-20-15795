/*
PROBLEMA 6
-------------------------------------------------
Elaborar un programa para ingresar la edad 
de n personas e indique cuantos son mayores 
de edad y cuantos son menores de edad.

Nota:
Ya que “n” es una incógnita, se debe considerar 
el uso del DO-WHILE, para indicar si desea seguir 
ingresando otra edad, a través de una respuesta 
SI: S o s – NO: N o n.

Análisis
-------------------------------------------------
ContMayoresEdad => Se incrementa en 1 cada vez
                   que la edad ingresada es mayor 
                   o igual a 18.
ContMenoresEdad => Se incrementa en 1 cada vez
                   que la edad ingresada es menor
									 a 18.                   
*/

#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int edad, contMayoresEdad, contMenoresEdad;
	char rpta;
	
	// Inicializar contadores y acumulares
	contMayoresEdad = 0;
	contMenoresEdad = 0;
	
	// Lectura y Proceso de Datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "====================================" << endl;
	do{
		// Leer edad
		cout << "Ingresar edad: "; cin >> edad;
		// Procesar edad
		if( edad >= 18 ){
			contMayoresEdad++;
		} else {
			contMenoresEdad++;
		}
		// Lectura de continuidad
		cout << "Ingresa otra edad (S/N)? "; cin >> rpta;
	} while(rpta == 'S' || rpta == 's');
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "====================================" << endl;	
	cout << "Cantidad de mayores de edad: " << contMayoresEdad << endl;
	cout << "Cantidad de menores de edad: " << contMenoresEdad << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
