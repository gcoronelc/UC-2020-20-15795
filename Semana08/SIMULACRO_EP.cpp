#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu;
	int tipoPlato, cantidad, edad;
	char sexo;
	
	// Control del men� de opciones
	do{
		// EL MENU
		system("cls");
		cout << "LA CASA DEL INKA" << endl;
		cout << endl;
		cout << "=================================================" << endl;
		cout << "SISTEMA DE VENTAS" << endl;
		cout << "Men� de opciones" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Procesar venta" << endl;
		cout << "2.- Listado de ventas" << endl;
		cout << "3.- Reporte de indicadores" << endl;
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
			
			// Opci�n 1: Procesar venta
			case 1:
				cout << "LA CASA DEL INKA" << endl;
				cout << "SISTEMA DE VENTAS" << endl;			
				cout << endl;
				cout << "LECTURA DE DATOS" << endl;
				cout << "=================================================" << endl;
				cout << "Tipo de plato" << endl;
				cout << "  1.- Carnes" << endl;
				cout << "  2.- Pescados" << endl;
				cout << "  3.- Vinos" << endl;
				do{
					cout << "Seleccione el tipo de plato: "; cin >> tipoPlato;
					if(tipoPlato<1 || tipoPlato>3){
						cout << "ERROR, dato incorrecto, intentar nuevamente." << endl;
					}
				}while(tipoPlato<1 || tipoPlato>3);
				do{
					cout << "Cantidad: "; cin >> cantidad;
					if(cantidad <= 0){
						cout << "ERROR, la cantidad es un valor positivo, intentar nuevamente." << endl;
					}
				}while(cantidad <= 0);
				do{
					cout << "Sexo (M/F): "; cin >> sexo;
					sexo = toupper(sexo);
					if(sexo!= 'M' && sexo!='F'){
						cout << "ERROR, dato incorrecto, intentar nuevamente." << endl;
					}
				}while(sexo!= 'M' && sexo!='F');
				do{
					cout << "Edad: "; cin >> edad;
					if(edad <= 0){
						cout << "ERROR, la edad es un valor positivo, intentar nuevamente." << endl;
					}
				}while(edad <= 0);
				
				
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
		
		system("pause");
	} while(opMenu<4);
	
	// Fin
	return 0;
}
