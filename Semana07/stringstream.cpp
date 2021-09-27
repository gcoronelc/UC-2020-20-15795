#include <iostream>
#include <sstream> 
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	stringstream reporte; // Es un buffer
	
	reporte << "Hola" << endl;
	
	reporte.str(""); // Limpia el buffer
	reporte << "Todo chevere!!!" << endl;
	
	cout << reporte.str() << endl;
	cout << endl;
	
	
	// Fin
	system("pause");
	return 0;
}
