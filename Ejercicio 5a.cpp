#include <stdio.h>
/*Comentario
Programa que calcule y muestre la suma de los cuadrados de los 10 primeros enteros mayores qie cero
Fecha: 04-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int iCuadrado;
	int iSumatoria;
	int i;
	
	iSumatoria=0;
	
	for(i=1;i<=10;i++){
		iCuadrado=i*i;
		iSumatoria=iCuadrado+iSumatoria;
	}
	printf("%d",iSumatoria);
	return 0;
}

