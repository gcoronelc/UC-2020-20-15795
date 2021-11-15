#include <iostream>
using namespace std;

int fnFibonacci(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	return fnFibonacci(n-1) + fnFibonacci(n-2);
}


int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Demostración
	cout << "SERIE: " << endl;;
	for(int i=0; i<=10; i++){
		cout << fnFibonacci(i) << "\t";
	}
	cout << endl << endl;
	// Fin
	system("pause");
	return 0;
}
