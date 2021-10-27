#include<iostream>
#include<string>
using namespace std;

int leeDatoEntero()
{
	int dato;
	cin>> dato;
	return dato;
}

int leeDatoEnteroPositivo(string etiqueta)
{
	int dato;
	do{
		cout << etiqueta; cin >> dato;
		if(dato<=0){
			cout << "ERROR, ingrese de nuevo." << endl;
		}
	}while(dato<=0);
	return dato;
}


float leeDatoFloat()
{
	float dato;
	cin>> dato;
	return dato;
}

float leeDatoFloatPositivo(string etiqueta)
{
	float dato;
	do{
		cout << etiqueta; cin >> dato;
		if(dato<=0){
			cout << "ERROR, ingrese de nuevo." << endl;
		}
	}while(dato<=0);
	return dato;
}


double leedatod()
{
	double dato;
	cin>> dato;
	return dato;
}

char leedatoc()
{
	char dato;
	cin>> dato;
	return dato;
}

string leeDatoString()
{
	string dato;
	cin>> dato;
	return dato;
}

string leeDatoString(string etiqueta)
{
	string dato;
	cout << etiqueta;
	cin >> dato;
	return dato;
}


