#include <stdio.h>
// estrutura de repeti��o
// do while (fa�a enquanto)

/*
 * utilizado quando voc� precisa de um loop onde
 * n�o se tenha um n�mero fixo de elementos mas que
 * tenham um crit�rio de parada e a condi��o de parada
 * � checada ap�s a primeira execu��o.
 *
 * problema:
 * fa�a um programa, no qual receba e some n�meros inteiros ate que
 * o n�mero de entrada seja 0, e apresente a soma no final.
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
	printf("A soma �: %d", soma);
	printf("\nA media �: %.2lf", media);
}
