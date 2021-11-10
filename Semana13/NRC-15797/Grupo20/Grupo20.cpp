#include <iostream>
#include "LibreriaEGCC.h"
#include "LecturaDatos.h"
using namespace std;

// Variables
int cantidadMujeres, cantidadCocinas, cantidadDctosHombres;

// Funciones y procedimientos
void mostrarMenu();
void procesarVenta();
void reporteVentas();
void salir();
int leerCategoria();
string nombreCategoria(int categoria);
char leeSexoCliente();
double obtenerPorcDcto1(int categoria, int cantidad);
double obtenerPorcDcto2(char sexo, int edad);
void inicializarVariables();

// Función principal
int main(){
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	// Proceso principal
	inicializarVariables();
	do{
		// Menú
		mostrarMenu();
		opMenu = leerOpcion(1,3);
		// Proceso del menú
		system("cls");
		switch(opMenu){
			case 1:
				procesarVenta();
				system("pause");
				break;
			case 2:
				reporteVentas();
				system("pause");
				break;				
			case 3:
				salir();
				break;				
		}		
	} while(opMenu!=3);
	// Fin
	return 0;
}

void inicializarVariables(){
	cantidadMujeres = 0;
	cantidadCocinas = 0;
	cantidadDctosHombres = 0;
}

void procesarVenta(){
	// Variables
	int categoria, cantidad, edad;
	string descripcion;
	double precio, importe, totalPagar;
	double porcDcto1, porcDcto2, descuento1, descuento2;
	char sexo;
	// Cabecera
	cout << "TODO BARATO" << endl;
	cout << "Procesar venta" << endl;	
	cout << "==================================" << endl;	
	cout << "En construcción" << endl;
	// Lectura
	categoria = leerCategoria();
	cout << endl;
	cout << "CATEGORIA: " << nombreCategoria(categoria) << endl;
	descripcion = leeDatoString("Descripción: ");
	precio = leeDatoDoublePositivo("Precio: ");
	cantidad = leeDatoEnteroPositivo("Cantidad: ");
	sexo = leeSexoCliente();
	edad = leeDatoEnteroPositivo("Edad: ");
	// Proceso
	importe = precio * cantidad;
	porcDcto1 = obtenerPorcDcto1(categoria, cantidad);
	porcDcto2 = obtenerPorcDcto2(sexo, edad);
	descuento1 = importe * porcDcto1;
	descuento2 = importe * porcDcto2;
	totalPagar = importe - descuento1 - descuento2;
	// Actualizar indicadores
	cantidadMujeres += (sexo=='F')?1:0;
	cantidadCocinas += (categoria==4)?cantidad:0;
	cantidadDctosHombres += (sexo=='M' && porcDcto2>0)?1:0;	
	// Reporte de venta
	cout << endl;
	cout << "Datos de la venta" << endl;
	cout << "----------------------------------" << endl;
	cout << "CATEGORIA: " << nombreCategoria(categoria) << endl;
	cout << "Descripción: " << descripcion << endl;
	cout << "Precio: " << precio << endl;
	cout << "Cantidad: " << cantidad << endl;
	cout << "Importe: " << importe << endl;
	cout << "Descuento 1: " << descuento1 << endl;
	cout << "Descuento 2: " << descuento2 << endl;
	cout << "Total a pagar: " << totalPagar << endl;
	cout << endl;
}

void reporteVentas(){
	cout << "TODO BARATO" << endl;
	cout << "Reporte de ventas" << endl;	
	cout << "==================================" << endl;	
	cout << "La cantidad de clientes mujeres: " << cantidadMujeres << endl;
	cout << "La cantidad de cocinas vendidas: " << cantidadCocinas << endl;
	cout << "La cantidad de descuentos realizados a clientes hombres: " << cantidadDctosHombres << endl;
	cout << endl;
}

void salir(){
	cout << "TODO BARATO" << endl;
	cout << "Salir del sistema" << endl;	
	cout << "==================================" << endl;
	cout << "Fin del programa" << endl;
	cout << "Gracias por su visita" << endl;
	cout << "Que tenga un buen día" << endl;
}

void mostrarMenu(){
	system("cls");
	cout << "TODO BARATO" << endl;
	cout << "Menú de opciones" << endl;
	cout << "==================================" << endl;
	cout << "1.- Registrar venta" << endl;
	cout << "2.- Reporte de ventas" << endl;
	cout << "3.- Salir" << endl;
	cout << "==================================" << endl;
}

int leerCategoria(){
	// Variables
	int categoria;
	// Lectura
	cout << endl;
	cout << "CATEGORIA DEL PRODUCTO" << endl;
	cout << "------------------------------" << endl;
	cout << "1. Televisor" << endl;
	cout << "2. Lavadora" << endl;
	cout << "3. Refrigeradora" << endl;
	cout << "4. Cocina" << endl;
	cout << "------------------------------" << endl;
	categoria = leerOpcion(1,4);
	// Reporte
	return categoria;
}

string nombreCategoria(int categoria){
	string nombre;
	switch(categoria){
		case 1:
			nombre = "Televisor";
			break;
		case 2:
			nombre = "Lavadora";
			break;
		case 3:
			nombre = "Refrigeradora";
			break;
		case 4:
			nombre = "Cocina";
			break;										
	}
	return nombre;
}

char leeSexoCliente(){
	// Variable
	char sexo;
	// Proceso
	do{
		cout << "Sexo (M/F): "; cin >> sexo;
		sexo = toupper(sexo);
		if(sexo!='M' && sexo!='F'){
			cout << "Opción incorrecta." << endl;
		}
	}while(sexo!='M' && sexo!='F');
	// Reporte
	return sexo;
}


double obtenerPorcDcto1(int categoria, int cantidad){
	// Variables
	double porcentaje;
	// Proceso
	porcentaje = 0.0;
	porcentaje = (categoria==1 && cantidad>=5)?0.06:porcentaje;
	porcentaje = (categoria==2 && cantidad>=5)?0.09:porcentaje;
	porcentaje = (categoria==3 && cantidad>=5)?0.03:porcentaje;
	porcentaje = (categoria==4 && cantidad>=5)?0.05:porcentaje;
	// Reporte
	return porcentaje;
}

double obtenerPorcDcto2(char sexo, int edad){
	// Variables
	double porcentaje;
	// Proceso
	porcentaje = 0.0;
	porcentaje = (sexo=='M' && edad>50)?0.03:porcentaje;
	porcentaje = (sexo=='F' && edad>50)?0.05:porcentaje;
	// Reporte
	return porcentaje;	
}




