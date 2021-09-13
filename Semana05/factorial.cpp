/*

	Calcular el factorial de un numero.
	
	5! = 1 x 2 x 3 x 4 x 5
	
*/

#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int n, factorial;
	
	// Leer "n"
	cout << "Ingrese el valor para n: ";
	cin  >> n;
	
	// Proceso
	factorial = 1;
	for(int i=1; i<=n; i++){
		factorial = factorial * i;
	}
	
	// Reporte
	cout << endl;
	cout << "Factorial: " << factorial << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
