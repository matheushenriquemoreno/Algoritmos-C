#include <stdio.h>

int main(){
		int numero;

		printf("informe um numero: ");
		fflush(stdout);
		scanf("%d", &numero);

		printf("numero crescente: \n");
				for(int i = 0; i <= numero; i++){
				printf("%d\n",i);
			}

		printf("numero decrescente: \n");
//		while (numero >= 0){ // enquanto numero maior ou igual a 0 faça
//			printf("%d\n",numero);
//			numero -= 1;
//		}

		for(int i = numero; i >= 0; i--){
			printf("%d\n", i);
		}







}
