#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	int x = 3;
	switch(x){
		case 1:
			cout << "Hi!!" << endl;
			break;
		case 2:
			cout << "Bye!!" << endl;
			break;
		default:
			cout << "Heloo!!" << endl;
	}
	cout << "Eso es todo amigos!!!" << endl;
	cout << endl;
	
	
	// Fin
	system("pause");
	return 0;
}
