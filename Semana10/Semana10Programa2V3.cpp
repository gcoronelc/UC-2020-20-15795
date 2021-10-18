#include<iostream>
using namespace std;

int leeDatoEntero(string etiqueta)
{
	int dato;
	// Proceso: Inicio
	cout << etiqueta;
	cin  >> dato;
	// Proceso: Fin
	return dato;	
}

void procIntercambio(int &num1, int &num2){
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

void procPrincipal()
{
	// Variables
	int num1, num2;
	// Lectura
	num1 = leeDatoEntero("Ingrese valor de num1: ");
	num2 = leeDatoEntero("Ingrese valor de num2: ");
	// Proceso
	procIntercambio(num1,num2);
	// Reporte
	cout<<"\n";
	cout<<"El nuevo valor num1 es: " << num1 <<endl;
	cout<<"El nuevo valor num2 es: " << num2 <<endl;
	
}

int main()
{
	procPrincipal();	
	return 0;
}



