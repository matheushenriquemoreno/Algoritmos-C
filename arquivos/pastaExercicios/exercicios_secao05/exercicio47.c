#include <stdio.h>

int main(){
	int numero1, numero2, opcao, resultado;
	do {
	printf("Escolha uma opera��o: \n"
			"adi��o 1.\n"
			"subtra��o 2.\n"
			"multiplica��o 3.\n"
			"divis�o 4.\n"
			"saida 5.\n:");
	fflush(stdout);
	scanf("%d", &opcao);

	if(opcao == 1){
		printf("informe o primeiro n�mero: ");
		fflush(stdout);
		scanf("%d", &numero1);

		printf("informe o segundo n�mero:");
		fflush(stdout);
		scanf("%d", &numero2);

		resultado = numero1 + numero2;
		printf("\nResultado: %d  + %d  = %d\n\n", numero1, numero2, resultado);

	}else if(opcao == 2){
		printf("informe o primeiro n�mero: ");
		fflush(stdout);
		scanf("%d", &numero1);

		printf("informe o segundo n�mero:");
		fflush(stdout);
		scanf("%d", &numero2);

		resultado = numero1 - numero2;
		printf("\nResultado: %d - %d  = %d\n\n", numero1, numero2, resultado);

	}else if(opcao == 3){
		printf("informe o primeiro n�mero: ");
		fflush(stdout);
		scanf("%d", &numero1);

		printf("informe o segundo n�mero:");
		fflush(stdout);
		scanf("%d", &numero2);

		resultado = numero1 * numero2;
		printf("\nResultado: %d  * %d  = %d\n\n", numero1, numero2, resultado);

	}else if(opcao == 4){
		printf("informe o primeiro n�mero: ");
		fflush(stdout);
		scanf("%d", &numero1);

		printf("informe o segundo n�mero:");
		fflush(stdout);
		scanf("%d", &numero2);
		while(numero2 <= 0){
			printf("informe o segundo n�mero:");
			fflush(stdout);
			scanf("%d", &numero2);
		}
		resultado = numero1 / numero2;
		printf("\nResultado: %d  / %d  = %d\n\n", numero1, numero2, resultado);
	}else{
		break;
	}

	} while(opcao != 5);
}
