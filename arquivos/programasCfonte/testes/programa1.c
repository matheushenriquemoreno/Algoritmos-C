#include <stdio.h>

int main(){// a chave delimita um bloco de c�digo (in�cio do bloco
	// declarando variaveis
	int idade;
	// fun��o para escrever algo na sa�da padr�o (console)
	printf("Qual e a sua idade?");// o ponto e virgula finaliza um comando
	fflush(stdout);

	// receber dados
	scanf("%d", &idade);
	printf("A sua idade e %d", idade);








	return 0;

}// fim do bloco

