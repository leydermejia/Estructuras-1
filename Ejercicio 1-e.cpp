#include <stdio.h>
/*Comentario
	Programa que devuelve la cantidad de dinero en dolares 
	Fecha: 31-Agosto-2017
	Elaborado por: Leyder Londoño Mejia*/
int main() {
	float fValorDolar;
	int iCantDolar;
	float fResultado;
	
	printf("\n Ingrese el valor del dolar \n");
	scanf("%f", &fValorDolar);
	
	printf("\n Ingrese cantidad de dolares \n");
	scanf("%d", &iCantDolar);
	
	fResultado=fValorDolar*iCantDolar;
	
	printf("\n La cantidad de dolares es: %f \n", fResultado);
	return 0;
}

