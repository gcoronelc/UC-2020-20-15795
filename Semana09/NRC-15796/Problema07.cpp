#include <iostream>
using namespace std;

float promedioFinal (int C1, int EP, int C2, int EF){
	float promedio;
	// Proceso: Inicio
	promedio = C1*0.20 + EP*0.25 + C2*0.20 + EF*0.35;
	// Proceso: Fin
	return promedio;
}

string condicion(float nota){
	string cond;
	// Proceso: Inicio
	cond = (nota>=11)?"Aprobado":"Desaprobado";
	// Proceso: Fin
	return cond;
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int notaC1, notaEP, notaC2, notaEF;
	float notaPromedio;
	string condEstudiante;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "======================================" << endl;
	cout << "Consolidado 1: "; cin >> notaC1;
	cout << "Examen Parcial: "; cin >> notaEP;
	cout << "Consolidado 2: "; cin >> notaC2;
	cout << "Examen Final: "; cin >> notaEF;
	
	// Proceso
	notaPromedio = promedioFinal(notaC1, notaEF, notaC2, notaEF);
	condEstudiante = condicion(notaPromedio);
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "======================================" << endl;
	cout << "Promedio Final: " << notaPromedio << endl;
	cout << "Condición del estudiante: " << condEstudiante << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
