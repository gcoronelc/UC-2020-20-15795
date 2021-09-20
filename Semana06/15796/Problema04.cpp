#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int paquete, cantPersonas;
	double precioDolaresPaquete, porcDescuento;
	double importeBruto, descuento, baseImponible, impuesto, total;
	
	// Control del menú de opciones
	do{
		// EL MENU
		system("cls");
		cout << "TURISMO A LA ORDEN" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Punta Cana" << endl;
		cout << "2.- San Andrés" << endl;
		cout << "3.- Cancún" << endl;
		cout << "4.- Salir" << endl;
		
		// Leer opción
		cout << endl;
		do{
			cout << "Opcion: "; cin >> paquete;
			if(paquete<1 || paquete>4){
				cout << "ERROR: Opción incorrecta, intentalo nuevamente." << endl;
			}
		}while(paquete<1 || paquete>4);
		
		// Control de fin del programa
		if(paquete == 4){
			break; // Sale del programa
		}
		
		// Lectura de las ventas
		cout << "Cantidad de personas: "; cin >> cantPersonas;
		
		// Proceso
		switch(paquete){
			case 1:
				precioDolaresPaquete = 780;
				porcDescuento = 0.035;
				break;
			case 2:
				precioDolaresPaquete = 1350;
				porcDescuento = 0.04;
				break;	
			case 3:
				precioDolaresPaquete = 2550;
				porcDescuento = 0.045;
				break;					
		}
		importeBruto = precioDolaresPaquete * cantPersonas * 4.10;
		descuento = importeBruto * porcDescuento;
		total = importeBruto - descuento;
		baseImponible = total / 1.18;
		impuesto = total - baseImponible;
		
		// Reporte
		cout << endl;
		cout << "REPORTE" << endl;
		cout << "=================================================" << endl;
		cout << "Importe bruto: " << importeBruto << endl;
		cout << "Descuento: " << descuento << endl;
		cout << "Base imponible: " << baseImponible << endl;
		cout << "Impuesto: " << impuesto << endl;
		cout << "Total: " << total << endl;
		cout << endl;
		
		system("pause");
	} while(paquete<4);
	
	// Fin
	return 0;
}
