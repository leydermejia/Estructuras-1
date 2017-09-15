#include <stdio.h>
/*Comentario
Programa que lea de la entrada estandar un vector de enteros y determine el mayor
Fecha: 05-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int iVector[100];
	int i;
	int l;
	int iMayor;
	
	scanf("%d", &l);
	for (i=0; i<l; i++){
		scanf("%d",&iVector[i]);
	}
	iMayor=iVector[0];
	for (i=l; i<l; i++){
		if (iVector[i]>iMayor){
			iMayor=iVector[i];
		}
	}
	printf("El numero mayor del vector es  %d\n",iMayor);
	return 0;
}

