#include <stdio.h>

int main(){// a chave delimita um bloco de código (início do bloco
	// declarando variaveis
	int idade;
	// função para escrever algo na saída padrão (console)
	printf("Qual e a sua idade?");// o ponto e virgula finaliza um comando
	fflush(stdout);

	// receber dados
	scanf("%d", &idade);
	printf("A sua idade e %d", idade);








	return 0;

}// fim do bloco

