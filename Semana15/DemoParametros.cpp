#include <iostream>
using namespace std;

int fnSumar(int &dato1, int dato2){ // dato1 y dato2 son par�metros
	dato1 = dato1 * 2;
	return (dato1 + dato2);
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int num1, num2, suma;
	
	// Datos
	num1 = 50;
	num2 = 70;
	
	// Proceso
	suma = fnSumar(num1, num2); // num1 y num2 son argumentos.
	
	// Reporte
	cout << "N�mero 1: " << num1 << endl;
	cout << "N�mero 2: " << num2 << endl;
	cout << "Suma: " << suma << endl;
	
	// Fin
	system("pause");
	return 0;
}
