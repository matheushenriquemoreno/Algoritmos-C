#include <stdio.h>

int main(){
	int numero;

	printf("informe um numero: ");
	fflush(stdout);
	scanf("%d", &numero);

	if(numero % 3 == 0 && numero % 5 == 0){
		numero = 0;
		if(numero == 0){
			printf("erro!!");
		}
	}else if (numero % 3 == 0){
		printf("numero divisivel por 3!!");
	}else if(numero % 5 == 0){
		printf("numero divisivem por 5!!");
	}else{
		printf("erro!!");
	}

}
