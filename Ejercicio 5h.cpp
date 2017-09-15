#include <stdio.h>
/*Comentario
Programa que calcula la descomposicio en numeros primos de un numero entero.
Fecha: 05-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/
int main(int argc, char *argv[]) {
	int iNumero;
	int iFact;
	
	printf("Ingrese numero\n");
	scanf("%d",&iNumero);
	
	for(iFact=2;iFact<=iNumero;iFact++){
		while(iNumero%iFact==0){
			iNumero/=iFact;
			printf("La descomposicion del numero ingresado es %d\n",iNumero,iFact);
		}
	}
	return 0;
}

