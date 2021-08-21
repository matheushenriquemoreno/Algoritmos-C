//escreva um algoritmo que leia dois vetores de 10 posiçoes e faça a soma dos elemetos de mesmo indice,
//colocando o resultado em um terciero vetor. mostre o vetor resultante.

#include <stdio.h>

int main(){
	int vetor1 [10];
	int vetor2 [10];
	int soma[10];

	for(int i = 0; i < 10; i++){
	printf("informe o valor para o primeiro vetor:[ %d ]10", i+1);
	fflush(stdout);
	scanf("%d", &vetor1[i]);

	printf("informe o valor para o segundo vetor:[ %d ]10", i+1);
	fflush(stdout);
	scanf("%d", &vetor2[i]);

	soma[i] = vetor1[i] + vetor2[i];

	}
	for(int i = 0; i < 10; i++){
		printf("%d\n", soma[i]);
	}

}

//	for(int i = 0; i < 10; i++){populando vetor 1
//	printf("informe o valor para o primeiro vetor:[ %d ]", i+1);
//	fflush(stdout);
//	scanf("%d", &vetor1[i]);
//	}
//	for(int i = 0; i < 10; i++){ populando vetor 2
//	printf("informe o valor para o segundo vetor:[ %d ]", i+1);
//	fflush(stdout);
//	scanf("%d", &vetor2[i]);
//	}
//	for(int i = 0; i < 10; i++){ soma dois vetores
//	soma[i] = vetor1[i] + vetor2[i];
//	}














