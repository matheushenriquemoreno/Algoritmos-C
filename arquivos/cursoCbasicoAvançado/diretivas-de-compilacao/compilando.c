#include <stdio.h>

// compilação via terminal

int main(){

	int qtd, soma = 0;

	printf("Quantos numeros você quer somar? ");
	fflush(stdout);
	scanf("%d", &qtd);

	for(int i = 1; i <= qtd; i++){
		soma += i;
	}

	printf("A soma é %d\n", soma);


	return 0;
}
