#include <stdio.h>
/*Comentario
Programa que defina un vector de numeros y muestre en la salida estandar el vector en orden inverso
Fecha: 05-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int iVector[5];
	int i;
	int iNumero;
	
	printf("Ingrese el vector \n");
	for (i=0;i<=4;i++){
		scanf("%d",&iVector[i]);
	}
	for (i=4;i>-1; i--){
		printf("\n El numero %d esta en la posicion ---> %d \n",iVector[i],i);
	}
	return 0;
}

