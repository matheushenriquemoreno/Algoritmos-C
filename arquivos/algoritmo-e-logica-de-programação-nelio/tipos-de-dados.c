#include <stdio.h>
#include <string.h>

int main(){
	int idade;
	double salario, altura;
	char genero;
	char nome[50]; //char nome[50] = "Maria Silva";


	idade = 20;
	salario= 5800.5;
	altura = 1.63;
	genero = 'f';
	strcpy(nome, "maria silva");// quardar uma string

	printf("idade = %d\n", idade);
	printf("salario = %.2lf\n", salario);
	printf("altura = %.2lf\n", altura);
	printf("genero = %c\n", genero);
	printf("nome = %s\n", nome);

	return 0;
}
