//Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto
//número que não siga essa regra. Mostre, em seguida, os quatro números em ordem decrescente. 
//Suponha que o usuário digitará quatro números diferentes.
#include <stdio.h>
int numeros(int a, int b, int c, int z){
		if (c<z){
			printf ("%d%d%d%d\n\n\n\n",a, b, c, z);
		}
			if (b<z){
				if (c>z){
						printf ("%d%d%d%d\n\n\n\n",a, b, z, c);}}
				if (a<z) {
						if (b>z){
							printf ("%d%d%d%d\n\n\n\n",a, z, b, c);
						}}
				if (a>z){
					printf ("%d%d%d%d\n\n\n\n",z, a, b, c);
				}
				return 0;
			}
						
	

int main()
{		int a,b,c,z;
	printf("Digite os valores 1\n");
	scanf("%d", &a);
	printf("Digite os valores 2\n");
	scanf("%d", &b);
	printf("Digite os valores 3\n");
	scanf("%d", &c);
	printf("Digite os valores 4\n");
	scanf("%d", &z);
	numeros(a,b,c,z);
	return 0;
}

