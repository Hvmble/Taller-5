#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Programa: Identificar la cantidad de vocales de un nombre 
y mostrar cual tiene mas caracteres y cual tiene menos caracteres
Fecha:11/09/2018
Creador: Mauricio Montoya Abadia
*/

  int positivo (int a)
  {
	
	if (a>0){
		for(int i=1; i <= a; i++){
			printf ("Numero %d \n",i);
		}
	}else 
		printf ("numero incorrecto ");
}		
int main(){
	int numero;
	printf("Ingrese un numero\n");
	scanf("%d",&numero);
	positivo(numero);
}
