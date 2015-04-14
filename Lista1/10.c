#include<stdio.h>

int main(){
	float valor_hora, hora_trabalhada, sal_final;
	scanf("%f", &valor_hora);
	scanf("%f", &hora_trabalhada);
	sal_final= valor_hora*hora_trabalhada;
	printf("Total %.2f", sal_final);
	return 0;
}
