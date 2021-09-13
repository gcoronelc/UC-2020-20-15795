#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	for(int i=1; i<=10; i++){
		if(i==4) continue;
		cout << i << ".- Me gusta programar." << endl;
		if(i==7) break;
	}
	cout << "El bucle finalizo." << endl;
	
	// Fin
	system("pause");
	return 0;
}
