#include <stdio.h>

int main(){
	int numero;

	printf("informe um numero impar: ");
	fflush(stdout);
	scanf("%d", &numero);

	if(numero % 2 == 0){
		while(numero % 2 == 0){ // enquanto numero modulo de 2 for = a 0 faça.
			printf("informe um numero: ");
			fflush(stdout);
			scanf("%d", &numero);
		}
	}
	printf("forma creceste: \n");
	for(int i = 0; i <= numero; i++){
		if(i % 2 != 0){
			printf("%d\n",i);
		}
	}

	printf("forma decrescente: \n");

	while(numero >= 0){ // enquanto numero for maior ou igual a 0 faça.
		if(numero % 2 != 0){
			printf("%d\n", numero);
		}
		numero -= 1;
	}
}
