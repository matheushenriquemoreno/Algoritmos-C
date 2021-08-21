#include <stdio.h>
#include <string.h> //biblioteca string

int main(){
	double x;
	x = 2.3456;
	printf("%.2lf\n", x);

	int idade;
	double salario;
	char nome[50];
	char sexo;
	idade = 32;
	salario = 4560.9;
	strcpy(nome, "Maria Silva");
	sexo = 'F';
	printf("A funcionaria %s, sexo %c, ganha %.2lf e tem %d anos\n", nome, sexo,
	salario, idade);


}
