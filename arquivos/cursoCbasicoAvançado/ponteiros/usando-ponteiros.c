#include <stdio.h>

int main(){

	int n; // variavel que guarda seu valor na mem�ria

	int* p; // ponteiro � um valor que aponta para um endere�o de mem�ria

	printf("informe um n�mero: ");
	fflush(stdout);
	scanf("%d", &n);
	// inicialiando um ponteiro
	p =&n;

	printf("o n�mero informado foi %d\n", n);
	printf("Endere�o de mem�ria: %d\n", &n);

	printf("Endere�o do ponteiro: %p\n", p);


	return 0;
}
