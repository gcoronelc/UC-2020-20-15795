/*
Problema 13
---------------------------------------------------
Elaborar un programa para ingresar el valor de la 
variable X y de la variable Y, validando con 
DO-WHILE (que sean mayor igual a cero), y permita 
calcular:

		z = (x + y^3) ^ (1/2)
		
Análisis
---------------------------------------------------
Se debe agregar al programa la librería math para 
poder utilizar las funciones matemáticas.

- pow: Para elevar un número a una potencia.
- sqrt: Para obtener la raíz cuadrada.

Para calcular la potencia se utilizara un for.

DATOS DE PRUEBA
---------------------------------------------------

    x         y          z
 -------------------------------
    3         1          2
    1         2          3
 -------------------------------		   

*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	double x, y, z, potencia_y;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "=========================" << endl;
	// Lectura de "x"
	do{
		cout << "Ingrese valor para \"x\": "; cin >> x;
		if(x <= 0.0){
			cout << "ERROR: Debe ser mayor que cero, intentelo nuevamente." << endl;
		}
	} while(x <= 0.0);
	// Lectura de "y"
	do{
		cout << "Ingrese valor para \"y\": "; cin >> y;
		if(y <= 0.0){
			cout << "ERROR: Debe ser mayor que cero, intentelo nuevamente." << endl;
		}
	} while(y <= 0.0);
	
	// Proceso
	potencia_y = 1;
	for(int i=1; i<=3; i++){
		potencia_y *= y;
	}
	z = sqrt(x + potencia_y);
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "=========================" << endl;
	cout << "El valor de \"z\" es: " << z << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
