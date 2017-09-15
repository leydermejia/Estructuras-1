#include <stdio.h>
/*Comentario
Programa que tome cada 4 horas la temperatura durante 24h y que calcule la temperatura mas alta y baja.
Fecha: 04-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int i;
	float fTemperatura;
	float fSuma;
	float fBaja;
	float fMayor;
	float fMedia;

	fSuma=0;
	
	for (i=1;i<=6;i++){
		printf("Ingrese la temperaatura \n");
		scanf("%f",&fTemperatura);
		fSuma=fSuma+fTemperatura;
		fMedia=fSuma/6;
		
		if (fTemperatura==1){
			fMayor=fTemperatura;
		}
		if (fTemperatura>fMayor){
			fMayor=fTemperatura;
		}
		else{
			fBaja=fMayor;
		}
		
	}
	printf("La temperatura Menor es %f \n",fBaja);
	printf("La temperatura Media es %f \n",fMedia);
	printf("La temperatura Mayor es %f \n",fMayor);
	return 0;
}

