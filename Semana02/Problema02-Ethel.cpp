#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	double Precio, Cantidad, Impuesto, Importe, Total;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "=====================================" << endl;
	cout << "Precio: "; cin >> Precio;
	cout << "Cantidad: "; cin >> Cantidad;

	// Proceso
	Total=Precio*Cantidad;
	Importe=Total/1.18;
	Impuesto=Total-Importe;
	
	// Reporte
	cout << endl; // Linea en blanco
	cout << "REPORTE" << endl;
	cout << "=====================================" << endl;
	cout << "Total:" << Total << endl;
	cout << "Importe: " << Importe << endl;
	cout << "Impuesto: " << Impuesto << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
