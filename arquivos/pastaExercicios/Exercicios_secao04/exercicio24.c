#include <stdio.h>

int main(){
	double produto, produto_com_imposto;
	char estado[2];

	printf("informe o valor do produto ");
	fflush(stdout);
	scanf("%lf", &produto);


	printf("informe qual estado seu estado entre: SP, MG, RJ, MS: ");
	fflush(stdout);
	scanf("%s", estado);


	if ( strcmp("SP", estado) == 0){ // comparação de char 0 iguais 1 falso.
		produto_com_imposto = (produto * 0.12) + produto;
		printf("o valor do produto acrecentado com o imposto do seu estado e de: R$ %.2lf", produto_com_imposto);
	}
	else if(strcmp("MG", estado) == 0){
		produto_com_imposto = (produto * 0.07) + produto;
		printf("o valor do produto acrecentado com o imposto do seu estado e de: R$ %.2lf", produto_com_imposto);
	}
	else if(strcmp("RJ", estado) == 0){
		produto_com_imposto = (produto * 0.15) + produto;
		printf("o valor do produto acrecentado com o imposto do seu estado e de: R$ %.2lf", produto_com_imposto);
	}
	else if(strcmp("MS", estado) == 0){
		produto_com_imposto = (produto * 0.08);
		printf("o valor do produto acrecentado com o imposto do seu estado e de: R$ %.2lf", produto_com_imposto);
	}else{
		printf("erro!!");
	}

}



