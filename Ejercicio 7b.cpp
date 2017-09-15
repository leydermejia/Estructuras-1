#include <stdio.h>
/*Comentario 
Programa que defina un vector de numeros y calcule la multiplicacion de los elementos
Fecha: 05-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int iVector[5];
	int iMulti;
	int i;
	
	iMulti=1;
	
	for (i=1;i<=5;i++){
		scanf("%d",&iVector[i]);
		iMulti=iMulti*iVector[5];
	}
	printf("La multiplicacion del vector y sus elementos es: %d\n",iMulti);
	return 0;
}

