#include <stdio.h>
/*Comentario 
Programa que lea de la entrada estandar 3 numeros y debe leer un cuarto numero e indicar si coincide con alguno
Fecha: 31-Agosto-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int inum;
	int inum2;
	int inum3;
	int inum4;
	
	printf("\n Ingrese tres numeros \n");
	scanf("%d",&inum);
	scanf("%d",&inum2);
	scanf("%d",&inum3);
	printf("\n Ingrese el numero a coincidir \n");
	scanf("%d",&inum4);
	
	if (inum==inum4||inum2==inum4||inum3==inum4)
	{
		printf("El numero coincide\n");
	}else{ 
		printf("EL numero no coincide con ninguno");
	}	
	return 0;
}

