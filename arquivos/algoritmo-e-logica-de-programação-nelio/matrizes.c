#include <stdio.h>

int main(){
	 int M, N;
	 printf("Quantas linhas vai ter a matriz? ");
	 fflush(stdout);
	 scanf("%d", &M); //linhas
	 printf("Quantas colunas vai ter a matriz? ");
	 fflush(stdout);
	 scanf("%d", &N); //colunas

	 int matriz[M][N];

	 for(int i = 0; i < M; i++){
		 for(int j = 0; j < N; j++){
			 printf("elemento [%d,%d]: ", i + 1, j + 1);
			 fflush(stdout);
			 scanf("%d", &matriz[i][j]);
		 }
	 }
	 printf("\nmatriz digitada: \n");
	 for(int i = 0; i < M; i++){
		 for(int j = 0; j < N; j++){
			 printf("%d ", matriz[i][j]);
		 }
		 printf("\n");
	 }
	return 0;
}
