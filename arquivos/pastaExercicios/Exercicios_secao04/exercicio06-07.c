#include <stdio.h>

int main(){
	int diferenca, numero1, numero2, maior = 0;

	printf("informe dois numeros: \n");
	fflush(stdout);
	scanf("%d %d", &numero1, &numero2); // recebendo dois numero dentro de uma unica scanf.

	if(numero1 == numero2){
		printf("numeros iguais!!\n");
		while(numero1 == numero2){
		printf("digite os numeros: \n");
		fflush(stdout);
		scanf("%d %d", &numero1, &numero2);
		if(numero1 > numero2){
			diferenca = numero1 - numero2;
			printf("%d maior que %d, e a difereça e de: %d", numero1, numero2, diferenca);
		}else if(numero2 > numero1){
			diferenca = numero2 - numero1;
			printf("%d maior que %d, e a diferença e de: %d", numero2, numero1, diferenca);
		}
	}

	}else if(numero1 > numero2){
		maior = numero1;
		diferenca = numero1 - numero2;
		printf("%d maior que %d, e a difereça e de: %d", maior, numero2, diferenca);

	}else if(numero2 > numero1){
		maior = numero2;
		diferenca = numero2 - numero1;
		printf("%d maior que %d, e a diferença e de: %d", maior, numero1, diferenca);
	}





}
