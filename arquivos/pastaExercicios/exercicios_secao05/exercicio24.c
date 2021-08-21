#include <stdio.h>

int main(){
	int numero, soma = 0;

	printf("informe um numero: ");
	fflush(stdout);
	scanf("%d", &numero);
	printf("Soma de todos os numeros divisiveis de %d:\n", numero);
	for(int i = 1; i < numero; i++){
		if(numero % i == 0){
			soma += i;
			printf("%d + ", i);
		}
	}
	 printf("= %d", soma);

}
