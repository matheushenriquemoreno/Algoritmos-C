#include <stdio.h>

int main(){
	int vetor[8], x, y, somax = 0, somay = 0, soma;

	for(int i = 0; i < 8; i++){
		printf("popule o vetor, posi��o %d: ", i);
		fflush(stdout);
		scanf("%d", &vetor[i]);
	}

	printf("informe dois numeros correspondendo a posi��o do vetor: \n");
	fflush(stdout);
	scanf("%d %d", &x, &y);


	for(int i = 0; i < 8; i++){
		if(x == i){
			somax = vetor[i];
		}else if(y == i){
			somay = vetor[i];
		}
	}

//   LOGICA PARA BUSCAR UM NUMERO EM UMA POSI��O DO VETOR.
//	for(int i = 0; i < 8; i++){
//		if(vetor[i] == x){
//			printf("o numero %d foi encontrado na %d posi��o do vetor!!\n", x, i);
//			somax = vetor[i];
//		}else if(vetor[i] == y){
//			printf("o numero %d foi encontrado na %d posi��o do vetor!!\n", y, i);
//			somay = vetor[i];
//		}
//	}


	printf("Vetor digitado: \n");
	for(int i = 0; i < 8; i++){
		printf("%d ", vetor[i]);
	}
	soma = somax + somay;
	printf("\nA soma dos valores encontrados � = %d\n", soma);



	return 0;
}
