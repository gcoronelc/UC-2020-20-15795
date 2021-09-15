/*
Problema 01: Aplicar while
-------------------------------------------------------------
Ingrese el precio de 10 artículos y muestre el total, 
si este es mayor a 200 se le aplicará un descuento del 15% 
muestre el total a pagar y el descuento.

Análisis
-------------------------------------------------------------
Total = Sumatoria del precio de los 10 articulos.
Descuento = Total * 0.15 (Solo si el total > 200)
TotalPagar = Total - Descuento
*/
#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	const int CANT_PRODUCTOS = 3;
	double precio, total, descuento, totalPagar;
	int contador;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "==================================" << endl;
	contador = 1;
	total = 0;
	while(contador <= CANT_PRODUCTOS){
		// Lectura
		cout << "Lectura " << contador << endl;
		cout << "Precio: "; cin >> precio;
		// Actualizar el total
		total += precio;
		// Incrementar el contador
		contador++;
	}
	
	// Proceso
	if( total > 200 ){
		descuento = total * 0.15;
	} else {
		descuento = 0.0;
	}
	totalPagar = total - descuento;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "==================================" << endl;	
	cout << "Total: " << total << endl;
	cout << "Descuento: " << descuento << endl;
	cout << "Total a pagar: " << totalPagar << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
