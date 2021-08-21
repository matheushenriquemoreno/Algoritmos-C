#include <stdio.h>
// matrizes
/*
 * array uni-dimensional (vetores) int numero 5;
 * [0] [1] [2] [3] [4]
 *
 *
 *
 * array multi-dimensional (matrizes) int numero [5] [5]; [linhas] [colunas]
 *
 * [0] [1] [2] [3] [4]
 * [0] [1] [2] [3] [4]
 * [0] [1] [2] [3] [4]
 * [0] [1] [2] [3] [4]
 * [0] [1] [2] [3] [4]
 *
 */

// aray multi-dimensionais
// char nome[3] [5]

int main(){
	char nome [3] [50];

	for(int i = 0; i < 3; i++){
		printf("informe seu nome: ");
		fflush(stdout);
		gets(nome[i]);
	}

	for(int i = 0; i < 3; i++){
		printf("olá %s\n", nome[i]);
	}


}
