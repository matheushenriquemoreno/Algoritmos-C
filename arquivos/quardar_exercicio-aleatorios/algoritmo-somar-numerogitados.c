#include <stdio.h>

int main(){
	int numero, soma = 0;


	        printf("informe um numero inteiro: ");
			fflush(stdout);
			scanf("%d",&numero);

	while(numero != 0){
		soma += numero % 10; // Soma `s` ao ultimo numeral de `numero
		numero /= 10; // Remove o ultimo numero de numero

	}
	printf("soma: %d", soma);
}
