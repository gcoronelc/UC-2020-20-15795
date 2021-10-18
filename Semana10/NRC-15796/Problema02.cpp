#include <iostream>
using namespace std;

void saludo (string nombre);
void despedida (string nombre);
int leeDatoEnteroPositivo(string etiqueta, string mensaje);
double areaTriangulo (int a, int b, int c);

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	string nombre;
	int a, b, c;
	double area;
	// Presentación
	cout << "Ingresa tu nombre: "; cin >> nombre;
	saludo(nombre);
	// Lectura de datos
	cout << endl;
	cout << "LADOS DEL TRIANGULO" << endl;
	cout << "=======================================" << endl;
	a = leeDatoEnteroPositivo("Lado A: ","ERROR, debe ser positivo.");
	b = leeDatoEnteroPositivo("Lado B: ","ERROR, debe ser positivo.");
	c = leeDatoEnteroPositivo("Lado C: ","ERROR, debe ser positivo.");
	// Proceso
	area = areaTriangulo(a,b,c);
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "=======================================" << endl;
	cout << "Area del triangulo es: " << area << endl;
	cout << endl;	
	// Despedida
	despedida(nombre);
	// Fin
	system("pause");
	return 0;
}

/*
Calcula el área del triangulo
Se debe aplicar la formula del semiperimetro.
*/
double areaTriangulo (int a, int b, int c){
	double area;
	// Proceso: Inicio
	area = 0;
	// Proceso: Fin
	return area;
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

void saludo (string nombre){
	cout << endl;
	cout << "Hola " << nombre << endl;
	cout << "Bienvenido a mi programa" << endl;
}

void despedida (string nombre){
	cout << endl;
	cout << "Nos vemos " << nombre << " en otra ocación." << endl;
	cout << "Adios." << endl;
	cout << endl;
}


