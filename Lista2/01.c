//A nota final de um estudante é calculada a 
//partir de três notas atribuídas, respectivamente, a um
//trabalho de laboratório, a uma avaliação
//semestral e a um exame final. A média das três notas 
//mencionadas obedece aos pesos a seguir:
#include <stdio.h>

float media(float a, float b,float c){
	float nota;
	nota= (a*2+b*3+c*5)/3;
	printf("%.2f\n", nota);
	return 	(a*2+b*3+c*5)/3;
	
}
int main(int argc, char **argv)
{	
	float q,w,e,despear;
		printf("Digite as notas\n");
		printf("Trabalho de lab\n");
		scanf("%f", &q);
		printf("Avaliação semestral\n");
		scanf("%f", &w);
		printf("Exame final\n");
		scanf("%f", &e);
		despear= media(q,w,e);
		printf("%2.f\n", despear);
				if (despear>8){
			printf("A\n");}
				if (despear>7 && despear<=8){
			printf("B\n");}
						if (despear>6 && despear<=7){
			printf("C\n");}
						if (despear>5 && despear<=6){
			printf("D\n");}
						if (despear>0 && despear<=5){
			printf("F\n");}
	return 0;
}

