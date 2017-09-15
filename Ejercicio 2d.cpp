#include <stdio.h>
/*Comentario
Programa que devuelve si un numero es positivo o negativo 
Fecha: 31-Agosto-31
Elaborado por : Leyder Londoño Mejia */
int main() {
	int inum;
	
	scanf("%d",&inum);
	
	if(inum>0)
		printf("El numero es positivo %d \n", inum);
	else 
		printf("El numero es negativo %d \n", inum);
	return 0;
	
}

