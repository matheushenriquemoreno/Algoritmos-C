#include <stdio.h>

int main(){
	int numero1,numero2, soma_pares = 0, multi_impares = 1;

	printf("digite um primeiro numero: ");
	fflush(stdout);
	scanf("%d", &numero1);

	printf("digite o segundo numero: ");
	fflush(stdout);
	scanf("%d", &numero2);
	while(numero2 <= numero1){
		printf("digite o segundo numero novamente: ");
		fflush(stdout);
		scanf("%d", &numero2);
	}

	for(int i = numero1; i <= numero2; i++){
		if(i % 2 == 0){ // verifica par
			soma_pares += i;
		}else if(i % 2 != 0){ // verifica impar
			multi_impares *= i;
		}
	}
	//printf("contador = %d\n", contador);
	printf("a soma dos pares = %d", soma_pares);
	printf("\nAmultiplicação dos impares = %d", multi_impares);



}
