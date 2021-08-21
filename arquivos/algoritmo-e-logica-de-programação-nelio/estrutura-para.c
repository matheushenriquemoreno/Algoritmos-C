#include <stdio.h>

int main(){
	 int N, i, x, soma = 0;
	 printf("Quantos numeros serao digitados para soma? ");
	 fflush(stdout);
	 scanf("%d", &N);


	 for (i = 1; i <= N; i++) {
	 printf("Digite um numero: ");
	 fflush(stdout);
	 scanf("%d", &x);
	 soma = soma + x;
	 }
	 printf("SOMA = %d\n", soma);
	 return 0;
}
