#include <stdio.h>

int main(){
	int numero;

	printf("digite um numero intero par: ");
	fflush(stdout);
	scanf("%d", &numero);

	if(numero % 2 != 0){
		while(numero % 2 != 0){ // enquanto o modulo de 2 for difente de 0 faça.
			printf("digite um numero intero par: ");
			fflush(stdout);
			scanf("%d", &numero);
		}
	}
	printf("forma crescente: \n");
	for(int i = 0; i <= numero; i++){ // logica para fazer um numero crescente e mostrar somente o par.
		if(i % 2 == 0){
			printf("%d\n",i);
		}
	}
	printf("forma decrescente: \n");
	while(numero >= 0){ // logica pra fazer numero par decrescente.
		if(numero % 2 == 0){
			printf("%d\n", numero);
		}
	 numero -= 1;
	}
}
