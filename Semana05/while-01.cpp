/*

	while( condicion ){
		sentencia;
	}

*/

#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	int i = 5;
	
	while( i-- > 0 ){
		cout << "Necesito aprender C++, urgente." << endl;
	}
	
	cout << "El bucle finalizo." << endl;
	
	// Fin
	system("pause");
	return 0;
}
