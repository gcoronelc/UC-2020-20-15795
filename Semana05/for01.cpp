/*

	for(<expr1>;<expr2>;<expr3>){
		sentencia;
	}
	
	<expr1> : Expresi�n de inicializaci�n.
	<expr2> : Condici�n del bucle.
	<expr3> : Expresi�n de incremento.
	
*/

#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	for(int i=1; i<=10; i++){
		cout << i << ".- Soy un ganador, aun perdiendo." << endl;
	}
	
	cout << "El bucle finalizo." << endl;
	
	// Fin
	system("pause");
	return 0;
}
