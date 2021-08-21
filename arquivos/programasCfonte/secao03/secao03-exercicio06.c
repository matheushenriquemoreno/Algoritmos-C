#include <stdio.h>
// faça um algoritmo que pergunte quanto você ganha por hora e o numero de horas trabalhadas no mês.
//calcule e mostre o total do seu slario no referido mês.

int main(){
	float valor_hora, salario;
	int horas_trabalhadas;

	printf("qual o valor que vc ganha por hora? ");
	fflush(stdout);
	scanf("%f", &valor_hora);

	printf("quantas horas você trabalhou neste mês? ");
	fflush(stdout);
	scanf("%d", &horas_trabalhadas);

	salario = (horas_trabalhadas * valor_hora);

	printf("Neste mês você vai receber R$ %.2f", salario);



}
