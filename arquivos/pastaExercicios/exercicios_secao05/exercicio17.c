#include <stdio.h>

int main(){
	int numero, soma = 0;

	printf("informe um numero: ");
	fflush(stdout);
	scanf("%d", &numero);


	for(int i = 1; i <= numero; i++){
		soma += i;
	}
	printf("%d", soma);
}
