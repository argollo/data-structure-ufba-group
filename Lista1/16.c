//Faça um programa que receba o salário base de um funcionário, 
//calcule e mostre o salário a receber,
//sabendo­se que o funcionário tem gratificação de 5% sobre o 
//salário base e paga imposto de 7% sobre este salário.
#include <stdio.h>

int main()
{
	float sal_base;
	scanf("%f", &sal_base);
sal_base=sal_base+(sal_base*0.05);
sal_base=sal_base-(sal_base*0.07);
printf("%.2f", sal_base);
	
	return 0;
}
