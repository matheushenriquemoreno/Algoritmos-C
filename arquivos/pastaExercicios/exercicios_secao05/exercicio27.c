#include <stdio.h>

int main(){
	int numero;
	double soma = 0;

	printf("informe um numero inteiro e positivo: ");
	fflush(stdout);
	scanf("%d", &numero);
	while(numero <= 0){
		printf("informe um numero inteiro e positivo: ");
		fflush(stdout);
		scanf("%d", &numero);
		}

	for(double i = 1; i <= numero; i++){
		soma += 1 / i;
		printf("%.2lf ", soma);
	}



}
