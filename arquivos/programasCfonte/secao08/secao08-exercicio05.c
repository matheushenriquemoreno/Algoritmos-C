//faça um programa que carregue um vetor com dez números inteiros.
//calcule e mostre os números superiores a 50 e suas respectivas posições.
//mostrar mensagem se não existir nenhum numero nesta condição.

#include <stdio.h>

int main(){

	int vetor[10];
	char tem_maior_50 = 0;

	for(int i = 0; i < 10; i++){
		printf("informe o valor para o vetor %d/10", (i+1));
		fflush(stdout);
		scanf("%d", &vetor[i]);
	}
	for(int i = 0; i < 10; i++){
	if(vetor[i] > 50){
		printf("o numero %d está na posição %d\n", vetor[i], (i + 1));

		}
	}
	if(tem_maior_50 < 1){
		printf("não exite nenhum numero maior que 50!!");
	}
}
