#include <stdio.h>

int main(){
	float salario_base, salario_final, imposto;

	printf("informe seu salario base: ");
	fflush(stdout);
	scanf("%f", &salario_base);
	imposto = salario_base * 0.07;
	salario_final = (((salario_base * 0.05) + salario_base) - imposto);

	printf("o imposto sobre seu salario e de: R$%.2f\n"
			"o seu salario com os desconto e de: R$%.2f", imposto, salario_final);



}
