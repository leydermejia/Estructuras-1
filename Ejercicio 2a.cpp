#include <stdio.h>
/*Comentario
	Programa que determina el mayor de dos numeros  
	Fecha: 31-Agosto-2017
	Elaborado por: Leyder Londoño Mejia*/
int main() {
	int inum1;
	int inum2;
	
	scanf("%d",&inum1);
	scanf("%d",&inum2);
	
	if(inum1>inum2)
	{
		printf("\n el mayor es: %d \n", inum1); 
	}else{
		printf("\n el mayor es: %d \n", inum2);
	}
	return 0;
}

