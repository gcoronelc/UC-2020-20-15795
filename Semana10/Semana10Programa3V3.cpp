#include <iostream>
using namespace std;

// Declaración global
int cont = 0, mayor, menor, dato;   
char rpta;

int leeDatoEntero(string etiqueta)
{
	int dato;
	cout << etiqueta;
	cin  >>dato;
	return dato;	
}

char leeDatoSiNo(string etiqueta, string mensaje)
{
	char dato;
	// Proceso: Inicio
	do{
		cout << etiqueta;
		cin  >> dato;
		dato = toupper(dato);
		if(dato != 'S' && dato != 'N')
		{
			cout << mensaje << endl;
		}				
	}while(dato != 'S' && dato != 'N');
	// Proceso: Fin
	return dato;	
}

void Mostrar()
{
	cout << "El mayor es: " << mayor << endl;
	cout << "El menor es: " << menor << endl;
}

void procMayorMenor()
{
	cont = 0;
	do{
		// Lectura
		dato = leeDatoEntero("Ingrese valor: ");
		// Proceso
		cont = cont + 1;  // cont++;
		if(cont == 1)
		{
			mayor = dato;
			menor = dato;		
		}
		else
			if(dato > mayor)
				mayor = dato;
			else
				if(dato < menor)
					menor = dato;
	  // Respuesta para otra lectura
	  rpta = leeDatoSiNo("Desea ingresar otros numero? (S/N): ","ERROR. Vuelva a ingresar S o N.");	
	}while(rpta == 'S');
	
	Mostrar();
}

int main()
{
	procMayorMenor();
	return 0;	
}



