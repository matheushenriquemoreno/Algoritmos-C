#include <stdio.h>

int main(){

	int n; // variavel que guarda seu valor na memória

	int* p; // ponteiro é um valor que aponta para um endereço de memória

	printf("informe um número: ");
	fflush(stdout);
	scanf("%d", &n);
	// inicialiando um ponteiro
	p =&n;

	printf("o número informado foi %d\n", n);
	printf("Endereço de memória: %d\n", &n);

	printf("Endereço do ponteiro: %p\n", p);


	return 0;
}
