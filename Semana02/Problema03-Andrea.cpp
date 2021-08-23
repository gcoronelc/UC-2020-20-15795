#include<iostream>
using namespace std;

int main( )
{
	
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	double sueldobase, importe, Comision, SueldoNeto; 
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "==========================================================" << endl;
	cout << "Sueldo base: "; cin >> sueldobase;
	cout << "Importe de las ventas realizadas: "; cin>>importe;
	
	// Proceso
	Comision = 0.08 * importe;
	SueldoNeto = sueldobase + Comision;	
	
	// Reporte
	cout<<"------------- REPORTE: --------------" <<"\n\n";
	cout<<"El Sueldo base es: " << sueldobase << "\n";
	cout<<"La comision es: " << Comision << "\n";
	cout<<"El sueldo Neto es: " << SueldoNeto << "\n";
	cout << endl;
	
	return 0;
}
	
