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
	int im[100][100];
	int i,j;
	int m2[100][100];
	
	printf("Ingrese Cantidad de Filas:\n");
	scanf("%d",&fi);
	printf("Ingrese Cantidad de Columnas:\n");
	scanf("%d",&co);
	
	for(i=0;i<fi;i++)
	{
		for(j=0;j<co;j++)
		{		
			im[i][j]=rand()%100;
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

