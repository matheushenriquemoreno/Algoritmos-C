#include <stdio.h>

int main(){
	int intervalo1, intervalo2, soma_impares = 0;
	printf("informe um valor inicial e um final: \n");
	fflush(stdout);
	scanf("%d %d", &intervalo1, &intervalo2);

	if(intervalo1 >= intervalo2){
		printf("intervalo de valores inválido!!");
	}else{
		for(int i = intervalo1; i <= intervalo2; i++){
				if(i % 2 != 0){
					soma_impares += i;
				}
			}
		printf("soma dos impares nesse intervalo = %d", soma_impares);
	}




	return 0;
}
