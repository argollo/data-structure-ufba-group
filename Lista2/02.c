//2. Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a
//mensagem constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a 
//nota que deverão tirar para serem aprovados, considerando que a média exigida é 6,0. 
//Média Aritmética Mensagem
//0 a 3 Reprovado
//3 a 7 Exame 
//7 a 10 Aprovado
#include <stdio.h>
float aluno(float n1, float n2,float n3){
float total;	
total=(n1+n2+n3)/3;
 if (total>=0 && total<3){
		printf("Reprovado\n");}
 if (total>=3 && total<7){
	 printf("Exame\n");}
 if (total>=7 && total<=10){
	 printf("Aprovado\n");}
	return total;
}

int main(int argc, char **argv)
{
float n1,n2,n3,total;
scanf("%f\n", &n1);
scanf("%f\n", &n2);
scanf("%f\n", &n3);	
	total=aluno(n1,n2,n3);
	printf("%f", total);
	return 0;
}


