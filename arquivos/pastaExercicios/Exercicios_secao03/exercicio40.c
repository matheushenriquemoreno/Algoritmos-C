#include <stdio.h>

int main(){
	int dias_trabalhados;
	float salario, salario_descontado, imposto;

	printf("informe quantos dias trabalhados: ");
	fflush(stdout);
	scanf("%d", &dias_trabalhados);

	salario = dias_trabalhados * 30;
	imposto = salario * 0.08;
	salario_descontado = salario - imposto;

	printf("o seu salario com base no dias trabalhados é R$%.2f\n"
			"mas com o desconto do imposto de renda fica R$%.2f",salario, salario_descontado);


}
