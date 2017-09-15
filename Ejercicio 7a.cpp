#include <stdio.h>
/*Comentario 
Programa que defina un vector de numeros y calcule la summa de los elementos
Fecha: 05-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int iVector[5];
	int iSuma;
	int i;
	
	iSuma=0;
	
	for (i=1;i<=5;i++){
		scanf("%d",&iVector[i]);
		iSuma=iSuma+iVector[i];
	}
	printf("La suma del vector y sus elementos es: %d\n",iSuma);
	return 0;
}

