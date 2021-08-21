#include <stdio.h>

int main(){
	int idade, contador = 0, soma = 0;
	double media;


	printf("digite as idades: \n");
	fflush(stdout);
	scanf("%d", &idade);

	while (idade >= 0){
		soma += idade;
		contador += 1;
		scanf("%d", &idade);
	}
	if(contador == 0){
		printf("impossivel calcular!!");
	}else{
		media = (double)soma / contador;
		printf("media = %.2lf", media);
	}
	return 0;
}
