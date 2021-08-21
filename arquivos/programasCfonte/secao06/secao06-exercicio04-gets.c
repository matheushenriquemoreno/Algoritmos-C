//tendo como dados de entrada a altura e o sexo de uma pesso, contrua um algoritmo que calule seu peso ideal,
//utilizando as seguintes fórmulas:
//para homem = (72.7 * altura) - 58; para mulher = (62.1 * altura) -44.7;

#include <stdio.h>
#include <ctype.h>
int main(){
	// variaveis
	float altura, peso_ideal;
	char sexo;

	// entradas
	printf("informe sua altura: ");
	fflush(stdout);
	scanf("%f", &altura);
	gets(stdin);// corigir bug
	printf("informe o sexo m/f: ");
	scanf("%c",&sexo);

	if(tolower(sexo) == 'm') {// tolower = transforar letras em minusculas.
		peso_ideal = (72.7 * altura ) - 58;
		printf("O seu peso ideal seria de: %.2f", peso_ideal);
	}
	if(tolower(sexo) == 'f'){
		peso_ideal = (62.1 * altura) - 44.7;
		printf("o seu peso ideal seria de: %.2f", peso_ideal);
	}
	if(tolower(sexo) !='m' && tolower(sexo) != 'f'){ // != sibolo siginifica diferente. || operador or.&& operador e
		printf("sexo desconhecido!");
	}



}

