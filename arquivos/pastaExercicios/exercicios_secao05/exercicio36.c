#include <stdio.h>

int main(){
	int soma = 0, quadrado10 = 0, soma_quadrado = 0 , diferenca = 0;


	for(int i = 1; i <= 100; i++){
		soma += i;
		quadrado10 += i * i;
	}

	soma_quadrado  = soma * soma;

	 diferenca = soma_quadrado - quadrado10;
	printf("Soma dos quadrados dos cem primeiros numeros naturais é: %d\n", quadrado10);
	printf("O quadrado da soma dos cem primeiros números naturais é: %d\n", soma_quadrado);
	printf("Diferença = %d", diferenca);

}
