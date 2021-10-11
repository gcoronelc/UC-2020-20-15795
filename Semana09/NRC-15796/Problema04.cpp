#include <iostream>
using namespace std;


void cabecera(){
	system("cls");
	cout << "PROBLEMA 04" << endl;
	cout << "==========================================================" << endl;
	cout << endl;
}

int menor(int n1, int n2, int n3){
	int elMenor;
	// Proceso: Inicio
	elMenor = n1; // Punto de partida
	elMenor = (elMenor>n2)?n2:elMenor;
	elMenor = (elMenor>n3)?n3:elMenor;
	// Proceso: Fin
	return elMenor;
}

int mayor(int n1, int n2, int n3){
	int elMayor;
	// Proceso: Inicio
	elMayor = n1; // Punto de partida
	elMayor = (n2>elMayor)?n2:elMayor;
	elMayor = (n3>elMayor)?n3:elMayor;
	// Proceso: Fin
	return elMayor;
}

double promedio (int n1, int n2, int n3){
	double elPromedio;
	// Proceso: Inicio
	elPromedio = (n1 + n2 + n3) / 3;	
	// Proceso: Fin
	return elPromedio;
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int dato1, dato2, dato3, numMayor, numMenor;
	double elPromedio;
	char rpta;
	
	do{
		
		cabecera();
		// Lectura de datos
		cout << "Múmero 1: "; cin >> dato1;
		cout << "Múmero 2: "; cin >> dato2;
		cout << "Múmero 3: "; cin >> dato3;
	
		// Proceso
		numMayor = mayor(dato1, dato2, dato3);
		numMenor = menor(dato1, dato2, dato3);
		elPromedio = promedio(dato1, dato2, dato3);
	
		// Reporte
		cout << endl;
		cout << "REPORTE" << endl;
		cout << "------------------------------------------------------------" << endl;
		cout << "El mayor: " << numMayor << endl;
		cout << "El menor: " << numMenor << endl;
		cout << "El Promedio: " << elPromedio << endl;
	
		// Control
		cout << endl;
		cout << "Continua (S/N): ";
		cin  >> rpta;
		rpta = toupper(rpta);
	
	} while(rpta!='N');
	
	
	// Fin
	system("pause");
	return 0;
}
