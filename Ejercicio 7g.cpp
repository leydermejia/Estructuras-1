#include <stdio.h>
/*Comentario
Programa que defina dos vectores de caracteres y despues almacene el contenido de ambos vectores en un nuevo vector.
Fecha: 05-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	char letras1[]={'L','e','y','d','e','r',' '};
	char letras2[]={'L','o','n','d','o','ñ','o'};
	char letras3[15];
	int i;
	
	for (i=0;i<8;i++){
		letras3[i]=letras1[i];
	}
	for (i=8;i<15;i++){
		letras3[i]=letras2[i-8];
	}
	for (i=0;i<15;i++){
		printf("%c",letras3[i]);
	}
	return 0;
}

