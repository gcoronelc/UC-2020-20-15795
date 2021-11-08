#include<iostream>
#include<string>
using namespace std;

int leeDatoEntero()
{
	int dato;
	cin>> dato;
	return dato;
}

int leeDatoEntero(string etiqueta, int valorMinimo, int valorMaximo)
{
	int dato;
	do{
		cout << etiqueta; cin >> dato;
		if(dato<valorMinimo || dato>valorMaximo){
			cout << "Valor incorrecto." << endl;
		}
	} while(dato<valorMinimo || dato>valorMaximo);
	return dato;
}

int leeDatoEnteroPositivo(string etiqueta)
{
	int dato;
	do{
		cout << etiqueta; cin >> dato;
		if(dato<1){
			cout << "Valor incorrecto." << endl;
		}
	} while(dato<1);
	return dato;
}

float leedatof()
{
	float dato;
	cin>> dato;
	return dato;
}

double leeDatoDouble()
{
	double dato;
	cin>> dato;
	return dato;
}

double leeDatoDouble(string etiqueta, double valorMinimo, double valorMaximo)
{
	double dato;
	do{
		cout << etiqueta; cin >> dato;
		if(dato<valorMinimo || dato>valorMaximo){
			cout << "Valor incorrecto." << endl;
		}
	} while(dato<valorMinimo || dato>valorMaximo);
	return dato;
}

double leeDatoDoublePositivo(string etiqueta)
{
	double dato;
	do{
		cout << etiqueta; cin >> dato;
		if(dato<=0){
			cout << "Valor incorrecto, intentalo nuevamente." << endl;
		}
	} while(dato<=0);
	return dato;
}

char leeDatoChar()
{
	char dato;
	cin>> dato;
	return dato;
}

char leeSexoMF(string etiqueta)
{
	char dato;
	do{
		cout << etiqueta; cin >> dato;
		dato = toupper(dato);
		if(dato!='M' && dato!='F'){
			cout << "Valor incorrecto, intentalo nuevamente." << endl;
		}
	} while(dato!='M' && dato!='F');
	return dato;
}


string leeDatoString()
{
	string dato;
	cin >> dato;
	return dato;
}

string leeDatoString(string etiqueta)
{
	string dato;
	cout << etiqueta; cin >> dato;
	return dato;
}
