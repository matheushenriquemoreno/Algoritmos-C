#include <stdio.h>

int main(){
	int opcao, soma, numero1, numero2, diferenca;
	double produto, divisao;

	printf("escolha a opção: \n"
			"1- soma de dois números. \n"
			"2- diferença entre 2 números. \n"
			"3- produto entre 2 números. \n"
			"4- divisão ente 2 números. \n"
			"opção: ");
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
					printf("a diferenca é de = %d", diferenca);
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
