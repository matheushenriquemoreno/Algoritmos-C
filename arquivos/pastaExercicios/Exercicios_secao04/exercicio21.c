#include <stdio.h>

int main(){
	int opcao, soma, numero1, numero2, diferenca;
	double produto, divisao;

	printf("escolha a op��o: \n"
			"1- soma de dois n�meros. \n"
			"2- diferen�a entre 2 n�meros. \n"
			"3- produto entre 2 n�meros. \n"
			"4- divis�o ente 2 n�meros. \n"
			"op��o: ");
	fflush(stdout);
	scanf("%d", &opcao);

	printf("digite o primeiro numero: ");
	fflush(stdout);
	scanf("%d", &numero1);

	printf("digite o segundo numero: ");
	fflush(stdout);
	scanf("%d", &numero2);

	if(opcao == 4 && numero2 == 0){
		while(numero2 == 0){
			printf("numero invalido!! digite o outro numero: ");
			fflush(stdout);
			scanf("%d", &numero2);
		}
	}
	switch(opcao){

				case 1:
					soma = numero1 + numero2;
					printf("%d + %d = %d", numero1, numero2, soma);
					break;
				case 2:
					diferenca = numero1 - numero2;
					printf("a diferenca � de = %d", diferenca);
					break;
				case 3:
					produto = numero1 % numero2;
					printf("o produto dos numeros e: %.2lf", produto);
					break;
				case 4:
					divisao = numero1 / numero2;
					printf("%d / %d = %.2lf", numero1, numero2, divisao);
					break;
				default:
					printf("erro!!");
			}

}
