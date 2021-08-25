#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int xP1, yP1, xP2, yP2;
	double distancia;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "============================================" << endl;
	cout << "Punto 1 - X: "; cin >> xP1;
	cout << "Punto 1 - Y: "; cin >> yP1;
	cout << "Punto 2 - X: "; cin >> xP2;
	cout << "Punto 2 - Y: "; cin >> yP2;	
	
	// Proceso
	distancia = pow((xP2 - xP1),2) + pow((yP2 - yP1),2);
	distancia = sqrt( distancia );
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "============================================" << endl;	
	cout << "Distancia: " << distancia << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
