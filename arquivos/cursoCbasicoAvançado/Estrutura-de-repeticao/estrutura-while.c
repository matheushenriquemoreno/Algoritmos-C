#include <stdio.h>
// estrutura de repeti��o
// while (enquanto)
/*
utilizado quando voc� precisa de um loop onde
n�o se tenha um numero fixo de elementos
mas que tenha um criterio de parada e
antes de iniciar o loop a condi��o � checada.

fa�a um programa, no qual receba e some n�meros inteiros at�
que o n�mero de entrada seja 0
e apresente a soma no final;
 */

int main(){
	int numero, soma = 0;

	printf("informe um n�mero: ");
	fflush(stdout);
	scanf("%d", &numero);

	while(numero != 0){
		soma = soma + numero;

		printf("informe um numero: ");
		fflush(stdout);
		scanf("%d", &numero);
	}
	printf("A soma �: %d", soma);
}
