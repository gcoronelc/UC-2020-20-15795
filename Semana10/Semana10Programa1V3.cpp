#include <iostream>
using namespace std;

float leeDatoFloatPositivo(string etiqueta, string mensaje)
{
	float dato;
	// Proceso: Inicio
	do{
		cout << etiqueta; cin >> dato;
		if (dato<=0){
			cout << mensaje << endl;
		}
	} while (dato<=0);
	// Proceso: Fin
	return dato;	
}

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

void procHerencia()
{
	// Variables
	float herencia, herenciaHijo, herenciaMayor;
	int hijos;
	// Lectura de datos
	herencia = leeDatoFloatPositivo("Ingresar importe de herencia: ","ERROR. La herencia debe ser mayor a 0.");
	hijos = leeDatoEnteroPositivo("Ingresar cantidad de hijos: ","ERROR. La cantidad debe ser mayor a 0.");
	// Proceso y Reporte
	if (hijos<4)
	{	
		herenciaHijo = herencia / hijos;
		cout << "La herencia a cada hijo es: " << herenciaHijo << endl;

	}
	else
	{
		herenciaMayor = herencia / 2;
		herenciaHijo = herenciaMayor / (hijos - 1);
		cout << "\nLa herencia del hermano mayor es: " << herenciaMayor;
		cout << "\nLa herencia de los demas hijos es: " << herenciaHijo;
	}
}

int main()
{
	procHerencia();
	return 0;
}




