#include <iostream>
using namespace std;

long fnFactorial( int n ){
	if( n==0 ){
		return 1; // Punto de finalización
	}
	return n * fnFactorial(n-1);
}

int main(){
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	long factorial;
	// Demostración
	for(int n=1; n<=10; n++){
		factorial = fnFactorial(n);
		cout << "Factorial de " << n << " es " << factorial << endl;
	}
	// Fin
	system("pause");
	return 0;
}
