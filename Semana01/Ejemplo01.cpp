/*
 * PROBLEMA: Suma 2 numeros
*/

#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");

	// Variables
	int num1, num2, suma;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "====================================" << endl;
	cout << "Número 1: "; cin >> num1;
	cout << "Número 2: "; cin >> num2;
	
	// Proceso
	suma = num1 + num2;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "====================================" << endl;
	cout << "Suma: " << suma << endl;
	cout << endl;
	
	system("pause");
	return 0;
}
