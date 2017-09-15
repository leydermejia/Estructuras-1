#include <stdio.h>
/*Comentario
Programa que tiene una cadena que dice "Buenos Dias",pide al usuario su nombre
y lo almacena en otra cadena, por ultimo muestra el buenos dias con el nombre del
usuario.
Fecha:12-Septiembre-2017
Elaborado por: Leyder Londoño Mejia */
int main() {
	char hola[]={'B','u','e','n','o',' s',' ','D','i','a','s',' '};
	char nombre[30];
	char definitivo[42];
	char i;
	printf ("Ingrese su nombre:\n");
	fgets (nombre,30,stdin);
	for (i=0; i<12; i++)
	{ 
		definitivo[i]=hola[i];
	}
	for(i=12;i<42;i++)
	{
		definitivo[i]=nombre[i-12];
	}
	printf("Mostrando Saludo\n");
	printf("%s",definitivo);
	return 0;
}
	

