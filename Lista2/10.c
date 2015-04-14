//Faça um programa que determine a data cronologicamente maior entre duas datas fornecidas
//pelo usuário. Cada data deve ser composta por três valores inteiros, em que o primeiro 
//representa o dia, o segundo, o mês e o terceiro, o ano.


#include <stdio.h>

int data(int dia, int mes, int ano, int dia2, int mes2, int ano2){
	

		if (ano>ano2 && ano!=ano2){
				printf("%d/%d/%d", dia,mes,ano);} else{
						printf("%d/%d/%d", dia2,mes2,ano2);}
		if (ano==ano2){
			if (mes==mes2){
				if (dia>dia2){
					printf("%d/%d/%d", dia,mes,ano);}
			if (dia2>dia) {
					printf("%d/%d/%d", dia2,mes2,ano2);}
			if (dia2==dia){ 
				printf("As datas sao iguais");}} else{
				if (mes>mes2 && mes!=mes2){
							printf("%d/%d/%d", dia,mes,ano);}else{ 
											printf("%d/%d/%d", dia2,mes2,ano2);}
											}
											}
											return 0;
											
}


int main(){
	int dia,mes,ano,dia2,mes2,ano2;
		scanf("%d/%d/%d",&dia,&mes,&ano);
	scanf("%d/%d/%d",&dia2,&mes2,&ano2);
	data (dia,mes,ano,dia2,mes2,ano2 );
	return 0;
}

