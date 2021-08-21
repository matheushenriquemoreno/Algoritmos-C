#include <stdio.h>

int main(){
	int valores[3];
	int soma = 0;
	printf("informe 3 valores!\n");

	for(int i = 0; i < 3; i++){ // populando vetor
		printf("valor[%d]: ", i +1 );
		fflush(stdout);
		scanf("%d",&valores[i]);
	}
	for(int i = 0; i < 3; i++){ // for para somar o quadrado de cada valor lido, e somar em um resultado.
		soma = soma + (valores[i] * valores[i]);

	}
		printf("o quadrado somado de todos os valore e: %d",soma);
}
