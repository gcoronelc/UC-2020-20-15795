#include <iostream>
using namespace std;

long fnMultiplicar(int a, int b){
	if( a==0 || b==0 ){
		return 0;
	}
	if( b==1 ){
		return a;
	}
	return a + fnMultiplicar(a,b-1);
}

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
	int x, y, potencia, producto;
	// Datos
	x = 3;
	y = 4;
	// Proceso
	potencia = fnPotencia(x,y);
	producto = fnMultiplicar(x,y);
	// Reporte
	cout << "Potencia = " << potencia << endl;
	cout << "Producto = " << producto << endl;
	// Fin
	system("pause");
	return 0;
}
