#include <iostream>
#include "Utilitarios.h"
#include "LibreriaEGCC.h"
#include "LecturaDatos.h"
using namespace std;


// Procesos principales
void procVenta();
void procListado();
void procReporte();
void procSalir();

int main(){
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	// Proceso principal
	do{
		// Menu
		mostrarMenu();
		opMenu = leerOpcion(1,4);
		// Procesar opción del menú
		system("cls");
		switch(opMenu){
			case 1:
				procVenta();
				break;
			case 2:
				procListado();
				break;
			case 3:
				procReporte();
				break;
			case 4:
				procSalir();
				break;				
		}
		// Pausa
		if(opMenu!=4){
			system("pause");
		}
	} while(opMenu!=4);
	// Fin
	system("pause");
	return 0;
}

// Proceso Venta
void procVenta(){
	// Variables
	string nombre;
	int cantidad;
	float precio, importe, porcDcto, dcto, neto;
	// Lectura
	system("cls");
	cout << "SISTEMA DE VENTAS" << endl;
	cout << "Lectura de datos" << endl;
	cout << "==============================" << endl;
	nombre = leeDatoString("Nombre del cliente: ");
	cantidad = leeDatoEnteroPositivo("Ingrese cantidad: ");
	precio = leeDatoFloatPositivo("Ingrese precio: ");
	// Proceso
	importe = cantidad * precio;
	porcDcto = obtenerPorcDcto(cantidad);
	dcto = importe * porcDcto / 100;
	neto = importe - dcto;
	// Reporte
	cout << endl;
	cout << "SISTEMA DE VENTAS" << endl;
	cout << "Reporte de venta" << endl;
	cout << "==============================" << endl;
	cout << "Importe: " << importe << endl;
	cout << "Porc. de Dcto.: " << porcDcto << "%" << endl;
	cout << "Descuento: " << dcto << endl;
	cout << "Neto a pagar: " << neto << endl;
	cout << endl;
}

// Proceso Listado
void procListado(){
	cout << "Listado en construcción" << endl;
}

// Proceso Reporte
void procReporte(){
	cout << "Reporte en construcción" << endl;
}

// Proceso Salir
void procSalir(){
	cout << "Gracias por su visita." << endl;
	cout << "Que tenga un buen día." << endl;
	cout << "Vuelva pronto." << endl;
	cout << endl;
}


