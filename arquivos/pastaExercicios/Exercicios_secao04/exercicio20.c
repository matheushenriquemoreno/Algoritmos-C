#include <stdio.h>

int main(){
	double a, b , c;

	printf("digite trez valores da seguinte forma: \nA: \nB: \nC:\n");
	fflush(stdout);
	scanf("%lf %lf %lf", &a, &b, &c);

	if(a == b && a == c && b == c){
		printf("triangulo equilátero.\n");
	}else if(a == b || b == c){
		printf("triangulo esósceles.\n");
	}else if(a != b && a != c && b != c){
		printf("triangulo escaleno.\n");
	}else{
		printf("nenhum triangulo compativel com os numeros digitados!!");
	}


}
