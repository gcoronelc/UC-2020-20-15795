/*

Ingrese el precio de 10 artículos y muestre el total, 
si este es mayor a 200 se le aplicará un descuento del 
15% muestre el total a pagar y el descuento.

*/
#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	double sumatoriaPrecios, precio, descuento, totalPagar;
	
	// Lectura de datos
	sumatoriaPrecios = 0;
	for(int i=1; i<=3; i++){
		cout << "Producto " << i << ": ";
		cin >> precio;
		sumatoriaPrecios += precio;
	}
	
	// Proceso
	descuento = 0;
	if(sumatoriaPrecios>200){
		descuento = sumatoriaPrecios * 0.15;
	}
	totalPagar = sumatoriaPrecios - descuento;
	
	// Reporte
	cout << endl;
	cout << "Sumatoria: " << sumatoriaPrecios << endl;
	cout << "Descuento: " << descuento << endl;
	cout << "Total a pagar: " << totalPagar << endl;
	cout << endl;
	
	
	// Fin
	system("pause");
	return 0;
}
