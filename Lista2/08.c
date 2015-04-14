/*
Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e os dados
necessários para executar cada operação. 
Menu de opções: 
1. Somar dois números. 
2. Subtrair dois números 
3. Multiplicar dois números 
4. Dividir dois números 
5. Raiz quadrada de um número 
Digite a opção desejada.
 */
#include <math.h>
#include <stdio.h>
float calc(int i, float a, float b){
float soma,sub,mult,duv,raiz  ;
	if (i==1){
		soma=a+b;
		printf("%.2f\n", soma);}
	if (i==2){
		sub=a-b;
		printf("%.2f\n", sub);}
	if (i==3){
		mult=a*b;
		printf("%.2f\n", mult);}
	if (i==4){
		duv=a/b;
		printf("%.2f\n", duv);}
	if (i==5){
		raiz=pow(a,b);
		printf("%.2f\n", raiz);

	}
	return 0;
}

int main(){
		int i;
	float a,b   ;
	printf("Somar 1 \n");
	printf("Subtrair 2\n");
	printf("Multiplicar 3\n");
	printf("Dividir 4\n");
	printf("Raiz quadrada 5\n");
	scanf("%d", &i);
	printf("Numero 1 \n");
	scanf("%f", &a);
	printf("Numero 2 \n");
	scanf("%f", &b);
	calc(i,a,b);
	return 0;
}

