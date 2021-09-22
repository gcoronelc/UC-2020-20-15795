#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Constantes
	const double TC_DOLARES = 4.11;
	const double TC_EURO = 4.83;
	const double TC_EURO = 5.61;
	
	// Variables
	int opMenu, tipoCambio;
	double importe, cambio;
	string etiquetaReporte;
	
	// Control del menú de opciones
	do{
		// EL MENU
		system("cls");
		cout << "CASA DE CAMBIO \"QUIERO TU PLATA\"" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Cambio en Dólar a Soles y Viceversa" << endl;
		cout << "2.- Cambio en Euros a Soles y Viceversa" << endl;
		cout << "3.- Cambio en Libras Esterlinas a Soles y Viceversa" << endl;
		cout << "4.- Salir" << endl;
		// Leer opción
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>4){
				cout << "ERROR: Opción incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>4);
		
		// Procesar opción del menú
		system("cls");
		switch(opMenu){
			
			case 1: // Opción 1: Cambio en Dólar a Soles y Viceversa
				// Cabecera
				cout << "OPCION 1: Cambio en Dólar a Soles y Viceversa" << endl;
				cout << "====================================================" << endl;
				// Leer el tipo de cambio
				cout << endl;
				cout << "TIPO DE CAMBIO" << endl;
				cout << "1.- Dolares a Soles" << endl;
				cout << "2.- Soles a Dolares" << endl;
				do{
					cout << "Opción ==> "; cin >> tipoCambio;
					if(tipoCambio != 1 && tipoCambio != 2){
						cout << "ERROR: eliga la opción correcta." << endl;
					}
				}while(tipoCambio != 1 && tipoCambio != 2);
				// Leer el importe
				cout << endl;
				cout << "Importe a cambiar: "; cin >> importe;
				// Proceso
				switch(tipoCambio){
					case 1:
						cambio = importe * TC_DOLARES;
						etiquetaReporte = "Su cambio en Soles es: ";
						break;
					case 2:
						cambio = importe / TC_DOLARES;
						etiquetaReporte = "Su cambio en Dolares es: ";
						break;						
				}
				// Reporte
				cout << endl;
				cout << "Reporte" << endl;
				cout << "----------------------------------------------------" << endl;					
				cout << etiquetaReporte << cambio << endl;
				break;
			
			case 2: // Opción 2: Cambio en Euros a Soles y Viceversa
				cout << "Proceso opción 2" << endl;
				break;	
			
			case 3: // Opción 3: Cambio en Libras Esterlinas a Soles y Viceversa
				cout << "Proceso opción 3" << endl;
				break;					
			
			case 4: // Opción 4: Salir
				cout << "Fin del programa." << endl;
				break;
		}
		
		cout << endl;
		system("pause");
	} while(opMenu<4);
	
	// Fin
	return 0;
}
