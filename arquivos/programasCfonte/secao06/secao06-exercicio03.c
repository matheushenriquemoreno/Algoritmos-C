//ler o n�mero e verificar se ele � par ou �mpar. quando for par armazenar esse valor em 'p'
//e quando for impar armazen�-lo em '�'.
#include <stdio.h>

int main(){
	int numero, p = 0, i = 0;

	printf("informe um numero: ");
	fflush(stdout);
	scanf("%d", &numero);

	if(numero % 2 == 0){ // se o resto da divisao de numero por 2 for igual a zero ele e par.
		p = numero;
		printf("o numero %d e par\n", p);
	}else{
		i = numero;
		printf("o numero %d e impar",i);
	}


}

