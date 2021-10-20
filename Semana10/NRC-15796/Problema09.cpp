#include <iostream>
using namespace std;

// Variables globales
int cantTrabajadores10, cantTrabajadores15, cantTrabajadores20, cantTrabajadores25;
double totalPagar;

// Funciones y Procedimientos
double porcentajeAumento(double sueldo);
int leeDatoEnteroPositivo(string etiqueta, string mensaje);
void pagoTrabajadores(int cantTrabajadores);
void reporteFinal();
void inicializaVariables();
void procActualizaContadorsAcumuladores(double porcAumento,double nuevoSueldo);

int main(){
	// Variables
	int cantTrabajadores;
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Leer la cantidad de trabajadores
	cantTrabajadores = leeDatoEnteroPositivo("Cantidad de trabajadores? ","ERROR, intentelo nuevamente.");
	// Proceso
	inicializaVariables();
	pagoTrabajadores(cantTrabajadores);
	// Reporte
	reporteFinal();
	// Fin
	system("pause");
	return 0;
}

/*
Proceso principal
*/
void pagoTrabajadores(int cantTrabajadores){
	// Variables
	string nombre;
	double sueldo, porcAumento, aumento, nuevoSueldo;
	// Proceso General
	for(int i=1; i<=cantTrabajadores; i++){
		// Lectura de datos
		cout << endl;
		cout << "Trabajador Nro. " << i << endl;
		cout << "Nombre: "; cin >> nombre;
		cout << "Sueldo: "; cin >> sueldo;
		// Proceso
		porcAumento = porcentajeAumento(sueldo);
		aumento = sueldo * porcAumento;
		nuevoSueldo = sueldo + aumento;
		// Actualiza contadores y acumuladores
		procActualizaContadorsAcumuladores(porcAumento,nuevoSueldo);
		// Reporte
		cout << endl;
		cout << "Sueldo: " << sueldo << endl;
		cout << "Porc. Aumento: " << porcAumento*100 << "%" << endl;
		cout << "Aumento: " << aumento << endl;
		cout << "Nuevo sueldo: " << nuevoSueldo << endl;
	}
}

/*
Reporte final
*/
void reporteFinal(){
	cout << endl;
	cout << "REPORTE FINAL" << endl;
	cout << "Cantidad de trabajadores con 10% aumento: " << cantTrabajadores10 << endl;
	cout << "Cantidad de trabajadores con 15% aumento: " << cantTrabajadores15 << endl;
	cout << "Cantidad de trabajadores con 20% aumento: " << cantTrabajadores20 << endl;
	cout << "Cantidad de trabajadores con 25% aumento: " << cantTrabajadores25 << endl;
	cout << "Total a pagar por la empresa: " << totalPagar << endl;
	cout << endl;
}

/*
Procedimiento que inicializa los contadores y acumuladores
*/
void inicializaVariables(){
	cantTrabajadores10 = 0;
	cantTrabajadores15 = 0;
	cantTrabajadores20 = 0;
	cantTrabajadores25 = 0;
	totalPagar = 0.0;
}

/*
Actualiza los contadores y acumuladores
*/
void procActualizaContadorsAcumuladores(double porcAumento,double nuevoSueldo){
	cantTrabajadores10 += (porcAumento==0.10)?1:0;
	cantTrabajadores15 += (porcAumento==0.15)?1:0;
	cantTrabajadores20 += (porcAumento==0.20)?1:0;
	cantTrabajadores25 += (porcAumento==0.25)?1:0;
	totalPagar += nuevoSueldo;
}

/*
Función que permite leer un entero mayor que cero.
*/
int leeDatoEnteroPositivo(string etiqueta, string mensaje)
{
	int dato;
	// Proceso: Inicio
	do{
		cout << etiqueta; cin >> dato;
		if (dato<= 0){
			cout << mensaje << endl;
		}
	} while (dato<= 0);
	// Proceso: Fin
	return dato;	
}


/*
Función que retorna el porcentaje según el sueldo.
*/
double porcentajeAumento(double sueldo){
	double porcentaje;
	// Proceso: Inicio
	porcentaje = 0;
	porcentaje = (sueldo>5000)?0.10:porcentaje;
	porcentaje = (sueldo>3500 && sueldo<=5000)?0.15:porcentaje;
	porcentaje = (sueldo>2000 && sueldo<=3500)?0.20:porcentaje;
	porcentaje = (sueldo>0 && sueldo<=2000)?0.25:porcentaje;
	// Proceso: Fin
	return porcentaje;
}


