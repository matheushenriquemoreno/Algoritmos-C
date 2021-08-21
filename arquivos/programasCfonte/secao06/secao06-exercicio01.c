//ler uma variável numérica n e imprimi-la somente se a mesma for maior que 100, caso contrario imprimi-la
// com o valor zero.
#include <stdio.h>

int main(){
	int n;

	printf("informe um numero: ");
	fflush(stdout);
	scanf("%d", &n);
	if (n > 100){
		printf("%d", n);
	}else{
		n = 0;
		printf("%d",n);
	}
	return 0;
}
