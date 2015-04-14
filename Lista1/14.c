//Faça um programa que receba o salário de um funcionário, 
//calcule e mostre o novo salário, sabendo­se que este
//sofreu um aumento de 25%.
#include <stdio.h>

int main()
{
	float sal,sal_novo;
	scanf("%f", &sal);
	sal_novo=sal+(sal*0.25);
	printf("%f", sal_novo);
	
	
	return 0;
}

