#include <stdio.h>
/*Comentario
Programa que lee 3 numeros y determina el mayor   
Fecha: 31-Agosto-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int inum1;
	int inum2;
	int inum3;
	int iMax;
	
	scanf("%d",&inum1);
	scanf("%d",&inum2);
	scanf("%d",&inum3);
	
	iMax=inum1;
	
	if(inum2>iMax)
	{
		iMax=inum2;
	}if (inum3>iMax)
	{
		iMax=inum3;
	}
	printf("\n El numero mayor es %d", iMax);
	return 0;
}


