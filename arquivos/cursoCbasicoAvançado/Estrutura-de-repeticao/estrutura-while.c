#include <stdio.h>
// estrutura de repetição
// while (enquanto)
/*
utilizado quando você precisa de um loop onde
não se tenha um numero fixo de elementos
mas que tenha um criterio de parada e
antes de iniciar o loop a condição é checada.

faça um programa, no qual receba e some números inteiros até
que o número de entrada seja 0
e apresente a soma no final;
 */

int main(){
	int numero, soma = 0;

	printf("informe um número: ");
	fflush(stdout);
	scanf("%d", &numero);

	while(numero != 0){
		soma = soma + numero;

		printf("informe um numero: ");
		fflush(stdout);
		scanf("%d", &numero);
	}
	printf("A soma é: %d", soma);
}
