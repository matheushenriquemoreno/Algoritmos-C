#include <stdio.h>

int main(){
	float valor_hora, horas_trabalhadas, salario, salario_com_aumento;

	printf("informe o valor da sua hora de trabalho: ");
	fflush(stdout);
	scanf("%f", &valor_hora);

	printf("infome quantas horas trabalhadas no mês: ");
	fflush(stdout);
	scanf("%f", &horas_trabalhadas);

	salario = valor_hora * horas_trabalhadas;
	salario_com_aumento = salario * 0.10 + salario;
	printf("seu salario: R$ %.2f\n", salario);
	printf("seu salario com aumento de 10%%: R$ %.2f\n",salario_com_aumento);




}
