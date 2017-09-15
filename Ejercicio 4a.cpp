#include <stdio.h>
/*Comentario
Programa que lee numeros hasta que se introduzca un cero
Fecha: 03 Septiembre 2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int iNumero;
	int iCont;
	
	iCont=0;
	
	do{
		printf("Ingrese los numeros \n");
		scanf("%d", &iNumero);
		if (iNumero>0){
			iCont++;
		}
	}while (iNumero!=0);
		printf("La cantidad de numeros ingresados mayores que 0 es %d",iCont);
	return 0;
}

