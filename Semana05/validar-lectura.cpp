/*

	do{
		sentencia;
	} while( condicion )

*/

#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	int precio;
	
	do{
		cout << "Ingrese el precio: "; cin >> precio;
		if( precio <= 0 ){
			cout << "ERROR, el precio es positivo, intente nuevamente." << endl;
		}
	}while( precio <= 0 );
	
	cout << "El bucle finalizo." << endl;
	
	// Fin
	system("pause");
	return 0;
}
