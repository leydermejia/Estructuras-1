#include <stdio.h>
/*Comentario 
Programa que muestra en pantalla los numeros del vector y sus indices
Fecha: 05-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int iVector[5];
	int i;
	int iNumero;
	
	iNumero=0;
	
	printf("Ingrese elementos del vector \n");
	for (i=0;i<=4;i++){
		scanf("%d",&iNumero);
		iVector[i]=iNumero;
	}
	for (i=0;i<=4;i++){
		printf("El numero %d esta en la posicion ---> %d \n",iVector[i],i);
	}
	return 0;
}

