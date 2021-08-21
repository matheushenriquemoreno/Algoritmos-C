#include <stdio.h>

int main(){
	int numero1, numero2, numero3;

		printf("informe 3 numeros: \n");
		fflush(stdout);
		scanf("%d %d %d", &numero1, &numero2, &numero3);

			while(numero2 <= 0 || numero3 <= 0){
			printf("digite novamente o numero 2 e 3: ");
			fflush(stdout);
			scanf("%d %d", &numero2, &numero3);
			}
	    printf("numeros multiplos dos numeros digitados: \n");
		for(int i = 0; i <= numero1; i++){
			if(i % numero1 == 0 || (i % numero2 == 0 || i % numero3 == 0)){
				printf("%d ", i);
			}
		}

		return 0;
}
