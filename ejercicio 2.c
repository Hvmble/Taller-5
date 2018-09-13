#include <stdio.h>
#include <math.h>
/*
Programa: Identificar la cantidad de vocales de un nombre 
y mostrar cual tiene mas caracteres y cual tiene menos caracteres
Fecha:11/09/2018
Creador: Mauricio Montoya Abadia
*/
int mult ( float a, float b)
{
	int resultado;
	resultado = a * b;
	printf("Ingrese un numero %d \n " ,resultado);
}
int main() {
	float numero1;
	float numero2;
	printf("Ingrese un numero\n");
	scanf("%f", &numero1);
	printf("Ingrese un numero\n");
	scanf("%f", &numero2);
	mult (numero1, numero2);
	return 0;
}

