#include <stdio.h>
/*Comentario
Programa que pide al usuario que ingrese un numero y retorna la tabla de multiplicar 
Fecha: 31-Agosto-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int inum;
	int i1;
	int i2;
	int i3;
	int i4;
	int i5;
	int i6;
	int i7;
	int i8;
	int i9;
	int i10;
	
	printf("\n Ingrese el numero que desee \n");
	scanf("%d",&inum);
	
	i1=inum*1;
	i2=inum*2;
	i3=inum*3;
	i4=inum*4;
	i5=inum*5;
	i6=inum*6;
	i7=inum*7;
	i8=inum*8;
	i9=inum*9;
    i10=inum*10;
	
	printf("%d * %d es %d \n",inum,1,i1);
	printf("%d * %d es %d \n",inum,2,i2);
	printf("%d * %d es %d \n",inum,3,i3);
	printf("%d * %d es %d \n",inum,4,i4);
	printf("%d * %d es %d \n",inum,5,i5);
	printf("%d * %d es %d \n",inum,6,i6);
	printf("%d * %d es %d \n",inum,7,i7);
	printf("%d * %d es %d \n",inum,8,i8);
	printf("%d * %d es %d \n",inum,9,i9);
	printf("%d * %d es %d \n",inum,10,i10);
	
	return 0;
}

