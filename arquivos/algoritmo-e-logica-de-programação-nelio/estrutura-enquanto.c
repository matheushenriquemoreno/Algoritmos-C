#include <stdio.h>

int main(){
	int x, soma;
	 soma = 0;
	 printf("Digite o primeiro numero: ");
	 fflush(stdout);
	 scanf("%d", &x);

	 while (x != 0) {
	 soma = soma + x;
	 printf("Digite outro numero: ");
	 fflush(stdout);
	 scanf("%d", &x);
	 }
	 printf("SOMA = %d\n", soma);
	 return 0;

}
