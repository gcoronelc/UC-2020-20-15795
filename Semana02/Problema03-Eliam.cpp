#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int Sueldo, Ventas;
	float Comision, SueldoN ;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "===========================================" << endl;
	cout << "Sueldo: "; cin >> Sueldo;
	cout << "Ventas: "; cin >> Ventas;
	
	// Proceso
	Comision = Ventas * 0.08;
	SueldoN = Sueldo + Comision;	
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "===========================================" << endl;	
	cout << "La Comision es: " << Comision << endl;
	cout << "El SueldoN es: " << SueldoN << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
	
