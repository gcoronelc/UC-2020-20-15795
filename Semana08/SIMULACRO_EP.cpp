#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu;
	int tipoPlato, cantidad, edad;
	char sexo;
	double porcDcto1, porcDcto2, precio;
	string unidad;
	double importeVenta, descuento1, descuento2, importeNeto;
	
	// Control del menú de opciones
	do{
		// EL MENU
		system("cls");
		cout << "LA CASA DEL INKA" << endl;
		cout << endl;
		cout << "=================================================" << endl;
		cout << "SISTEMA DE VENTAS" << endl;
		cout << "Menú de opciones" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Procesar venta" << endl;
		cout << "2.- Listado de ventas" << endl;
		cout << "3.- Reporte de indicadores" << endl;
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
			
			// Opción 1: Procesar venta
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
					cout << "Precio: "; cin >> precio;
					if(precio <= 0){
						cout << "ERROR, El precio es un valor positivo, intentar nuevamente." << endl;
					}
				}while(precio <= 0);
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
				// Porcentaje de descuento 1
				switch(tipoPlato){
					case 1:
						unidad = "Plato(s)";
						porcDcto1 = 0.0; // Valor inicial
						porcDcto1 = (cantidad>=5 && cantidad<=10)?0.05:porcDcto1;
						porcDcto1 = (cantidad>10)?0.08:porcDcto1;
					case 2:
						unidad = "Plato(s)";
						porcDcto1 = 0.0; // Valor inicial
						porcDcto1 = (cantidad>=5 && cantidad<=10)?0.06:porcDcto1;
						porcDcto1 = (cantidad>10)?0.10:porcDcto1;
					case 3:
						unidad = "Vino(s))";
						porcDcto1 = 0.0; // Valor inicial
						porcDcto1 = (cantidad>=5 && cantidad<=10)?0.08:porcDcto1;
						porcDcto1 = (cantidad>10)?0.14:porcDcto1;							
				}
				
				// Porcentaje de descuento 2
				porcDcto2 = 0.0; // Valor inicial
				porcDcto2 = (sexo=='M' && edad >=30 && edad<=40)?0.06:porcDcto2;
				porcDcto2 = (sexo=='M' && edad >40)?0.08:porcDcto2;
				porcDcto2 = (sexo=='F' && edad >=30 && edad<=40)?0.08:porcDcto2;
				porcDcto2 = (sexo=='F' && edad >40)?0.10:porcDcto2;
				// Calculos
				importeVenta = precio * cantidad;
				descuento1 = importeVenta * porcDcto1;
				descuento2 = importeVenta*porcDcto2;
				importeNeto = importeVenta - descuento1 - descuento2;
				cout << endl;
				cout << "REPORTE" << endl;
				cout << "=================================================" << endl;				
				cout << "Importe de venta: " << importeVenta << endl;
				cout << "Descuento 1: " << descuento1 << endl;
				cout << "Descuento 2: " << descuento2 << endl;
				cout << "Importe neto: " << importeNeto << endl;
				
				break;
				
				
				
			// Opción 2: bbbbb
			case 2:
				cout << "Proceso opción 2" << endl;
				break;	
				
			// Opción 3: cccccccc
			case 3:
				cout << "Proceso opción 3" << endl;
				break;					
			// Opción 4: dddddddd
			case 4:
				cout << "Fin del programa." << endl;
				break;
		}
		
		system("pause");
	} while(opMenu<4);
	
	// Fin
	return 0;
}
