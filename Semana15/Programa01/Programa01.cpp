#include <iostream>
#include "LecturaDatosV3.h"
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	float precio, importe;
	int cantidad;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "========================" << endl;
	precio = leeDatoFloatPositivo("Precio: ");
	cantidad = leeDatoEnteroPositivo("Cantidad: ");
	
	
	// Proceso
	importe = precio * cantidad;
	
	// Reporte
	cout << endl;
	cout << "Precio: " << precio << endl;
	cout << "Cantidad: " << cantidad << endl;
	cout << "Importe: " << importe << endl;
	
	
	// Fin
	system("pause");
	return 0;
}
