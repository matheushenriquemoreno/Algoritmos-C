#include <stdio.h>
#include <string.h>

int main(){

	 int idade;
	 double salario, altura;
	 char genero;
	 char nome[50];

	 printf("digite sua idade: ");
	 fflush(stdout);
	 scanf("%d", &idade);

	 printf("informe seu salario: ");
	 fflush(stdout);
	 scanf("%lf", &salario);

	 printf("digite o valor da altura: ");
	 fflush(stdout);
	 scanf("%lf", &altura);


	 printf("digite seu nome:  ");
	 fflush(stdout);
	 scanf("%s", nome); // vetor não precisa do &

	 genero = 'F';

	 printf("IDADE = %d\n", idade);
	 printf("SALARIO = %.2lf\n", salario);
	 printf("ALTURA = %.2lf\n", altura);
	 printf("GENERO = %c\n", genero);
	 printf("NOME = %s\n", nome);
	 return 0;



}

