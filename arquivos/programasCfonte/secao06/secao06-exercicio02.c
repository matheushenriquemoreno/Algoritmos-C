// elabore um algoritmo que leia um número. Se positivo armazene-o em 'a'
// se for negativo, em 'b' no final mostrar o resultado.
#include <stdio.h>

int main(){
	int numero, a, b;

	printf("informe um numero: ");
	fflush(stdout);
	scanf("%d", &numero);

	if(numero > 0){
		a = numero;
		printf("o numero %d é positivo!", numero);

	}else{
		b = numero;
		printf("o numero %d é negativo!", numero);
	}
}
