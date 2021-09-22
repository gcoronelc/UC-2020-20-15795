#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu;
	
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
			// Opción 1: aaaa
			case 1:
				cout << "Proceso opción 1" << endl;
				break;
			// Opción 2: bbbbb
			case 2:
				cout << "Proceso opción 2" << endl;
				break;	
			// Opción 3: cccccccc
			case 3:
				cout << "Proceso opción 3" << endl;
				break;					
			// Opción 4: Salir
			case 4:
				cout << "Fin del programa." << endl;
				break;
		}
		
		system("pause");
	} while(opMenu<4);
	
	// Fin
	return 0;
}
