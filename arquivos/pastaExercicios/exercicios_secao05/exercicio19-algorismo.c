#include <stdio.h>

int main(){
	int numero, algorismo[3]; // vetor [0|1|2|3|4|5|6|7|8|9]  n - 1

	printf("informe um numero entre 100 a 999: ");
	fflush(stdout);
	scanf("%d", &numero);
	while(numero < 100 || numero > 1000){
		printf("informe um numero entre 100 a 999: ");
		fflush(stdout);
		scanf("%d", &numero);
	}
	while(numero != 0){
		for(int i = 0; i < 3; i++){
			printf("numero = %d\n", numero);
			algorismo[i] = numero % 10;
			numero /= 10;
			printf("%d\n", algorismo[i]);
		}
	}
	for(int i = 2; i >= 0; i--){
		printf("%d\n", algorismo[i]);
	}
}
