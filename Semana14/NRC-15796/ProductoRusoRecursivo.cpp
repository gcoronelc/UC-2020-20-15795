#include <iostream>
using namespace std;

int fnMultiplicar(int a, int b){
	if(b==1){
		return a;
	}
	int a1 = a * 2;
	int b1 = b / 2;
	if( b%2 == 0 ){
		return fnMultiplicar(a1,b1) + 0;
	} else {
		return fnMultiplicar(a1,b1) + a;
	}
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int a, b, producto;
	
	// Lectura de datos
	a = 40;
	b = 20;
	
	// Proceso
	producto = fnMultiplicar(a,b);
	
	// Reporte
	cout << "Producto: " << producto << endl;
	
	// Fin
	system("pause");
	return 0;
}
