#include <iostream>
using namespace std;

long fnPotencia(int x, int y){
	if( y==0 ){
		return 1;
	}
	return x * fnPotencia(x,y-1);
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int x, y, potencia;
	// Datos
	x = 3;
	y = 4;
	// Proceso
	potencia = fnPotencia(x,y);
	// Reporte
	cout << "Potencia = " << potencia << endl;
	// Fin
	system("pause");
	return 0;
}
