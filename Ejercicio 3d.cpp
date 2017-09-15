#include <stdio.h>
/*Comentario
Programa que me permita sumar los numeros Impares de 1 al 50 
Fecha:02-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int isumatoria;
	int inum;
	
	isumatoria=0;
	inum=1;
	
	printf("\n Sumatoria de los numeros impares del 1 al 50 \n");
	while(inum<=50){
		if (inum%2==1){
			isumatoria=inum+isumatoria;	
		}
		inum++;
	}
	printf("\n\n La sumatoria de los numeros impares de 1 al 50 es : \n");
	printf("%d\n",isumatoria);
	return 0;
}

