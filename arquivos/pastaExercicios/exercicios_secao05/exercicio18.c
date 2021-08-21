#include <stdio.h>

int main(){
	int qtd_numero, contador = 0, maior = 0, numero_digitado;

	printf("informe a quantidades de numero que deseja digitar: ");
	fflush(stdout);
	scanf("%d", &qtd_numero);

	for(int i = 0; i < qtd_numero; i++){
		printf("digite um numero: ");
		fflush(stdout);
		scanf("%d",&numero_digitado);
		if(numero_digitado > maior){
			maior = numero_digitado;
			contador++;
		}
	}
	printf("teve um total de %d maiores, e o maior foi %d",contador, maior);
}
