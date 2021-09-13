#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	int a=15, b=20;
	
	while(a!=--b){
		cout << "Me gusta programar." << endl;
		//b--;
	}
	cout << "El bucle finalizo." << endl;
	
	// Fin
	system("pause");
	return 0;
}
