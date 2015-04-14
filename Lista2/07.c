/*Faça um programa que receba quatro valores: I, A, B e C. Desses valores, I é inteiro e positivo,
A, B e C são reais. Escreva os números A, B e C obedecendo à tabela a seguir. Suponha que o 
valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3, e que os números digitados 
sejam diferentes um do outro. 
Valor de I Forma a escrever 
1 A, B e C em ordem crescente 
2 A, B e C em ordem decrescente 
3 O maior fica entre os outros dois números*/
#include <stdio.h>
float q6(float a, float b, float c, int i){

	if (i==1){
		if (a>b){
				printf("%f\n",a);
					if (b>c){
						printf("%f\n",b);
						printf("%f\n",c);}else{ printf("%f\n",c); printf("%f\n",b);}}}
	if (i==2){
		if (a<b && a<c){
				printf("%f\n",a);
					if (b>c){
						printf("%f\n",b);
						printf("%f\n",c);}else{ printf("%f\n",c); printf("%f\n",b);}}}
	if (i==3){
		if (a>b && a>c){
				printf("%f\n",b);
				printf("%f\n",a);
				printf("%f\n",c);
						
}}
return 0;
}
int main(){
	int i;
	float a,b,c;
	printf("Digite i\n");
	scanf("%d",&i);
	printf("Digite a\n");
	scanf("%f",&a);
	printf("Digite b\n");
	scanf("%f",&b);
	printf("Digite c\n");
	scanf("%f",&c);
	
	return 0;
}
