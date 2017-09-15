#include <stdio.h>
/*Comentario
Programa que llena una matriz pidiendo al usuario que ingrese el numero de filas
y columnas y la imprime en pantalla.
Fecha:5-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/

int main() 
{
	int fi;
	int co;
	int im [100][100];

	
	printf("Ingrese Cantidad de Filas:\n");
	scanf("%d",&fi);
	printf("Ingrese Cantidad de Columnas:\n");
	scanf("%d",&co);
	
	printf("Ingrese Elementos de la Matriz\n");
	for(int i=0;i<fi;i++)
	{
		for(int j=0;j<co;j++)
		{			
			scanf("%d",&im[i][j]);
		}	
	}	
	printf("\n");	
	printf("Mostrando Matriz\n");		
	for(int i=0;i<fi;i++)
	{
		for(int j=0;j<co;j++)
		{
			printf("%d",im[i][j]);		 
		}	
		printf("\n");	
	}
	return 0;
}

