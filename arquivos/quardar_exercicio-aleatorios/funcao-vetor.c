#include <stdio.h>

void lerVetor(int tamanho, int vetor[]){
	for(int i = 0; i < tamanho; i++){
			printf("informe o valor vetor: [%d]", i + 1);
			fflush(stdout);
			scanf("%d", &vetor[i]);
		}
}

void somaVetor(int tamanho, int vetor1[], int vetor2[] , int soma[]){
	for(int i = 0; i < tamanho; i++){
			soma[i] = vetor1[i] + vetor2[i];
		}
}

void mostrarVetor(int tamanho,int vetorsoma[]){
		printf("soma dos dois vetores: \n");
		for(int i = 0; i < tamanho; i++){
			printf("%d\n", vetorsoma[i]);
		}
}

int main(){
	int tamanho;
	printf("informe o tamanho do vetor: ");
	fflush(stdout);
	scanf("%d",& tamanho);
	int vetor1[tamanho], vetor2[tamanho], soma[tamanho];

	lerVetor(tamanho, vetor1);
	printf("vetor 2 \n");
	lerVetor(tamanho, vetor2);
	somaVetor(tamanho, vetor1, vetor2, soma);
	mostrarVetor(tamanho,soma);

	return 0;
}




