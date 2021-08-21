#include <stdio.h>

int main(){
	double prova1, prova2, prova3, media;


	printf("informe a nota da prova 1: ");
	fflush(stdout);
	scanf("%lf", &prova1);

	printf("informe a nota da prova 2: ");
	fflush(stdout);
	scanf("%lf", &prova2);

	printf("informe a nota da prova 3: ");
	fflush(stdout);
	scanf("%lf", &prova3);

	media = prova1 + prova2 +prova3 * 2.0;
	media /= 5;
	if(media >= 6.0){
		printf("aprovado!! media de: %.2lf", media);
	}else{
		if(media < 6.0){
			printf("reprovado!! media de: %.2lf", media);
		}
	}



	return 0;
}
