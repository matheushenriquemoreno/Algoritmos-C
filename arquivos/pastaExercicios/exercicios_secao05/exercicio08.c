#include <stdio.h>

int main(){
	int numero, maior = 0, menor = 99999;

	for(int i = 0; i < 10; i++){
		printf("digite um numero: ");
		fflush(stdout);
		scanf("%d", &numero);

		if(numero > maior){
			maior = numero;
		}
		if(numero < menor){
			menor = numero;
		}
	}
	printf("maior numero digitado = %d\n", maior);
	printf("menor numero digitado = %d", menor);
}
