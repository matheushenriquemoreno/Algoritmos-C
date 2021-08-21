//Desenvolva ym gerador de tabuada, capaz de gerar a tabuada de qualquer inteiro entre 1 a 100.
//O usuario deve informar de qual numero ele deja ver a tabuada.
#include <stdio.h>

int main(){
	int numero;

	 do {
	    	printf("informe um numero entre 1 e 100 para a tabuada: ");
	    	fflush(stdout);
	    	scanf("%d", &numero);
	    }while(numero < 1 || numero > 100);

//	printf("informe um numero entre 1 e 100 para a tabuada: ");
//	fflush(stdout);
//	scanf("%d", &numero);
//
//	while(numero < 1 || numero > 100)
//		printf("informe um número entre 1 e 100 para tabuada: ");
//		fflush(stdout);
//		scanf("%d", &numero);



	for(int i = 1; i <= 10; i++){
	printf("%d * %d = %d\n", numero, i, (numero * i));

	}



}
