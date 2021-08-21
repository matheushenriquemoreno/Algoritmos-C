#include <stdio.h>
// protótipo de função
/*
 * Assinatura das funções
 *
 * - tipo de retorno
 * - nome
 * - parâmetros de entrada
 */
int soma(int num1, int num2);
void mensagem();

int main(){
	int n1, n2;
	printf("informe dois numeros: \n");
	fflush(stdout);
	scanf("%d %d", &n1, &n2);

	int ret = soma(n1, n2);
	printf("a soma de %d com %d é %d", n1, n2, ret);

	mensagem();
	return 0;
}

int soma(int num1 , int num2){
	return num1 + num2;
}

void mensagem(){
	printf("bem vindo.");
}

