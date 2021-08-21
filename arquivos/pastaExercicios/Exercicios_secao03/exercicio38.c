#include <stdio.h>

int main(){
	float salario, novo_salario;

	printf("informe seu salario: ");
	fflush(stdout);
	scanf("%f", &salario);

	novo_salario = salario * 0.25 + salario;

	printf("o seu salario atual de R$ %.2f teve um aumento de 25%%\né foi para R$%.2f", salario, novo_salario);



}
