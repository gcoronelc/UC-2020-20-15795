/*
Realizar un programa recursivo que permita hacer una multiplicación, utilizando el método Ruso.
*/
#include <iostream>
using namespace std;

int fnMultiplicarRuso(int a, int b){
	if(a==0 || b==0){
		return 0;
	}
	if(b==1){
		return a;
	}
	int a1 = a * 2;
	int b1 = b / 2;
	if( b%2 == 0 ){
		return fnMultiplicarRuso(a1,b1) + 0;
	} else {
		return fnMultiplicarRuso(a1,b1) + a;
	}
}

int main(){
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int num1, num2, producto;
	// Lectura de datos
	cout << "Número 1: "; cin >> num1;
	cout << "Número 2: "; cin >> num2;
	// Proceso
	producto = fnMultiplicarRuso(num1, num2);
	// Reporte
	cout << endl;
	cout << "Producto: " << producto << endl;
	cout << endl;
	// Fin
	system("pause");
	return 0;
}
