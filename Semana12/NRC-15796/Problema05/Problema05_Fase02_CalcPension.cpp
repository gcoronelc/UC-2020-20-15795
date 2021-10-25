/*
Fase 1: Estructura de la solución
Fase 2: Calculo de pensión
*/
#include <iostream>
#include "LibreriaLectura01.h"
#include "LecturaDatosV2.h"
using namespace std;

void procMostrarMenu();
void calcPension();
void listado();
void resumen();
char leeCategoria();
string obtenerBeca(char categoria, int promedio);
double obtenerPorcDcto(char categoria, int promedio);

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	
	// Bucle general del menú
	do{
		procMostrarMenu();
		opMenu = leerOpcion(1,4);
		
		switch(opMenu){
			case 1:
				calcPension();
				break;
			case 2:
				listado();
				break;
			case 3:
				resumen();
				break;
		}
		
		if(opMenu!=4){
			system("pause");
		}
	}while(opMenu!=4);
	
	// Fin
	return 0;
}

void procMostrarMenu(){
	system("cls");
	cout << "COLEGIO SAN IGNACIO" << endl;
	cout << "Menú de Opciones" << endl;
	cout << "===============================" << endl;
	cout << "1.- Calculo de pensión" << endl;
	cout << "2.- Listado de estudiantes" << endl;
	cout << "3.- Resumen" << endl;
	cout << "4.- Salir" << endl;
}

void calcPension(){
	// Variables
	string nombre, beca;
	char categoria;
	int promedio;
	double pension, nuevaPension;
	double porcDcto, descuento;
	// Lectura
	system("cls");	
	cout << "CALCULAR NUEVA PENSIÓN" << endl;
	cout << "==================================" << endl;
	nombre = leeDatoString("Ingrese nombre: ");
	categoria = leeCategoria();
	promedio = leeDatoEntero("Ingrese promedio [0,20]: ",0,20);
	pension = leeDatoDouble("Ingrese pensión: ",100.0, 5000.0);
	// Proceso
	beca = obtenerBeca(categoria, promedio);
	porcDcto = obtenerPorcDcto(categoria, promedio);
	descuento = pension * porcDcto;
	nuevaPension = pension - descuento;
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "==================================" << endl;	
	cout << "Beca: " << beca << endl;
	cout << "Porc. Dcto.: " << porcDcto*100 << "%" << endl;
	cout << "Descuento: " << descuento << endl;
	cout << "Nueva pensión: " << nuevaPension << endl;
}

void listado(){
		cout << endl;
		cout << "En construcción" << endl;
		cout << endl;
}

void resumen(){
		cout << endl;
		cout << "En construcción" << endl;
		cout << endl;
}

char leeCategoria(){
	char opcion;
	do{
		cout << "Ingrese categoría (ABC): "; cin >> opcion;
		opcion = toupper(opcion);
		if(opcion!='A' && opcion!='B' && opcion!='C'){
			cout << "Opcion incorrecta." << endl;
		}
	} while(opcion!='A' && opcion!='B' && opcion!='C');
	return opcion;	
}

string obtenerBeca(char categoria, int promedio){
	string beca = "";
	// CATEGORIA A
	beca = (categoria=='A' && promedio>=0 && promedio<=10)?"A++":beca;
	beca = (categoria=='A' && promedio>=11 && promedio<=16)?"A+":beca;
	beca = (categoria=='A' && promedio>=17 && promedio<=20)?"A-":beca;
	// CATEGORIA A
	beca = (categoria=='B' && promedio>=0 && promedio<=10)?"B++":beca;
	beca = (categoria=='B' && promedio>=11 && promedio<=16)?"B+":beca;
	beca = (categoria=='B' && promedio>=17 && promedio<=20)?"B-":beca;
	// CATEGORIA C
	beca = (categoria=='C' && promedio>=0 && promedio<=10)?"C++":beca;
	beca = (categoria=='C' && promedio>=11 && promedio<=16)?"C+":beca;
	beca = (categoria=='C' && promedio>=17 && promedio<=20)?"C-":beca;		
	return beca;
}

double obtenerPorcDcto(char categoria, int promedio){
	double porcDcto = 0.0;
	// CATEGORIA A
	porcDcto = (categoria=='A' && promedio>=0 && promedio<=10)?0.05:porcDcto;
	porcDcto = (categoria=='A' && promedio>=11 && promedio<=16)?0.07:porcDcto;
	porcDcto = (categoria=='A' && promedio>=17 && promedio<=20)?0.10:porcDcto;
	// CATEGORIA A
	porcDcto = (categoria=='B' && promedio>=0 && promedio<=10)?0.03:porcDcto;
	porcDcto = (categoria=='B' && promedio>=11 && promedio<=16)?0.05:porcDcto;
	porcDcto = (categoria=='B' && promedio>=17 && promedio<=20)?0.07:porcDcto;
	// CATEGORIA C
	porcDcto = (categoria=='C' && promedio>=0 && promedio<=10)?0.01:porcDcto;
	porcDcto = (categoria=='C' && promedio>=11 && promedio<=16)?0.03:porcDcto;
	porcDcto = (categoria=='C' && promedio>=17 && promedio<=20)?0.05:porcDcto;		
	return porcDcto;	
}
