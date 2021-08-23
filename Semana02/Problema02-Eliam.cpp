#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int Precio, Cantidad;
	float Importe, Impuesto, Total ;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "===========================================" << endl;
	cout << "Precio: "; cin >> Precio;
	cout << "Cantidad: "; cin >> Cantidad;
	
	// Proceso
	Total = Precio * Cantidad;
	Importe = Total / 1.18;
	Impuesto = Total - Importe;
	
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "===========================================" << endl;	
	cout << "El importe es: " << Importe << endl;
	cout << "El impuesto es: " << Impuesto << endl;
	cout << "El total es: " << Total << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
	
