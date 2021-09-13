#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int consumoKWH, costoKWH;
	double porcDescuento, importe, descuento, totalPagar;
	char categoria;
	
	// Lectura de datos con validación
	cout << "LECTURA DE DATOS" << endl;
	cout << "=======================================" << endl;
	
	// Lectura del consumo
	do{
		cout << "Consumo (KWH): "; cin >> consumoKWH;
		if(consumoKWH<0){
			cout << "Error: el consumo debe ser positivo, intentalo de nuevo." << endl;
		}
	} while(consumoKWH<0);
	
	// Lectura de la categoría
	do{
		cout << "Categoria (A/B/C/D/E): "; cin >> categoria;
		categoria = toupper( categoria );
		if(categoria != 'A' && categoria != 'B' && categoria != 'C' && categoria != 'D' && categoria != 'E'){
			cout << "Error: la categoría ingresada no es correcta, intentalo de nuevo." << endl;
		}
	}while(categoria != 'A' && categoria != 'B' && categoria != 'C' && categoria != 'D' && categoria != 'E');
	
	
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
	cout << "Categoría: " << categoria << endl;			
	cout << "Importe: " << importe << endl;			
	cout << "Descuento: " << descuento << endl;			
	cout << "Total a pagar: " << totalPagar << endl;			
			
	// Fin
	system("pause");
	return 0;
}
