#include <stdio.h>

int main(){
	float notas[4], soma = 0, media = 0;


	for(int i = 0; i < 4; i++){
		printf("informe sua nota [%d]: ", i+1);
		fflush(stdout);
		scanf("%f", &notas[i]);
		while(notas[i] < 0 || notas[i] > 10){
			printf("notas invalida! digite novamente:");
			fflush(stdout);
			scanf("%f", &notas[i]);
		}
	}

	for(int i = 0; i < 4; i++){
		soma = soma + notas[i];
		media = soma / 4;
	}
	printf("a media das notas digitadas foi de: %.2f\n", media);



	for(int i = 0; i < 4; i++){
		printf("notas: %.2f\n",notas[i]);
	}







}
