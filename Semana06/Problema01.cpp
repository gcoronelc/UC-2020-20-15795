#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu;
	int base, altura, areaTriangulo;
	
	// Control del men� de opciones
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
		// Leer opci�n
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>5){
				cout << "ERROR: Opci�n incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>5);
		
		// Procesar opci�n del men�
		system("cls");
		switch(opMenu){
			// Opci�n 1: AREA DE UN TRIANGULO
			case 1:
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
			// Opci�n 2: bbbbb
			case 2:
				cout << "Proceso opci�n 2" << endl;
				break;	
			// Opci�n 3: cccccccc
			case 3:
				cout << "Proceso opci�n 3" << endl;
				break;					
			// Opci�n 4: dddddddd
			case 4:
				cout << "Proceso opci�n 4" << endl;
				break;
			// Opci�n 5: Salir
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
