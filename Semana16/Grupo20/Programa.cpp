#include <iostream>
#include "LecturaDatosV3.h"
using namespace std;

// Variables globales
int contVentas;
int cantClientesHombres;

// Declaración de las funciones
void mostrarMenu();
void registrarVenta();
void reporteVentas();
void salir();
void inicializarVariablesGlobales();
int leerTipoProducto();
string obtenerCategoria(int tipoProducto);
float obtenerPorcDcto1(int tipoProducto, int cantidad);
float obtenerPorcDcto2(char sexo, int edad);

// Función principal
int main(){
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	// Inicializa variables
	inicializarVariablesGlobales();
	// Proceso principal
	do{
		// El menú
		mostrarMenu();
		opMenu =  leerOpcion(1,3);
		// Procesar opción
		system("cls");
		switch(opMenu){
			case 1:
				registrarVenta();
				break;
			case 2:
				reporteVentas();
				break;
			case 3:
				salir();
				break;
		}
		system("pause");
	} while(opMenu!=3);
	// Fin
	return 0;
}

void inicializarVariablesGlobales(){
	contVentas = 0;
	cantClientesHombres = 0;
}

void mostrarMenu(){
	system("cls");
	cout << "EL PESCADOR" << endl;
	cout << "MENU DE OPCIONES" << endl;
	cout << "============================" << endl;
	cout << "1.- Registro de ventas" << endl;
	cout << "2.- Reporte de ventas" << endl;
	cout << "3.- Salir" << endl;
	cout << "============================" << endl;	
}

void registrarVenta(){
	// Variables
	int tipoProducto, cantidad, edad;
	string categoria, descripcion;
	float precio, importe, totalPagar;
	float porcDcto1, descuento1, porcDcto2, descuento2;
	char sexo;
	// Contador de ventas
	contVentas++;
	// Cabecera
	cout << "EL PESCADOR" << endl;
	cout << "Registrar Venta" << endl;
	cout << "Venta Nro. " << contVentas << endl;
	cout << "====================================" << endl;
	// Lectura
	tipoProducto = leerTipoProducto();
	categoria = obtenerCategoria(tipoProducto);
	cout << "Categoria: " << categoria << endl;
	descripcion = leeDatoString("Descripción: ");
	precio = leeDatoFloatPositivo("Precio: ");
	cantidad = leeDatoEnteroPositivo("Cantidad: ");
	sexo = leeSexoMF("Sexo: ");
	edad = leeDatoEnteroPositivo("Edad: ");
	// Proceso
	importe = precio * cantidad;
	porcDcto1 = obtenerPorcDcto1(tipoProducto,cantidad);
	porcDcto2 = obtenerPorcDcto2(sexo,edad);
	descuento1 = importe * porcDcto1;
	descuento2 = importe * porcDcto2;
	totalPagar = importe - descuento1 - descuento2;
	// Indicadores
	cantClientesHombres += (sexo=='M')?1:0;
	// Reporte
	cout << endl;
	cout << "EL PESCADOR" << endl;
	cout << "Datos de su venta" << endl;
	cout << "Venta Nro. " << contVentas << endl;
	cout << "============================" << endl;
	cout << "Categoría: " << categoria << endl;	
	cout << "Descripción: " << descripcion << endl;	
	cout << "Precio: " << precio << endl;	
	cout << "Cantidad: " << cantidad << endl;	
	cout << "Importe: " << importe << endl;	
	cout << "Descuento 1: " << descuento1 << endl;	
	cout << "Descuento 2: " << descuento2 << endl;	
	cout << "Total a pagar: " << totalPagar << endl;	
}

void reporteVentas(){
	cout << "EL PESCADOR" << endl;
	cout << "Reporte de indicadores" << endl;
	cout << "Cantidad de venta: " << contVentas << endl;
	cout << "=====================================================" << endl;
	cout << "Cantidad de clientes hombres: " << cantClientesHombres << endl;
	cout << "=====================================================" << endl;
}

void salir(){
	cout << "EL PESCADOR" << endl;
	cout << "============================" << endl;
	cout << "Gracias por su visita." << endl;
	cout << "Regrese pronto." << endl;
	cout << endl;
}

int leerTipoProducto(){
	// Variables
	int op;
	// Cabecera
	cout << "Tipo de Producto" << endl;
	cout << "============================" << endl;
	cout << "1.- Ceviches" << endl;
	cout << "2.- Sudados" << endl;
	cout << "3.- Jales" << endl;
	cout << "4.- Bebidas" << endl;
	cout << "============================" << endl;	
	// Lectura
	op = leerOpcion(1,3);
	// Reporte
	return op;
}

string obtenerCategoria(int tipoProducto){
	string categoria = "";
	switch(tipoProducto){
		case 1: 
			categoria = "Ceviches";
			break;
		case 2: 
			categoria = "Sudados";
			break;
		case 3: 
			categoria = "Jales";
			break;
		case 4: 
			categoria = "Bebidas";
			break;									
	}
	return categoria;
}

float obtenerPorcDcto1(int tipoProducto, int cantidad){
	float porcDcto1 = 0.0;
	porcDcto1 = (cantidad>=6&&tipoProducto==1)?0.05:porcDcto1;
	porcDcto1 = (cantidad>=6&&tipoProducto==2)?0.06:porcDcto1;
	porcDcto1 = (cantidad>=6&&tipoProducto==3)?0.04:porcDcto1;
	porcDcto1 = (cantidad>=6&&tipoProducto==4)?0.02:porcDcto1;
	return porcDcto1;
}

float obtenerPorcDcto2(char sexo, int edad){
	float porcDcto2 = 0.0;
	porcDcto2 = (sexo=='M'&&edad>50)?0.04:porcDcto2;
	porcDcto2 = (sexo=='F'&&edad>50)?0.06:porcDcto2;
	return porcDcto2;
}


