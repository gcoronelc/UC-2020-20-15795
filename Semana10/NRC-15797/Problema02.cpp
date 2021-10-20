#include <iostream>
using namespace std;

void saludo (string nombre);
void despedida (string nombre);
int leeDatoEnteroPositivo(string etiqueta, string mensaje);
double areaTriangulo (int a, int b, int c);
int verificarExistencia(int a, int b, int c);

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	string nombre, mensaje;
	int a, b, c, existe;
	double area;
	// Cabecera
	cout << "PROGRAMA: CALCULAR AREA DE UN TRIANGULO" << endl;
	cout << "============================================" << endl;
	cout << endl;
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
	mensaje = "El triángulo NO existe.";
	existe = verificarExistencia(a,b,c);
	if( existe==1 ){
		area = areaTriangulo(a,b,c);
		mensaje = "El triángulo SI existe.";
	}
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "=======================================" << endl;
	cout << "Mensaje: " << mensaje << endl;
	if(existe==1){
		cout << "Area del triangulo es: " << area << endl;
	}
	cout << endl;
	// Despedida
	despedida(nombre);
	// Fin
	system("pause");
	return 0;
}

/*
Verifica la existencia de un triángulo.
Retorna:
   1 => Si el triángulo existe,
   0 => Si el triángulo no existe.
*/
int verificarExistencia(int a, int b, int c){
	int existe;
	// Proceso: Inicio
	existe = -1;
	// .....
	// Proceso: Fin
	return existe;
}

/*
Calcula el área del triangulo
Se debe aplicar la formula del semiperimetro.
*/
double areaTriangulo (int a, int b, int c){
	double area;
	// Proceso: Inicio
	area = 0;
	// ...
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


