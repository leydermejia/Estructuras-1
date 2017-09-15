#include <stdio.h>
/*Comentario
Programa que calcule el valor de 1+2+3+...+n
Fecha: 05-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/
int main() {
	int i;
	int j;
	float fNot1;
	float fNot2;
	float fNot3;
	int iCont1;
	int iCont2;
	int iCont3;
	
	iCont1=0;
	iCont2=0;
	iCont3=0;
	
	for (i=1; i<=5; i++){
		printf("Ingrese nota 1 \n");
		scanf("%f",fNot1);
		printf("Ingrese nota 2 \n");
		scanf("%f",fNot2);
		printf("Ingrese nota 2 \n");
		scanf("%f",fNot3);
		
		if (fNot1>=3.0&&fNot2>=3.0&&fNot3>=3.0){
			iCont1++;
		}
		if (fNot1>=3.0||fNot2>=3.0||fNot3>=3.0){
			iCont2++;
		}
		if (fNot3>=3.0){
			iCont3++;
		}
	}
	printf("Los estudiantes que aprobaron los 3 examenes %d \n",iCont1);
	printf("Los estudiantes que al menos aprobaron un examen %d \n",iCont2);
	printf("Los estudiantes que aprobaron solo el ultimo examen %d \n",iCont3);
    return 0;
}

