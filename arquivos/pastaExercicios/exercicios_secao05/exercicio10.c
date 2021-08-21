#include <stdio.h>

int main(){
	int soma = 0;

	for(int i = 1; i <= 100; i++){ // for para encontrar os 50 numeros primos.
		if(i % 2 == 0){
		soma += i;
		printf("%d\n",i);
		}
	}
	printf("Soma dos 50 primeiros números par é: %d\n", soma);

}
