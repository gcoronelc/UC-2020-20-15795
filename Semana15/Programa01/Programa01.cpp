#include <iostream>
#include "LecturaDatosV3.h"
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	float precio;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "========================" << endl;
	precio = leeDatoFloatPositivo("Precio: ");
	
	
	// Proceso
	
	
	// Reporte
	cout << endl;
	cout << "Precio: " << precio << endl;
	
	
	// Fin
	system("pause");
	return 0;
}
