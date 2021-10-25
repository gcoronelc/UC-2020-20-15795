#include <iostream>
#include "LibreriaEGCC.h"
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int op;
	
	// Lectura de datos
	cout << "1. Chicharrones" << endl;
	cout << "2. Escabeche" << endl;
	cout << "3. Caldo de gallina" << endl;
	cout << endl;
	
	op = leerOpcion(1,3);
	
	// Reporte
	cout << endl;
	cout << "Pedido en camino." << endl;
	
	
	// Fin
	system("pause");
	return 0;
}
