#include <stdio.h>

int mayor(int a, int b, int c)
{
	if( a >b && c < a){
		printf("Numero mayor %d\n",a);
		
	}else 
	if (b > a && c < b ){
		printf("Numero mayor %d\n",b);
	}else {
		printf("Numero mayor %d\n",c);
	}
}
int main() {
	int numero1;
	int numero2;
	int numero3;
	printf("Ingrese un numero \n");
	scanf ("%d", &numero1);
	printf("Ingrese un numero \n");
	scanf ("%d", &numero2);
	printf("Ingrese un numero \n");
	scanf ("%d", &numero3);
	mayor(numero1,numero2,numero3);
	

	
	
	
	return 0;
}

