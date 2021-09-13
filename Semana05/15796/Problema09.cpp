#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int consumoKWH, costoKWH;
	double porcDescuento, importe, descuento, totalPagar;
	char categoria;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "=======================================" << endl;
	cout << "Consumo: "; cin >> consumoKWH;
	cout << "Categoria (A/B/C/D/E): "; cin >> categoria;
	
	// Proceso y Reporte
	cout << endl;
	if( consumoKWH > 0 ){
		if(categoria == 'A' || categoria == 'B' || categoria == 'C' || categoria == 'D' || categoria == 'E'){
			
			// Proceso
			switch(categoria){
				case 'A':
					costoKWH = 3;
					porcDescuento = 0.16;
				case 'B':
					costoKWH = 5;
					porcDescuento = 0.13;	
				case 'C':
					costoKWH = 8;
					porcDescuento = 0.10;		
				case 'D':
					costoKWH = 12;
					porcDescuento = 0.06;	
				case 'E':
					costoKWH = 18;
					porcDescuento = 0.03;																			
			}
			importe = consumoKWH * costoKWH;
			descuento = importe * porcDescuento;
			totalPagar = importe - descuento;
			
			// Reporte
			cout << endl;
			cout << "REPORTE" << endl;
			cout << "=======================================" << endl;
			cout << "Importe: " << importe << endl;			
			cout << "Descuento: " << descuento << endl;			
			cout << "Total a pagar: " << totalPagar << endl;			
			
			
		} else {
			cout << "La categoria debe ser un valor valido." << endl;
		}
	} else {
		cout << "El consumo debe ser un valor positivo." << endl;
	}
	
	
	// Fin
	system("pause");
	return 0;
}
