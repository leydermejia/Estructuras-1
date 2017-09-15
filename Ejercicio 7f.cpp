#include <stdio.h>
/*Comentario 
Programa que defina un vector de numeros y calcule si existe algun numero en el vector cuyo valor equivale a la suma de todo
Fecha: 06-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int iVector[6];
	int iSumatoria;
	int i;
	
	iSumatoria=0;
	for(i=0;i<=4;i++){
		scanf("%d",&iVector[i]);
		iSumatoria=iSumatoria+iVector[i];
	}
	if (iSumatoria==iVector[i]){
		printf("El resultado de la sumatoria es igual es un numero del vector\n");
	}else{
		printf("El resultado de la sumatoria es diferente a un elemento del vector\n");
	}
	return 0;
}

