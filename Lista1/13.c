#include <stdio.h>
//Faça um programa que receba três notas e seus 
//respectivos pesos, calcule e mostre a média ponderada.
int main(){
	float nota1,nota2,nota3,media,peso1,peso2,peso3;
	printf("Nota");
	scanf("%f", &nota1);
	printf("Peso");
	scanf("%f", &peso1);
	printf("Nota");
	scanf("%f", &nota2);
	printf("Peso");
	scanf("%f", &peso2);
	printf("Nota");
	scanf("%f", &nota3);
	printf("Peso");
	scanf("%f", &peso3);
	media= (nota1*peso1)+(nota2*peso2)+(nota3*peso3);
	printf ("Media %f", media);
	return 0;}
	
