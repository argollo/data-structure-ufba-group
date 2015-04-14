//18 ­Faça um programa que calcule e mostre a área de
//um triângulo. Supondo que: Área = (base *altura) / 2.


#include <stdio.h>

int main()
{
	float base,altura,area;
	scanf("%f", &base);
	scanf("%f", &altura);
	area=(base*altura)/2;
	printf("%.2f", area);
	
	return 0;
}

