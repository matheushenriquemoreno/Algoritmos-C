//fa�a um programa que carregue um vetor com dez n�meros inteiros.
//calcule e mostre os n�meros superiores a 50 e suas respectivas posi��es.
//mostrar mensagem se n�o existir nenhum numero nesta condi��o.

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
		printf("o numero %d est� na posi��o %d\n", vetor[i], (i + 1));

		}
	}
	if(tem_maior_50 < 1){
		printf("n�o exite nenhum numero maior que 50!!");
	}
}
