#include <stdio.h>
/*
 * * array multi-dimensional (matrizes) int numero [5] [5]; [linhas] [colunas]
 *
 * [0/0] [0/1] [0/2] [0/3] [0/4]
 * [1/0] [1/1] [1/2] [1/3] [1/4]
 * [2/0] [2/1] [2/2] [2/3] [2/4]
 * [3/0] [3/1] [3/2] [3/3] [3/4]
 * [4/0] [4/1] [4/2] [4/3] [4/4]
 */

int main(){
	//vetores de inteiros
	/*
	 * [00][01]
	 * [10][11]
	 */
	int numero[2] [2];
	numero [0] [0] = 1;
	numero [0] [1] = 2;
	numero [1] [0] = 3;
	numero [1] [1] = 4;

	for(int i = 0; i < 2; i++){ // leitura de matriz I = linha J = coluna.
		for(int j = 0; j < 2; j++){
			printf("numeros[%d] [%d] vale = %d\n", i, j, numero[i][j]);
		}
	}

	//vetotre de reais
	float valores[5] [5];

	for(int i = 0; i < 5; i++){ // populando matriz
		for(int j = 0; j < 5; j++){
			printf("popule a matriz [%d] [%d]: ", i, j);
			fflush(stdout);
			scanf("%f", &valores[i] [j]);
		}
	}

	for(int i = 0; i < 5; i++){ // lendo matriz
		for(int j = 0; j < 5; j++){
		printf("%.1f ", valores[i][j]);
		}
		printf("\n");
	}




}
