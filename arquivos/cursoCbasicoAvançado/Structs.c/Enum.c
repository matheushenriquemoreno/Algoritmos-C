#include <stdio.h>


// Enum -> enumeração

enum dias_da_semana{
	segunda,
	terca,
	quarta,
	quinta,
	sexta,
	sabado,
	domingo
};
int main(){
	enum dias_da_semana d1, d2;
	int numeros [5];

	numeros[0] = 1;
	numeros[4] = 9;

	d1 = quinta;
	d2 = 4;

	if (d1 == d2){
		printf("os dias são iguals...\n");

	}else {
		printf("os dias não são iguais\n");
	}
	printf("numero [0] = [%d]\n", numeros[0]);
	printf("numero [4] = [%d]\n", numeros[4]);
	printf("numero [14] = [%d]\n", numeros[14]);
	return 0;
}
