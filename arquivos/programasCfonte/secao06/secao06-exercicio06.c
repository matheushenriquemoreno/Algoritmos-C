//elabore um algoritmo que leia as variaveis'c' e 'n', respectivamente c�digo e n�mero de horas tabalhadas de um operario
//calcule o sal�rio sabendo-se que ele ganha R$ 10,00 por hora, Quando o n�mero de horas exceder a 50calcule o exesso
//de pagamento armazenando-o na vari�vel 'e'. Caso contr�rio zerar tal vari�vel.
//salario total e o salario excedente.
#include <stdio.h>

int main(){
	int c;
	float n, e =0, salario, valor_hora =10.00;

	printf("digite seu codigo: ");
	fflush(stdout);
	scanf("%d", &c);
	printf("informe a quantidade de horas trabalhadas: ");
	fflush(stdout);
	scanf("%f", &n);

	if(n > 50){
		e = (n - 50) * 20.00;
		salario = (50 * valor_hora) + e;
		printf("o seu salario total seria de: R$ %.2f\n", salario);
		printf("o total da sua hora extra e de: R$ %.2f", e);
	}else{
		salario = n * valor_hora;

		printf("Salario total: R$ %.2f\n", salario);
		printf("valor do excedente: R$ %.2f", e);
	}



}
