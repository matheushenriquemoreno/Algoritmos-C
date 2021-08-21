#include <stdio.h>

int main(){

	double ze = 1.10 , chico = 1.50;
	int contador = 0;

	while(ze < chico){
		ze += 0.03;
		chico += 0.02;
		contador++;
	}

	printf("Necessario %d anos\n", contador);
	printf("Idade Zé = %.2lf, idade Chico %.2lf", ze, chico);
}
