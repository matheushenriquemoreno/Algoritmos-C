#include <stdio.h>

int main(){

	int n, contador_negativos = 0;
	printf("informe a ordem da matriz? ");
	fflush(stdout);
	scanf("%d", &n);

	int matriz[n][n];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("elemento [%d,%d]: ", i, j);
			fflush(stdout);
			scanf("%d", & matriz [i] [j]);
		}
	}


	printf("diagonal principal: \n");
	for(int i = 0; i < n; i++){
		printf("%d", matriz[i][i]);
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(matriz[i][j] < 0){
				contador_negativos ++;
			}
		}
	}
	printf("\nQuantidade de negativos = %d\n", contador_negativos);

	return 0;




}
