#include <stdio.h>
// faça um algoritimo que converta metros para centimetros.

int main(){
	//declarando variaveis
	int metros, centimetros;

	//entradas
	printf("informe o valor em metros: ");
	fflush(stdout);
	scanf("%d", &metros);

	//processamentos
	centimetros = (metros * 100);

	//saida
	printf("%d metros em centimetros e %d", metros, centimetros);


}
