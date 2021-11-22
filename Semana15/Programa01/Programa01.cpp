#include <iostream>
#include "LecturaDatosV3.h"
using namespace std;

float calcPorcDescuento(int tipoProducto){
	float porcDcto = 0.0;
	switch(tipoProducto){
		case 1:
			porcDcto = 0.05;
			break;
		case 2:
			porcDcto = 0.08;
			break;
		case 3:
			porcDcto = 0.10;
			break;
		case 4:
			porcDcto = 0.13;
			break;
		case 5:
			porcDcto = 0.15;
			break;												
	}
	return porcDcto;
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	float precio, importe, porcDescuento, descuento, totalPagar;
	int cantidad, tipoProducto;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "========================" << endl;
	tipoProducto = leeDatoEntero("Tipo de producto (1-5): ",1,5);
	precio = leeDatoFloatPositivo("Precio: ");
	cantidad = leeDatoEnteroPositivo("Cantidad: ");
	
	
	// Proceso
	importe = precio * cantidad;
	porcDescuento = calcPorcDescuento(tipoProducto);
	descuento = importe * porcDescuento;
	totalPagar = importe - descuento;
	
	// Reporte
	cout << endl;
	cout << "REPORTE DE VENTA" << endl;
	cout << "========================" << endl;	
	cout << "Precio: " << precio << endl;
	cout << "Cantidad: " << cantidad << endl;
	cout << "Importe: " << importe << endl;
	cout << "Descuento: " << descuento << endl;
	cout << "Total a pagar: " << totalPagar << endl;
	
	
	// Fin
	system("pause");
	return 0;
}
