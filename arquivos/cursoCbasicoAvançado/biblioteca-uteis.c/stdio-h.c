#include <stdio.h>

// fun��o de entrada e sa�da:

// acesso a arquivos:

// fclose;
// fflush () // limpar buffer.(corrige um bug no windows)
// fopen()

// Entradas e sa�das formatadas
// fscanf
// printf
// scanf

// entradas e sa�das de caracteres
// gets() -> arquivos
// fputs() -> arquivos
// getchar() -> corrigir bug,
// fgets()  -> recebe uma string

// tratamento de erros

// feof() -> arquivos

// tipos e macros
// FILE
// EOF
// NULL

int main(){
	int num1, num2, soma = 0;
	printf("informe o numero 1: ");
	fflush(stdout);
	scanf("%d", &num1);

	printf("informe o numero 2: ");
	fflush(stdout);
	scanf("%d", &num2);

	soma = num1 + num2;

	printf("soma = %d", soma);

}
