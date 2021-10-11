/*
Demostración de parámetro por valor.

*/

#include <iostream>
using namespace std;

void pintarDoble(int valor){
	cout << "Valor original: " << valor << endl;
	valor = valor * valor; // No afecta al valor original, en este caso es la variable dato.
	cout << "Valor doble: " << valor << endl;
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	int dato = 8;
	cout << "Dato antes de la llamada: " << dato << endl; // 8
	pintarDoble(dato);
	cout << "Dato despues de la llamada: " << dato << endl; // 8
	
	
	// Fin
	system("pause");
	return 0;
}
