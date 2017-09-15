#include <stdio.h>
/*Comentario 
Programa que lea un valor en entero y determine si es par o impar 
Fecha: 31-Agosto-2017 
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int inum;
	
	scanf("%d",&inum);
	
	if(inum%2==0)
		printf("El numero es par %d \n", inum);
	else 
		printf("El numero es impar %d \n", inum);
	return 0;
}

