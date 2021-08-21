#include <stdio.h>
// Estruturas de repetição, for, while, do.. while


/*
utilizando o For (para)
 faça um programa, no qual receba e some 5 números inteiros
 e apresente a soma no final;
 */

int main(){
	//variaveis
	int numero, soma = 0;// sempre inicialiar variaveis quando elas não forem inicializadas por usuario.


	// para o int i iniciando em 0; enquanto i < 5; incremento o i em 1;
	for(int i = 0; i < 5; i++){
	printf("informe um número: ");
	fflush(stdout);
	scanf("%d", &numero);

	}
	//processamento
	soma += numero;


	//saida

	printf("A soma é %d", soma);











	return 0;
}
