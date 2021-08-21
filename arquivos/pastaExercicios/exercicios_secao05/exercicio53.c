#include <stdio.h>

int main(){
	int linha_atual = 1, valor = 1, valor_de_quebra = 1,linha_maxima;
	printf("informe a quantidade de linhas: ");
	fflush(stdout);
	scanf("%d", &linha_maxima);

	while(linha_atual <= linha_maxima){
		printf(" %d", valor);
		if(valor == valor_de_quebra){
			printf(" \n");
			linha_atual += 1;
			valor_de_quebra = valor + linha_atual;
		}
		valor += 1;
	}
}
