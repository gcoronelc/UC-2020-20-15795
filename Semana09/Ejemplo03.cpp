/*
Demostración de parámetro por referencia.
También se le llama parámetro de salida de un procedimiento.
*/

#include <iostream>
using namespace std;

void pintarDoble(int &varReferencia){
	cout << "Valor original: " << varReferencia << endl;
	varReferencia *= varReferencia; // Si afecta al valor original, en este caso es la variable dato.
	cout << "Valor doble: " << varReferencia << endl;
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	int dato = 8;
	cout << "Dato antes de la llamada: " << dato << endl; // 8
	pintarDoble(dato);
	cout << "Dato despues de la llamada: " << dato << endl; // 64
	
	
	// Fin
	system("pause");
	return 0;
}
