
#include <stdio.h>
//3. Faça um programa que receba dois números e mostre o maior.
float maiormenor(float a, float b){
	float mm;
	if (a>b){
			mm=a;
			printf("O valor maior é %2.f\n", a);
		}
	if (a<b){
			mm=b;
			printf("O valor maior é %2.f\n", b);
	}
	if (a==b){
		mm=a;
			printf("Os valores sao iguais %2.f\n", a);
		}
		return mm;
	}
	int main(){
			float q,w,e;
				printf("Digite o valor 1\n");
				scanf("%f", &q);
				printf("Digite o valor 2\n");
				scanf("%f", &w);
			e= maiormenor(q,w);
				return 0;
			}
				
