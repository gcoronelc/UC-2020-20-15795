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
	
	// Control del men� de opciones
	do{
		// EL MENU
		system("cls");
		cout << "CASA DE CAMBIO \"QUIERO TU PLATA\"" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Cambio en D�lar a Soles y Viceversa" << endl;
		cout << "2.- Cambio en Euros a Soles y Viceversa" << endl;
		cout << "3.- Cambio en Libras Esterlinas a Soles y Viceversa" << endl;
		cout << "4.- Salir" << endl;
		// Leer opci�n
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>4){
				cout << "ERROR: Opci�n incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>4);
		
		// Procesar opci�n del men�
		system("cls");
		switch(opMenu){
			
			case 1: // Opci�n 1: Cambio en D�lar a Soles y Viceversa
				// Cabecera
				cout << "OPCION 1: Cambio en D�lar a Soles y Viceversa" << endl;
				cout << "====================================================" << endl;
				// Leer el tipo de cambio
				cout << endl;
				cout << "TIPO DE CAMBIO" << endl;
				cout << "1.- Dolares a Soles" << endl;
				cout << "2.- Soles a Dolares" << endl;
				do{
					cout << "Opci�n ==> "; cin >> tipoCambio;
					if(tipoCambio != 1 && tipoCambio != 2){
						cout << "ERROR: eliga la opci�n correcta." << endl;
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
			
			case 2: // Opci�n 2: Cambio en Euros a Soles y Viceversa
				cout << "Proceso opci�n 2" << endl;
				break;	
			
			case 3: // Opci�n 3: Cambio en Libras Esterlinas a Soles y Viceversa
				cout << "Proceso opci�n 3" << endl;
				break;					
			
			case 4: // Opci�n 4: Salir
				cout << "Fin del programa." << endl;
				break;
		}
		
		cout << endl;
		system("pause");
	} while(opMenu<4);
	
	// Fin
	return 0;
}
