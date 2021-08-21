#include <stdio.h>

int main(){
	int naturais = 1000, soma3 = 0, soma5 = 0;

	printf("numeros multiplos de 3: ");
	for(int i = 1; i <= naturais; i++){
		if(i % 3 == 0){ // logica para pegar todos os numeros multiplos de um numero especifico.
			printf("%d ", i);
			soma3 += i;

		}
	}
	printf("\nnumeros multiplos de 5: ");
	for(int i = 1; i <= naturais; i++){
		if(i % 5 == 0){
			printf("%d ", i);
			soma5 += i;
		}
	}

	printf("\nA soma de todos os numeros multiplos de 3 e = %d\n", soma3);
	printf("A soma de todos os numeros multiplos de 5 e = %d\n", soma5);

}
