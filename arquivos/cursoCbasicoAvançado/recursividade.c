#include <stdio.h>
// recursividade

/*
 * recursividade � o ato de uma fun��o chamar a si mesma.
 *
 * OBS: � importante que a fun��o recursiva tenha uma condi��o de para.
 *
 *	5 primeiros n�meros da sequ�ncia de fibonacci
 *	1 1 2 3 5
 *
 * linguagens funcionais, Elixir
 */

int fib(int n){
	if(n == 0){
		return 0;
	}
	if(n == 1){
		return 1;
	}
	return fib(n -1) + fib (n -2);
}

int main(){
	int qtd;

	printf("informe o tamanho da sequ�ncia fibonacci: ");
	fflush(stdout);
	scanf("%d", &qtd);
	for(int i = 0; i < qtd; i++){
		printf("%d ", fib(i + 1));
	}
	return 0;
}
