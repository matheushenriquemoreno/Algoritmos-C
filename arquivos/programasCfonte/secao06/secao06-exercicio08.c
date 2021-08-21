//faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando
//se este número é par ou ímpar, e se é positivo ou negativo.

#include <stdio.h>

int main(){
	// variaveis
	int numero;

	printf("informe um numero: ");
	fflush(stdout);
	scanf("%d",&numero);

	if(numero % 2 == 0){
		if(numero > 0 ){
			printf("o numero %d é par e positivo", numero);
		}else{
			printf("o numero %d e impar e negativo.", numero);
		}
	}else{
		if(numero > 0) {
			printf(" o numero %d e ímpar e positivo", numero);
		}else{
			printf(" o numero %d e ímpar e negativo", numero);
		}
	}



}
