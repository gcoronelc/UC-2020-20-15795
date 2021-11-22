#include <iostream>
#include "LecturaDatosV2.h"
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	float precio;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "Precio: "; 
	precio = leeDatoFoat();
	
	
	// Proceso
	
	
	// Reporte
	cout << endl;
	cout << "Precio: " << precio << endl;
	
	
	// Fin
	system("pause");
	return 0;
}
