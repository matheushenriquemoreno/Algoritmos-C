#include <stdio.h>
// fa�a um algoritmo que pergunte quanto voc� ganha por hora e o numero de horas trabalhadas no m�s.
//calcule e mostre o total do seu slario no referido m�s.

int main(){
	float valor_hora, salario;
	int horas_trabalhadas;

	printf("qual o valor que vc ganha por hora? ");
	fflush(stdout);
	scanf("%f", &valor_hora);

	printf("quantas horas voc� trabalhou neste m�s? ");
	fflush(stdout);
	scanf("%d", &horas_trabalhadas);

	salario = (horas_trabalhadas * valor_hora);

	printf("Neste m�s voc� vai receber R$ %.2f", salario);



}
