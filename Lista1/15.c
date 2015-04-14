//Faça um programa que receba o salário de um funcionário e o 
//percentual de aumento, calcule e mostre o valor
//do aumento e o novo salário.
#include <stdio.h>

int main()
{
	float sal,sal_novo,aumento_percentual;
	scanf("%f", &sal);
	scanf("%f", &aumento_percentual);
	sal_novo=sal+(sal*aumento_percentual);
	printf("%.2f\n", sal*aumento_percentual);
	printf("%.2f\n", sal_novo);
	
	
	return 0;
}

