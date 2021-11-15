#include <iostream>
using namespace std;

int fnSumaDigitos(int numero){
	if(numero==0){
		return 0;
	}
	return fnSumaDigitos(numero/10) + (numero%10);
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int numero, suma;
	
	// Lectura de datos
	numero = 543543;
	
	// Proceso
	suma = fnSumaDigitos(numero);
	
	// Reporte
	cout << "Suma: " << suma << endl;
	
	// Fin
	system("pause");
	return 0;
}
