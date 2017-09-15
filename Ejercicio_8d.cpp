#include <stdio.h>
#include<stdlib.h>
/*Comentario
Programa que llena una matriz con numeros aleatorios y copia el contenido a 
otra matriz y la muestra en pantalla.
Fecha:5-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/

int main() 
{
	int fi;
	int co;
	int im[2][2];
	int i,j;
	int m2[2][2];
	
	fi=2;
	co=2;
	printf("Ingrese elementos de la matriz\n");
	for(i=0;i<fi;i++)
	{
		for(j=0;j<co;j++)
		{		
			scanf("%d",&im[i][j]);
		}		
	}
	printf("\n");
	for(i=0;i<fi;i++)
	{
		for(j=0;j<co;j++)
		{	
			m2[i][j]=im[i][j];
			printf(" %d ",m2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
