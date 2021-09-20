#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu;
	int base, altura, areaTriangulo;
	double radio, areaCircunferencia;
	
	// Control del menú de opciones
	do{
		// EL MENU
		system("cls");
		cout << "APRENDIENDO MATEMATICAS CON C++" << endl;
		cout << "==========================================================" << endl;
		cout << "1.- Area de un Triangulo" << endl;
		cout << "2.- Area de una circunferencia" << endl;
		cout << "3.- Area de un Rectangulo" << endl;
		cout << "4.- Encontrar el termino \"n\" de la serie de fibonacci" << endl;
		cout << "5.- Salir" << endl;
		// Leer opción
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>5){
				cout << "ERROR: Opción incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>5);
		
		// Procesar opción del menú
		system("cls");
		switch(opMenu){
			
			case 1: // Opción 1: AREA DE UN TRIANGULO
				// Cabecera
				cout << "============================" << endl;
				cout << "AREA DE UN TRIANGULO" << endl;
				cout << "============================" << endl;
				cout << endl;
				// Lectura
				cout << "Lectura de datos" << endl;
				cout << "------------------------------" << endl;
				cout << "Base: "; cin >> base;
				cout << "Altura: "; cin >> altura;
				// Proceso
				areaTriangulo = base * altura / 2;
				// Reporte
				cout << endl;
				cout << "Reporte" << endl;
				cout << "------------------------------" << endl;
				cout << "Area: " << areaTriangulo << endl;
				break;
			
			case 2: // Opción 2: Area de una circunferencia
				// Cabecera
				cout << "============================" << endl;
				cout << "AREA DE UNA CIRCUNFERENCIA" << endl;
				cout << "============================" << endl;
				cout << endl;
				// Lectura
				cout << "Lectura de datos" << endl;
				cout << "------------------------------" << endl;
				cout << "Radio: "; cin >> radio;
				// Proceso
				areaCircunferencia = 3.14159265 * radio * radio;
				// Reporte
				cout << endl;
				cout << "Reporte" << endl;
				cout << "------------------------------" << endl;
				cout << "Area: " << areaCircunferencia << endl;
				break;	
			
			case 3: // Opción 3: Area de un Rectangulo
				// Cabecera
				cout << "============================" << endl;
				cout << "AREA DE UN RECTANGULO" << endl;
				cout << "============================" << endl;
				cout << endl;
				// Lectura
				cout << "Lectura de datos" << endl;
				cout << "------------------------------" << endl;
				cout << "Proceso opción 3" << endl;
				break;					
			
			case 4: // Opción 4: TERMINO N DE FIBONACCI
				// Cabecera
				cout << "============================" << endl;
				cout << "TERMINO N DE FIBONACCI" << endl;
				cout << "============================" << endl;
				cout << endl;
				// Lectura
				cout << "Lectura de datos" << endl;
				cout << "------------------------------" << endl;
				cout << "Proceso opción 4" << endl;
				break;
			// Opción 5: Salir
			case 5:
				cout << "Fin del programa." << endl;
				break;
		}
		
		cout << endl;
		system("pause");
	} while(opMenu<5);
	
	// Fin
	return 0;
}
