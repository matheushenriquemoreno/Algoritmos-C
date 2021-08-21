#include <stdio.h>

int main(){
	int vetor_notas[4], soma = 0, media_geral,contador;
	printf("informe suas notas: \n");
	for(int i = 0; i < 4; i++){
		printf("nota (%d): ", i + 1);
		fflush(stdout);
		scanf("%d", &vetor_notas[i]);
	}
	for(int i = 0; i < 4; i++){
		soma = soma + vetor_notas[i];
		contador = i++;
	}

	media_geral = soma / contador;
	printf("media: %d",media_geral);








}
