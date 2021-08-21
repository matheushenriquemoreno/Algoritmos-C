//faça um programa que carregue um vetor com dez números inteiro.
// e mostre o vetor na ordem inversa a que foi digitado.

#include <stdio.h>

int main(){
	int vetor[10];

	for(int i = 0; i <10; i++){ // populando vetor
		printf("informe o valor para o vetor: ");
		fflush(stdout);
		scanf("%d", &vetor[i]);
	}
	for(int i = 9; i >= 0; i--){ // decrementando o vetor, fazendo a leitura ao contrario.
		printf("%d\n", vetor[i]);
	}



}
