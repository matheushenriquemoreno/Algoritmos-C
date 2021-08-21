#include <stdio.h>

int main(){

	int numero, valor_calculado;

	printf("deseja a tabuada de qual numero: ");
	fflush(stdout);
	scanf("%d", &numero);

	for(int i = 1; i <= 15; i++){
		valor_calculado = i * numero;
		printf("%d * %d =  %d\n",i, numero, valor_calculado);
	}

}
