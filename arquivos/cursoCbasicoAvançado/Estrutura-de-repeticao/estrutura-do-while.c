#include <stdio.h>
// estrutura de repetição
// do while (faça enquanto)

/*
 * utilizado quando você precisa de um loop onde
 * não se tenha um número fixo de elementos mas que
 * tenham um critério de parada e a condição de parada
 * é checada após a primeira execução.
 *
 * problema:
 * faça um programa, no qual receba e some números inteiros ate que
 * o número de entrada seja 0, e apresente a soma no final.
 */

int main(){
	int numero, soma = 0, contador = -1; // contador inicializado em -1 para diminuir o 0 digitado quando finaliza do while.
	double media = 0;

	do{

		printf("informe um numero: ");
		fflush(stdout);
		scanf("%d", &numero);
		soma = soma + numero;
		contador ++;
	}
	while (numero != 0);
	media = (double) soma / contador;
	printf("A soma é: %d", soma);
	printf("\nA media é: %.2lf", media);
}
