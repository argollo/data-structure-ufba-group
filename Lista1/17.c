//Faça um programa que receba o salário base de um
// funcionário, calcule e mostre o seu salário a receber,
//sabendo­se que o funcionário tem gratificação de R$ 50 
//e paga imposto de 10% sobre o salário base.
#include <stdio.h>

int main()
{
	float sal,sal_novo;
	scanf("%f", &sal);
	sal_novo=(sal+50)-(sal*0.1);
	printf("%f", sal_novo);
	
	
	return 0;
}

