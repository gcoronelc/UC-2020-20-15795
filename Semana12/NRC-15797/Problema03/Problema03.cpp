#include <iostream>
#include "Utilitarios.h"
#include "LibreriaEGCC.h"
#include "LecturaDatos.h"
using namespace std;

// Variables globales
int cantVentas1, cantVentas2, cantVentas3, cantVentas4;
float acuDcto1, acuDcto2, acuDcto3, acuDcto4;

// Procesos principales
void procVenta();
void procListado();
void procReporte();
void procSalir();
void inicializarVariables();
void actualizarVariablesGlobales(int porcDcto, int cantidad, float dcto);

int main(){
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	// Proceso principal
	inicializarVariables();
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
	// Actualizar variables globales
	actualizarVariablesGlobales(porcDcto,cantidad,dcto);
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
	cout << endl;
	cout << "SISTEMA DE VENTAS" << endl;
	cout << "Reporte de venta" << endl;
	cout << "==============================" << endl;
	cout << "TIPO DE DESCUENTO    \tPORCENTAJE\tVENTAS\tIMPORTE" << endl;
	cout << "MAS DE 100           \t   4%     \t" << cantVentas1 << "\t" << acuDcto1 << endl;
	cout << "MAS DE 25 HASTA 100  \t   2%     \t" << cantVentas2 << "\t" << acuDcto2 << endl;
	cout << "MAS DE 10 HASTA 25   \t   1%     \t" << cantVentas3 << "\t" << acuDcto3 << endl;
	cout << "HASTA 10             \t   0%     \t" << cantVentas4 << "\t" << acuDcto4 << endl;
	cout << endl;	
}

// Proceso Salir
void procSalir(){
	cout << "Gracias por su visita." << endl;
	cout << "Que tenga un buen día." << endl;
	cout << "Vuelva pronto." << endl;
	cout << endl;
}

void inicializarVariables(){
	cantVentas1 = 0;
	cantVentas2 = 0;
	cantVentas3 = 0;
	cantVentas4 = 0;
	acuDcto1 = 0.0;
	acuDcto2 = 0.0;
	acuDcto3 = 0.0;
	acuDcto4 = 0.0;
}

void actualizarVariablesGlobales(int porcDcto, int cantidad, float dcto){
	// Cantidad de ventas
	cantVentas1 += (porcDcto==4)?cantidad:0;
	cantVentas2 += (porcDcto==2)?cantidad:0;
	cantVentas3 += (porcDcto==1)?cantidad:0;
	cantVentas4 += (porcDcto==0)?cantidad:0;
	// Acumulado de descuentos
	acuDcto1 += (porcDcto==4)?dcto:0;
	acuDcto2 += (porcDcto==2)?dcto:0;
	acuDcto3 += (porcDcto==1)?dcto:0;
	acuDcto4 += (porcDcto==0)?dcto:0;
}
