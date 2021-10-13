#include <iostream>
using namespace std;

int main(){
	
	int n1 = 40, n2 = 51;
	
	double r1 = (n1 + n2) / 3;        // Operación de números enteros
	double r2 = (n1 + n2) * 1.0 / 3;  // Operación de números de punto flotante
	 
	cout << "R1: " << r1 << endl;
	cout << "R2: " << r2 << endl;
	
	// Fin
	system("pause");
	return 0;
}	
