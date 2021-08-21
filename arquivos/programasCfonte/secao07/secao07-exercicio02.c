//faça um algoritmo que conte de 1 a 100 e cada multiplo de 10 emita uma mensagem: "multiplo de 10"


#include <stdio.h>

int main(){

	for(int i = 1; i <= 100; i++){ // para i = 1, enquanto i <= 100, processar
		printf("%d\n",i);
		if(i % 10 == 0){
			printf("multiplo de 10\n");
		}
	}
}
