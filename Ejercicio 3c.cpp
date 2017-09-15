#include <stdio.h>
/*Comentario
Programa que me permita sumar los numeros pares de 1 al 50 
Fecha:02-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int isumatoria;
	int inum;
	
	inum=1;
	isumatoria=0;
	
	printf("\n Sumatoria de los numeros pares del 1 al 50 \n");
	while(inum<=50){
		if (inum%2==0){
			isumatoria=inum+isumatoria;	
	    }
		inum++;
	}
    printf("\n\n La sumatoria de los numeros pares de 1 al 50 es : \n");
	printf("%d\n",isumatoria);
	return 0;
}

