#include <stdio.h>
/*Comentario 
Programa que pide al usuario una cadena de caracteres la almacena en un arreglo
y la copia en otra para mostrarla en pantalla. 
Fecha: 12-09-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	char nombre1[30];
	char nombre2[30];
	char i;
	printf("Ingrese los caracteres\n");
	fgets(nombre1,30,stdin);
	for(i=0;i<=30;i++){
		nombre2[i]=nombre1[i];
	}
	printf("Mostrando Cadena 2\n");
	printf("%s",nombre2);
	return 0;
}
	
