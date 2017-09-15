#include <stdio.h>
/*Comentario
Programa que me permita solucionar el factorial de un numero  
Fecha:02-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int iNumero;
	int ifactorial;
	int in;
	
	ifactorial=1;
	in=1;
	printf("\n Ingrese un numero para ver su factorial \n ");
	scanf("%d",&iNumero);
		while (in<=iNumero){
		 ifactorial=ifactorial*in;
			in=in+1;
		}
		printf("%d\n", ifactorial);
	return 0;
}

