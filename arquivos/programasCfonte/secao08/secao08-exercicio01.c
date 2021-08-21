//Faça um algoritmo que carregue um vetor de 5 elementos inteiros e em sequida armazene
//em um vetor apenas os números pares maiores que 0.
//no final deve mostrar os elementos do vetor na tela.
#include <stdio.h>

int main(){
	int vetor[5], pares[5], contador_pares = 0;
	for(int i = 0; i < 5; i++){
		printf("informe o valor para o vetor: %d/5: ", (i + 1));
		fflush(stdout);
		scanf("%d", &vetor[i]);
		if(vetor[i] % 2 == 0){
			if(vetor[i] > 0){
				pares[contador_pares] = vetor[i];
				contador_pares = contador_pares + 1;
			}
		}
	}
	for(int i = 0; i < contador_pares; i++){
		printf("%d\n", pares[i]);
	}


}
