#include <iostream>
using namespace std;

void mostrarCabecera(){
	cout << endl;
	cout << "================================================" << endl;
	cout << "PROGRAMA EJEMPLO" << endl;
	cout << "================================================" << endl;
	cout << endl << endl;
}

int fnSumar(int n1, int n2){
	return (n1+n2);
}

int fnSumar(int n1, int n2, int n3){
	return (n1+n2+n3);
}

int fnSumar(int n1, int n2, int n3, int n4){
	return (n1+n2+n3+n4);
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	mostrarCabecera();
	
	cout << "7 + 8 = " << fnSumar(7,8) << endl;
	cout << "7 + 8 + 9 = " << fnSumar(7,8,9) << endl;
	cout << "7 + 8 + 9 + 10 = " << fnSumar(7,8,9,10) << endl;
	
	
	// Fin
	system("pause");
	return 0;
}
