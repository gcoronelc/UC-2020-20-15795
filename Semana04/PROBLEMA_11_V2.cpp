/*
	ESTUDIANTE: Gustavo Coronel
	Consideraciones
	------------------------------------------------
  colegio    => 1:Nacional, 2:Particular
  instituto  => 1:Continental, 2:Cesca, 3:WorldComputer
  control    => 1:Datos correctos, 0:Algun datos incorrecto
*/

#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int colegio, instituto, control;
	double pension, porcDescuento, descuento, importePagar;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "=================================================" << endl;
	cout << endl;
	cout << "COLEGIO" << endl;
	cout << "1.- Nacional" << endl;
	cout << "2.- Particular" << endl;
	cout << "Opción? "; cin >> colegio;
	cout << endl;
	cout << "INSTITUTO" << endl;
	cout << "1.- Continental" << endl;
	cout << "2.- CESCA" << endl;
	cout << "3.- WorldComputer" << endl;
	cout << "Opción? "; cin >> instituto;	
	cout << endl;
	cout << "Pensión? "; cin >> pension;
	
	// Validacion
	control = 1; // Todo bien
	cout << endl;
	if( colegio < 1 || colegio > 2 ){
		cout << "El colegio de procedencia no es correcto." << endl;
		control = 0;
	}
	if( instituto < 1 || instituto > 3){
		cout << "El instituto no es correcto." << endl;
		control = 0;
	}
	if(pension <= 0.0){
		cout << "La pensión debe ser un valor positivo." << endl;
		control = 0;
	}
	if( control == 0 ){
		cout << "Intentelo nuevamente, chau." << endl;
		cout << endl;
		return 0;
	}
			
	// Proceso
	switch(instituto){
		case 1:
			porcDescuento = (colegio==1)?0.60:0.35;
			break;
		case 2:
			porcDescuento = (colegio==1)?0.50:0.30;
			break;
		case 3:
			porcDescuento = (colegio==1)?0.40:0.45;
			break;
	}
	descuento = pension * porcDescuento;
	importePagar = pension - descuento;
				
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "=================================================" << endl;
	cout << "Porcentaje de descuento: " << porcDescuento*100 << "%" << endl;
	cout << "Descuento: " << descuento << endl;
	cout << "Importe a pagar: " << importePagar << endl;
	cout << endl;

	// Fin
	system("pause");
	return 0;
}
