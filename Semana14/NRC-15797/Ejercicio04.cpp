/*
Realizar un programa recursivo que permita hacer la división por restas sucesivas.
*/

#include <iostream>
using namespace std;

int divisionPorRestas(int a, int b) {
	if(b > a) {
		return 0;
	}
	else {
		return divisionPorRestas(a-b, b) + 1;
	}
}

int main(){
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int num1, num2, rpta;
	// Lectura de datos
	cout << "Número 1 (a): "; cin >> num1;
	cout << "Número 2 (b): "; cin >> num2;
	// Proceso
	rpta = divisionPorRestas(num1, num2);
	// Reporte
	cout << endl;
	cout << "Respuesta: " << rpta << endl;
	// Fin
	system("pause");
	return 0;
}
