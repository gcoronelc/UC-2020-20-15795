#include <iostream>
using namespace std;

double importeTotal (int bj, int pf, int r, int c){
	double importe;
	// Proceso: Inicio
	importe = bj*3.50 + pf*2.20 + r*3.00 + c*4.50;
	// Proceso: Fin
	return importe;
}

double impuesto (double impuesto){
	double resultado;
	// Proceso: Inicio
	resultado = impuesto * 0.19;
	// Proceso: Fin
	return resultado;
}

double cuentaTotal (double importe, double impuesto){
	double resultado;
	// Proceso: Inicio
	resultado = importe + impuesto;
	// Proceso: Fin
	return resultado;
}


int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Datos
	int bj=10, pf=15, r=0, c = 5;
	
	// Proceso
	double valorImporte = importeTotal(bj,pf,r,c);
	double valorImpuesto = impuesto(valorImporte);
	double valorTotal = cuentaTotal(valorImporte, valorImpuesto);
	
	// Reporte
	cout << "Importe: " << valorImporte << endl;
	cout << "Impuesto: " << valorImpuesto << endl;
	cout << "Total: " << valorTotal << endl;
	
	// Fin
	system("pause");
	return 0;
}
