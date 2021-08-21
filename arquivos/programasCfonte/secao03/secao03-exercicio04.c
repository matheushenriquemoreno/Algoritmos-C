//faça um algoritimo que peça dois numero e imprima a soma.

#include <stdio.h>

int main(){
	// declaração de variaveis
	int numero1, numero2, soma;

	//entradas
	printf("informe o primeiro numero: ");
	fflush(stdout);
	scanf("%d", &numero1);

	printf("informe o segundo numero:");
	fflush(stdout);
    scanf("%d", &numero2);
    soma = numero1 + numero2;

    if(numero1 > numero2){
    	printf("o primeiro numero digitado e o maior.\n");
    }else{
    	printf("o segundo e maior\n");
    }

    printf("a soma de %d + %d = %d", numero1, numero2, soma);



}
