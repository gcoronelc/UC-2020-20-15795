#include <iostream>
using namespace std;

/**
 ** Parametros por valor.
 ** Cualquier cambio en el parámetro no modifica el argumento.
**/
void procParametros(int dato1, int dato2){
	dato1 = 1000;
	dato2 = 2000;
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int a, b;
	
	// Datos
	a = 100;
	b = 200;
	
	// Proceso
	procParametros(a,b);
	
	// Reporte
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	// Fin
	system("pause");
	return 0;
}
