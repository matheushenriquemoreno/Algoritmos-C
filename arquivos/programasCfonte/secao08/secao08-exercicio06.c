//Fa�a um programa que receba um c�digo num�rico inteiro e um vetor de cinco posi��es de n�meros reais.
//Se o c�digo for zero, termine o programa. se o c�digo for 1, mostre o vetor na onde direta.
//Se o c�digo for 2, mostre o vetor na ordem inversa.

#include <stdio.h>

int main(){
	float vetor[5];
	int codigo;


	printf("informe o codigo:");
	fflush(stdout);
	scanf("%d", &codigo);
	if(codigo != 0){
		for(int i = 0; i < 5; i++){
			printf("informe um numero real: ");
			fflush(stdout);
			scanf("%f", & vetor[i]);
		}
		if(codigo == 1){
			for(int i = 0; i < 5; i++){
				printf("%.2f\n", vetor[i]);
			}
		}
		if(codigo == 2){
			for(int i = 4; i >= 0; i--){
				printf("%.2f\n", vetor[i]);
			}
		}
	}


}
