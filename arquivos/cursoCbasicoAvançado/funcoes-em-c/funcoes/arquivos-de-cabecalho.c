#include <stdio.h>
#include "ajuda.h" // biblioteca feita pelo programado.



int main(){
	int n1, n2, ret_s, ret_m;
	mensagem();

	printf("informe dois numeros: ");
	fflush(stdout);
	scanf("%d %d", &n1, &n2);

	ret_s = soma(n1, n2);

	printf("A soma de %d com %d é %d\n", n1, n2, ret_s);

	ret_m = multiplicacao(n1, n2);
	printf("A multiplicação de %d com %d é %d\n", n1, n2, ret_m);


	return 0;
}
