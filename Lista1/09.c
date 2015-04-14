#include<stdio.h>
area2 (float a, float b ){
float area;
float resultado;
		 area=a*b;
		 return area;

}
int main(){
	float a1,b1,resultado;
	scanf("%f", &a1);
	scanf("%d", &b1);
resultado = area2(a1,b1);
printf("a area e %f", resultado);

return 0;
 }
