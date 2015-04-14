#include <stdio.h>
//Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o

//usuário digitará três números diferentes.
float cres(float a, float b, float c){
	float maior,meio,fim;
		if (a>b && a>c) {
				maior=a;
					if (b>c){
						meio=b;
						fim=c;
						printf("o valor crescente e %.0f\n", fim);
						printf("o valor crescente e %.0f\n", meio);
						printf("o valor crescente e %.0f\n", maior);
						
						}else{ fim=b;
									meio=c;
						printf("o valor crescente e %.0f\n", fim);
						printf("o valor crescente e %.0f\n", meio);
						printf("o valor crescente e %.0f\n", maior);}}
				if (b>a && b>c) {
				maior=b;
					if (a>c){
						meio=a;
						fim=c;
						printf("o valor crescente e %.0f", fim);
						printf("o valor crescente e %.0f", meio);
						printf("o valor crescente e %.0f", maior);}else{ fim=a;
									meio=c;
						printf("o valor crescente e %.0f\n", fim);
						printf("o valor crescente e %.0f\n", meio);
						printf("o valor crescente e %.0f\n", maior);}}
				if (c>b && c>a) {
				maior=c;
					if (b>a){
						meio=b;
						fim=a;
						printf("o valor crescente e %.0f\n", fim);
						printf("o valor crescente e %.0f\n", meio);
						printf("o valor crescente e %.0f\n", maior);}else{ fim=b;
									meio=a;
						printf("o valor crescente e %.0f\n", fim);
						printf("o valor crescente e %.0f\n", meio);
						printf("o valor crescente e %.0f\n", maior);}}
								return 0;	
								}
								
								
	int main(){	
		float a,b,c,d;
	printf("Digite os valores do 1\n");
	scanf("%f", &a);
	printf("Digite os valores do 2\n");
	scanf("%f", &b);
	printf("Digite os valores do 3\n");
	scanf("%f", &c);
	d=cres(a,b,c);
		return 0;
	}
