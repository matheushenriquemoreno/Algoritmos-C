//construa um algoritmo que leia 10 valores inteiros e positivos e:
//A) encontre o maior valor
//B) encontre o menor valor
//C) calcule a média dos números lidos

#include <stdio.h>

int main(){
	int valor, maior = -999, menor = 999, soma = 0;
	float media;

	for(int i = 0; i < 10 ; i++){
		printf("informe um valor: ");
		fflush(stdout);
		scanf("%d", &valor);
		if(valor > 0){
			if(valor > maior){
				maior = valor;
			}
			if(valor < menor){
				menor = valor;
			}
			soma = soma + valor;
		}else{
			i--; // inverso de i++
		}

	}
	media = soma / 10;
	printf("O maior numero é: %d\n", maior);
	printf("O menor numero é: %d\n", menor);
	printf("A media dos numeros informados e de: %.2f", media);


}
