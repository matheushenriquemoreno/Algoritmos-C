#include <stdio.h>

int main(){
	int numero;

	printf("informe um numero: ");
	fflush(stdout);
	scanf("%d", &numero);
	printf("divisores do numero %d:\n", numero);
	for(int i = 1; i <= numero; i++){

		if(numero % i == 0){ // logica pra descobir os numeros divisiveis por um numero;
			printf("%d\n",i );// o divisor de um numero e quando o resto da divisão e = 0
		}
	}

}
