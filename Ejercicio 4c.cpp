#include <stdio.h>
/*Comentario
Programa que solicita numeros hasta que el valor este entre 20-30 o sea igual a 0  y muestra la sumatoria.
Fecha: 03 Septiembre 2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int iNumero;
	int iSumat;
	
	iSumat=0;
	
	do{
		printf("Ingrese los numeros \n");
		scanf("%s",&iNumero);
		
		iSumat=iSumat+iNumero;
	}
	while((iNumero>20||iNumero<30)&&iNumero!=0);{
		
	}
	printf("La sumatoria es de --------> %d", iSumat);
	return 0;
}

