# include <stdio.h>

int main(){
	int numeros [3];
	int soma = 0;

	for(int i = 0; i < 3; i++){

	printf("informe um numero inteiro: ");
	fflush(stdout);
	scanf("%d", &numeros[i]);
	}
	for(int i = 0; i < 3; i++){
		printf("%d\n",numeros[i]);
	}
	for(int i = 0; i < 3; i++){
		soma = soma + numeros[i];// calculo soma dos numeros digitados no vetor.
	}
	printf("soma dos numeros digitados = %d", soma);


}
