//Faça um programa que receba um número inteiro e verifique se é par ou ímpar.
#include <stdio.h>

int parimpar(int a){
	   if (a%2==0){
		printf("par\n");

	   }else{
	   	printf("impar\n");
	   }
	   return 0;
}
int main() {
	int a;
    scanf("%d", &a);    
    parimpar(a);        
	return 0; 
}
