#include <stdio.h>
/*Comentario
Programa que solicite un entero del 1 al 10 y muestre su tabla de multiplicar
Fecha: 03 Septiembre 2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int iNumero;
	int in;
	int iTabla;
	
	in=0;
	
	printf("Ingrese un numero del 1 al 10 \n");
	scanf("%d",&iNumero);
	printf("Tabla de multiplicar del numero:  %d\n", iNumero);
	do
	{
		in++;
		iTabla=iNumero*in;
		printf("%d * %d  -----> %d\n",iNumero,in,iTabla);
	}
	while (in<=9);{
	}
	return 0;
}

