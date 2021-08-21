#include <stdio.h>

int main(){


	int x, y, soma = 0, troca;
	printf("digite dois numeros:\n");
	fflush(stdout);
	scanf("%d %d", &x, &y);

	if(x > y){
		troca = x;
		x = y;
		y = troca;
	}

	for(int i = x+1; i < y; i++){
		if(i % 2 != 0){
			soma = soma + i;
		}
	}

	printf("soma dos impares = %d\n", soma);


	return 0;
}
