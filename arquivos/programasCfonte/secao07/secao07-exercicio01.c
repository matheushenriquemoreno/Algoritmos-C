//fa�a um algoritmo que determine o maior entre N n�meros. A condi��o de parada � a entrada de um valor 0,
//ou seja, o algoritmo deve ficar calculando o maior at� que a entrada seja igual a 0.
//
#include <stdio.h>

int main(){
	int n, maior = 0;

	printf("informe um n�mero:");
	fflush(stdout);
	scanf("%d", &n);

	while(n != 0){
		if(n > maior){
			maior = n;
		}

		printf("informe um n�mero:");
		fflush(stdout);
		scanf("%d", &n);
	}

	printf("O maior n�mero e: %d", maior);


}
