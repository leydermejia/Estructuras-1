#include <stdio.h>
/*Comentario
Programa que me permita sumar los numeros del 1 al 100
Fecha:02-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int isumatoria;
	int inum;
	
	isumatoria=0;
	inum=0;
	
	printf("Sumatoria de los numeros del 1 al 100 \n");
	while(inum<100){
		inum++;
		isumatoria=inum+isumatoria;
	}
	printf("%d\n",isumatoria);
	return 0;
}

