#include <stdio.h>

int main(){
	int numero;

	printf("informe um numero: ");
	fflush(stdout);
	scanf("%d", &numero);


	if(numero % 2 == 0){ // resto da divisão por 2 é igual a 0
		printf("o numero %d é Par!", numero);
	}else{
		printf("o numero %d e ímpar!!", numero);
	}
	return 0;
}
