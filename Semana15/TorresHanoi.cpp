#include <iostream>
using namespace std;

void hanoi(int num,char A,char C,char B)
{
	if(num==1)
	{
	   cout << "Mueva el disco " << num << " desde " << A << " hasta  " << C << endl;      
	}
	else
	{
	  hanoi(num-1,A,B,C);
	  cout << "Mueva el disco " <<num << " desde " << A << " hasta  " << C << endl;
	  hanoi(num-1,B,C,A);
	}
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int n;
	// Lectura de datos
	cout << "Cantidad de discos: ";
	cin >> n;
	// Proceso
	cout << endl;
	cout << "MOVIMIENTOS A REALIZAR" << endl;
	hanoi(n,'A','C', 'B');
	// Fin
	system("pause");
	return 0;
}
