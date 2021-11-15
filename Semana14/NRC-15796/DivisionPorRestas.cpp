#include <iostream>
using namespace std;

/**
** Retorna a / b
**/
int fnDividir(int a, int b){
	if(b>a){
		return 0;
	}
	return fnDividir(a-b,b) + 1;
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int a,b,c;
	
	// Datos
	a = 64;
	b = 16;
	
	// Proceso
	c = fnDividir(a,b);
	
	// Reporte
	cout << "División: " << c << endl;
	
	// Fin
	system("pause");
	return 0;
}
