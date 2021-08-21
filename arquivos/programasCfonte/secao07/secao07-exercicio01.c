//faça um algoritmo que determine o maior entre N números. A condição de parada é a entrada de um valor 0,
//ou seja, o algoritmo deve ficar calculando o maior até que a entrada seja igual a 0.
//
#include <stdio.h>

int main(){
	int n, maior = 0;

	printf("informe um número:");
	fflush(stdout);
	scanf("%d", &n);

	while(n != 0){
		if(n > maior){
			maior = n;
		}

		printf("informe um número:");
		fflush(stdout);
		scanf("%d", &n);
	}

	printf("O maior número e: %d", maior);


}
