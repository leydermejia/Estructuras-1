#include <stdio.h>
/*Comentario
Programa que muestre la sumatoria de los numeros.
Fecha: 05-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int iAcum;
	int i;
	int iNumero;
	
	iAcum=0;
	
	printf("Ingrese un numero \n");
	scanf("%d",&iNumero);
	for(i=0;i<=iNumero;i++){
		iAcum=iAcum+i;
	}
	printf("La sumatoria de los numeros es %d\n",iAcum);
	return 0;
}

