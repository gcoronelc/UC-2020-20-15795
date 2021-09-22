#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu;
	double ventas, comision, bono, pagoTotal;
	double porcComision, porcBono, meta;
	
	// Control del menú de opciones
	do{
		// EL MENU
		system("cls");
		cout << "PRODUCTIVIDAD DE VENDEDORES" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Enero - Marzo" << endl;
		cout << "2.- Abril – Junio" << endl;
		cout << "3.- Julio – Setiembre" << endl;
		cout << "4.- Octubre - Diciembre" << endl;
		cout << "5.- Salir" << endl;
		
		// Leer opción
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>5){
				cout << "ERROR: Opción incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>5);
		
		// Control de fin del programa
		if(opMenu == 5){
			break; // Sale del programa
		}
		
		// Lectura de las ventas
		cout << "Ingrese las ventas: "; cin >> ventas;
		
		// Proceso
		switch(opMenu){
			case 1:
				meta = 80000;
				porcComision = (ventas>=meta)?0.10:0;
				porcBono =  (ventas>meta)?0.03:0;
				break;
			case 2:
				meta = 50000;
				porcComision = (ventas>=meta)?0.12:0;
				porcBono =  (ventas>meta)?0.05:0;
				break;	
			case 3:
				meta = 70000;
				porcComision = (ventas>=meta)?0.15:0;
				porcBono =  (ventas>meta)?0.07:0;
				break;					
			case 4:
				meta = 100000;
				porcComision = (ventas>=meta)?0.16:0;
				porcBono =  (ventas>meta)?0.08:0;				
				break;
		}
		comision = meta * porcComision;
		bono = fabs(ventas - meta) * porcBono;
		pagoTotal = comision + bono;
		
		// Reporte
		cout << endl;
		cout << "REPORTE" << endl;
		cout << "=================================================" << endl;
		cout << "Comisión: " << comision << endl;
		cout << "Bono: " << bono << endl;
		cout << "Pago Total: " << pagoTotal << endl;
		cout << endl;
		
		system("pause");
	} while(opMenu<5);
	
	// Fin
	return 0;
}
