#include <stdio.h>
#include <math.h>
/*Comentario
Programa que calcula la sumatoria de la potencia de 2 hasta un numero ingresado
Fecha: 05-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int iPot;
	int i;
	int iNumero;
	int iSuma;
	
	iSuma=0;
	printf("Ingrese numeros \n");
	scanf("%d",&iNumero);
	for(i=0;i<=iNumero;i++){
		iPot=pow(2,i);
		iSuma=iSuma+iPot;
	}
	printf("El toal de la suma es %d\n", iSuma);
	return 0;
}

