#include <stdio.h>
// Estruturas de repeti��o, for, while, do.. while


/*
utilizando o For (para)
 fa�a um programa, no qual receba e some 5 n�meros inteiros
 e apresente a soma no final;
 */

int main(){
	//variaveis
	int numero, soma = 0;// sempre inicialiar variaveis quando elas n�o forem inicializadas por usuario.


	// para o int i iniciando em 0; enquanto i < 5; incremento o i em 1;
	for(int i = 0; i < 5; i++){
	printf("informe um n�mero: ");
	fflush(stdout);
	scanf("%d", &numero);

	}
	//processamento
	soma += numero;


	//saida

	printf("A soma � %d", soma);











	return 0;
}
