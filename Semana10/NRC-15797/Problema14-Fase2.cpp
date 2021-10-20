/*
Fase 2: Implementar el programa
*/

#include <iostream>
using namespace std;

void procesarVenta();
char leeDatoSiNo(string etiqueta);
void reporteFinal();

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	char rpta;
	
	// Cabecera
	cout << "SISTEMA DE FACTURACIÓN" << endl;
	cout << endl;
	
	// Proceso general
	do{
		// Proceso de la venta
		procesarVenta();
		// Leer si existe otra factura
		rpta = leeDatoSiNo("¿Existe otra factura(S/N)? ");
	}while(rpta=='S');
	
	// Reporte final
	reporteFinal();
	
	// Fin
	system("pause");
	return 0;
}

void procesarVenta(){
	cout << endl;	
	cout << "Procesar venta." << endl;
	cout << "En construcción." << endl;
}

void reporteFinal(){
	cout << endl;
	cout << "Reporte final" << endl;
	cout << "En construcción." << endl;
}

char leeDatoSiNo(string etiqueta)
{
	char dato;
	// Proceso: Inicio
	cout << endl;
	do{
		cout << etiqueta;
		cin  >> dato;
		dato = toupper(dato);
		if(dato != 'S' && dato != 'N')
		{
			cout << "Respuesta incorrecta, intentelo otra vez." << endl;
		}				
	}while(dato != 'S' && dato != 'N');
	// Proceso: Fin
	return dato;	
}

