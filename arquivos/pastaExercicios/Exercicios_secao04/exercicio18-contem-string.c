#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char operador[10];
	int numero1, numero2, resultado;

	printf("digite qual operação matematica deseja efetuar (/ * - +): ");
	fflush(stdout);
	scanf("%s", operador);


	printf("digite o primeiro numero: ");
	fflush(stdout);
	scanf("%d", &numero1);

	do {
		printf("digite o segundo numero: ");
		fflush(stdout);
		scanf("%d", &numero2);
	} while (numero2 == 0); // verdade = volta a repetição. falso = sai do laço


	if(strcmp(operador, "/") == 0){ // comparação strings em C utilizar o != para diferente.
		resultado = numero1 / numero2;
		printf("resultado  %d / %d = %d", numero1, numero2,resultado);
	}else if(strcmp(operador, "*") == 0){
		resultado = numero1 * numero2;
		printf("resultado  %d * %d = %d", numero1, numero2,resultado);
	}else if(strcmp(operador, "-") == 0){
		resultado = numero1 - numero2;
		printf("resultado  %d - %d = %d", numero1, numero2,resultado);
	}else if(strcmp(operador, "+") == 0) {
		resultado = numero1 + numero2;
		printf("resultado  %d + %d = %d", numero1, numero2,resultado);
	}else{
		printf("erro");

	}



}
