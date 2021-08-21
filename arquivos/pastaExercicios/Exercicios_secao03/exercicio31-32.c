#include <stdio.h>

int main(){
	int numero;

	printf("informe um valor: ");
	fflush(stdout);
	scanf("%d", &numero);

	for(int i = numero - 1; i <= numero + 1; i++){
		printf("%d\n", i);
	}

	int sucessor = numero * 3 + 1;
	int antecessor = numero / 2 - 1;

	printf("sucessor do triplo: %d\n"
			"antecessor do seu dobro %d", sucessor, antecessor);



}
