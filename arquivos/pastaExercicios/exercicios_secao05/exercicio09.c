#include <stdio.h>

int main(){
	int numero, impares = 0;

	printf("informe um numero: ");
	fflush(stdout);
	scanf("%d", &numero);

	for(int i = 0; i < numero; i++){
		impares += 3;
		printf("%d\n", impares);
	}


}
