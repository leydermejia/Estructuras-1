#include <stdio.h>
/*Comentario
Programa que me permita solucionar el numero de fibonacci  
Fecha:02-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int inum;
	int iFibonacci1;
	int iFibonacci2;
	int iFibonacci;
	int in;
	int isumatoria;
	
	iFibonacci=0;
	iFibonacci1=0;
	iFibonacci2=1;
	in=1;
	isumatoria=0;

	printf("Ingrese un numero cualquiera \n");
	scanf("%d",&inum);
	printf(" La serie fibonacci es \n");
	while(in<=inum){
		printf("%d\n",iFibonacci);
		iFibonacci=iFibonacci1+iFibonacci2;
		iFibonacci1=iFibonacci2;
		iFibonacci2=iFibonacci;
		in++;
		
		isumatoria=isumatoria+iFibonacci1;
	}
	printf("El total de la seria fibonacci es \n");
	printf("%d", isumatoria);
	return 0;
}

