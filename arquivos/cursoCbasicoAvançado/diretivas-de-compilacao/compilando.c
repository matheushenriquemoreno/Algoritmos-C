#include <stdio.h>

// compila��o via terminal

int main(){

	int qtd, soma = 0;

	printf("Quantos numeros voc� quer somar? ");
	fflush(stdout);
	scanf("%d", &qtd);

	for(int i = 1; i <= qtd; i++){
		soma += i;
	}

	printf("A soma � %d\n", soma);


	return 0;
}
