#include <stdio.h>

int main(){
	int pares, contador = 0, contador_pares = 0;


	   do{
		printf("informe um numero inteiro: ");
		fflush(stdout);
		scanf("%d", &pares);
		if(pares % 2 == 0){
			if(pares >= 1000){
				break;
			}
			printf("numero %d e par!!\n", pares);
			contador_pares ++;
		}
		contador ++;
	}while(pares != 1000);

	printf("O total de numeros lidos foi de: %d \n… o total de pares foi %d.", contador, contador_pares);

}
