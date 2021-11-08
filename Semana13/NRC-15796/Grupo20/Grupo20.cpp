#include <iostream>
#include "LibreriaEGCC.h"
#include "LEcturaDatosV2.h"

using namespace std;

// Variable Globales
int cantClientesHombres, cantBebidasVendidas, cantDctosMujeres;


// Procesos
void mostrarMenu();
void registrarVenta();
void reporteVentas();
void salida();
int leerTipoProducto();
double obtenerPorcDcto1(int tipoProducto, int cantidad);
double obtenerPorcDcto2(char sexo, int edad);
string otenerTipoProducto( int tipoProducto );
void inicializaVariables();

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu;
	
	// Proceso Principal
	inicializaVariables();
	do{
		// El menú
		mostrarMenu();
		opMenu = leerOpcion(1,3);
		// Proceso de opMenu
		system("cls");
		switch(opMenu){
			case 1:
				registrarVenta();
				system("pause");
				break;
			case 2:
				reporteVentas();
				system("pause");
				break;
			case 3:
				salida();
				break;
		}
	} while(opMenu!=3);
	// Fin
	system("pause");
	return 0;
}

void inicializaVariables(){
	cantClientesHombres = 0;
	cantBebidasVendidas = 0;
	cantDctosMujeres = 0;
}

void registrarVenta(){
	// Variables
	int tipoProducto, edad, cantidad;
	double precio, importeBruto, importeNeto;
	double porcDcto1, porcDcto2, dcto1, dcto2;
	string descripcion;
	char sexo;
	// Cabecera
	cout << "EL PESCADOR" << endl;
	cout << "Registro de venta" << endl;
	cout << "===============================" << endl;	
	// Lectura
	tipoProducto = leerTipoProducto();
	descripcion = leeDatoString("Descripción? ");
	precio = leeDatoDoublePositivo("Precio? ");
	cantidad = leeDatoEnteroPositivo("Cantidad? ");
	sexo = leeSexoMF("Sexo del cliente (M/F)? ");
	edad = leeDatoEntero("Edad del cliente? ", 18, 150);
	// Proceso
	importeBruto = precio * cantidad;
	porcDcto1 = obtenerPorcDcto1(tipoProducto, cantidad);
	porcDcto2 = obtenerPorcDcto2(sexo, edad);
	dcto1 = importeBruto * porcDcto1;
	dcto2 = importeBruto * porcDcto2;
	importeNeto = importeBruto - dcto1 - dcto2;
	// Indicadores
	cantClientesHombres += (sexo=='M')?1:0;
	cantBebidasVendidas += (tipoProducto==4)?cantidad:0;
	cantDctosMujeres += (sexo=='F' && dcto2>0)?1:0;
	// Reporte
	cout << endl;
	cout << "Datos de la venta" << endl;
	cout << "===============================" << endl;	
	cout << "Categoría: " << otenerTipoProducto( tipoProducto ) << endl;	
	cout << "Descripción: " << descripcion << endl;	
	cout << "Precio: " << precio << endl;	
	cout << "Cantidad: " << cantidad << endl;	
	cout << "Importe: " << importeBruto << endl;	
	cout << "Descuento 1: " << dcto1 << endl;	
	cout << "Descuento 2: " << dcto2 << endl;	
	cout << "Importe neto: " << importeNeto << endl;	
}


void reporteVentas(){
	cout << "EL PESCADOR" << endl;
	cout << "Reporte de ventas" << endl;
	cout << "===============================" << endl;	
	cout << "La cantidad de clientes hombres: " << cantClientesHombres << endl;
	cout << "La cantidad de bebidas vendidas: " << cantBebidasVendidas << endl;
	cout << "La cantidad de descuentos realizados a clientes mujeres: " << cantDctosMujeres << endl;
}

void salida(){
	cout << "EL PESCADOR" << endl;
	cout << "===============================" << endl;
	cout << "Fin del programa" << endl;
	cout << "Que tenga buen día" << endl;
}

void mostrarMenu(){
	system("cls");
	cout << "EL PESCADOR" << endl;
	cout << "Menu de opciones" << endl;
	cout << "===============================" << endl;
	cout << "1.- Registrar venta" << endl;
	cout << "2.- Reporte de ventas" << endl;
	cout << "3.- Salir" << endl;
	cout << "===============================" << endl;		
}

int leerTipoProducto(){
	int tipo;
	cout << "Tipo de producto" << endl;
	cout << "===============================" << endl;
	cout << "1.- Ceviches" << endl;
	cout << "2.- Sudados" << endl;
	cout << "3.- Jaleas" << endl;
	cout << "4.- Bebidas" << endl;
	cout << "===============================" << endl;	
	tipo = leerOpcion(1,4);	
	return tipo;
}

double obtenerPorcDcto1(int tipoProducto, int cantidad){
	double porcentaje;
	porcentaje = 0.0;
	porcentaje = (tipoProducto==1 && cantidad>=6)?0.05:porcentaje;
	porcentaje = (tipoProducto==2 && cantidad>=6)?0.06:porcentaje;
	porcentaje = (tipoProducto==3 && cantidad>=6)?0.04:porcentaje;
	porcentaje = (tipoProducto==4 && cantidad>=6)?0.02:porcentaje;
	return porcentaje;
}

double obtenerPorcDcto2(char sexo, int edad){
	double porcentaje;
	porcentaje = 0.0;
	porcentaje = (sexo=='M' && edad>50)?0.04:porcentaje;
	porcentaje = (sexo=='F' && edad>50)?0.06:porcentaje;
	return porcentaje;
}

string otenerTipoProducto( int tipoProducto ){
	string dato;
	dato = "";
	dato = (tipoProducto==1)?"Ceviches":dato;
	dato = (tipoProducto==2)?"Sudado":dato;
	dato = (tipoProducto==3)?"Jaleas":dato;
	dato = (tipoProducto==4)?"Bebidas":dato;
	return dato;
}
