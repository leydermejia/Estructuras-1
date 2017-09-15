#include <stdio.h>
/*Comentario 
Programa que lea 5 numeros en un arreglo y los copie a otro,multiplicados por 2 y muestre el segundo arreglo
Fecha: 06-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int iVector1[5];
	int i;
	int iVector2[5];
	int iMult;
	
	printf("Ingrese los 5 numeros del vector \n");
	for(i=0;i<=4;i++){
		scanf("%d",&iVector1[i]);
	}
	printf("Mostrando vector 2 \n");
	for(i=0;i<=4;i++){
		iMult=iVector1[i]*2;
		iVector2[i]=iMult;
		printf("%d\n",iVector2[i]);
	}
	return 0;

}

