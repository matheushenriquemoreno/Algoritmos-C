#include <stdio.h>

int main(){
	int numero;

	printf("informe um numero: ");
	fflush(stdout);
	scanf("%d", &numero);


	if(numero % 2 == 0){ // resto da divis�o por 2 � igual a 0
		printf("o numero %d � Par!", numero);
	}else{
		printf("o numero %d e �mpar!!", numero);
	}
	return 0;
}
