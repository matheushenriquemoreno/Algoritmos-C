#include <stdio.h>

int main(){
	int x, y;

	printf("informe dois numeros: \n");
	fflush(stdout);
	scanf("%d", &x);
	scanf("%d", &y);


	while(x != y){
		if(x < y){
			printf("crescente!!\n");
		}
		else{
			printf("decrecente!!\n");
		}

		printf("digite outros dois numeros:\n");
		fflush(stdout);
		scanf("%d" , &x);
		scanf("%d", &y);
	}
	return 0;
}
