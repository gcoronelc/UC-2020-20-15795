/*
 * Desarrollar un programa para calcular 
 * el promedio de un estudiantes.
 * Se sabe que son 3 notas.
*/

#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int nota1, nota2, nota3, promedio;
	double promedio2;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "=====================================" << endl;
	cout << "Nota 1: "; cin >> nota1;
	cout << "Nota 2: "; cin >> nota2;
	cout << "Nota 3: "; cin >> nota3;
	
	// Proceso
	promedio = (nota1 + nota2 + nota3) / 3;
	promedio2 = (nota1 + nota2 + nota3) / 3.0;
	
	// Reporte
	cout << endl; // Linea en blanco
	cout << "REPORTE" << endl;
	cout << "=====================================" << endl;
	cout << "Promedio 1: " << promedio << endl;
	cout << "Promedio 2: " << promedio2 << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
