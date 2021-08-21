#include <stdio.h>

int main(){
	double vetor[5];
	int codigo;
	for(int i = 0; i < 5; i++){
		printf("popule o vetor[%d]: ", i+1);
		fflush(stdout);
		scanf("%lf", &vetor[i]);
	}
	printf("digite o codigo: ");
	fflush(stdout);
	scanf("%d", &codigo);


	if(codigo == 1){
		printf("====== Vetor ordem direta ======\n");
		for(int i = 0; i < 5; i++){
			printf("%.2lf ", vetor[i]);
		}
	}else if(codigo == 2){
		printf("====== Vetor ordem inversa ======\n");
		for(int i = 4; i >= 0; i--){
			printf("%.2lf ", vetor[i]);
		}
	}else{
		printf("codigo invalido.");
	}
	return 0;
}
