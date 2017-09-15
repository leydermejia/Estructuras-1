#include <stdio.h>
/*Comentario 
Programa que devuelve el area, diametro y longitud de una circunferencia
Fecha: 31-Agosto-2017
Elaborado por: Leyder Londoño Mejia */
int main() {
	float fArea;
	float fDiametro;
	float fLongitud;
	float fRadio;
	float fPi;
	
	fPi=3.1416;

	printf("\n Ingrese el valor del radio de la circunferencia \n");
	scanf ("%f", &fRadio);
	
	fArea=fPi*(fRadio*fRadio);
	fDiametro=2*fPi;
	fLongitud=2*fPi*fRadio;
	
	printf("\n Circunferencia con radio: %f \n", fRadio);
	printf("\n El area de la circunferencia es de: %f \n", fArea);
	printf("\n El diametro de la circunferencia es de: %f \n", fDiametro);
	printf("\n La longitud de la circunferencia es de: %f \n", fLongitud);

	return 0;
}

