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
	
	int i = 5;
	
	do{
		cout << "Necesito aprender C++, urgente." << endl;
	}while( i-- > 0 );
	
	cout << "El bucle finalizo." << endl;
	
	// Fin
	system("pause");
	return 0;
}
