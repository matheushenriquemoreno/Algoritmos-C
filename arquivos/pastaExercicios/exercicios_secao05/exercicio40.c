#include <stdio.h>

int main(){
	int numero, maior = 0, menor;

	printf("digite um numero: ");
	fflush(stdout);
	scanf("%d", &numero);

	menor = numero;
	while(numero > -1){

		if(numero > maior){
			maior = numero;
		}else if(numero < menor){
			menor = numero;
		}
		printf("digite um numero: ");
		fflush(stdout);
		scanf("%d", &numero);
	}
	printf("maior numero digitado: %d\n", maior);
	printf("menor numero digitado: %d\n", menor);
}
