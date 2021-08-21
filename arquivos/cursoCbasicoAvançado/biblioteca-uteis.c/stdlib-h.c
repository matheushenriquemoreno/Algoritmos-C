#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// conversão de strings

// atof() // converter string para double
// atoi() // converte string para inteiro
// atol() // converte string para long float

// geração de sequência pseudo-aleatório.

// rand () // gera número aleatório
// srand() // inicializa o gerador de número aleatorio

// Gerenciamento de memória dinâmica

// malloc()
// callof()
// free()
// realoc()

// pesquisa e ordanação

// qsort() // ordena os elementos de um array

// Aritmédica de inteiros

// abs() valor absoluto
// div() divisao inteira



int compara(int *x, int *y){ // função que precisa se feita pra usar qsort
	if(*x > *y){
		return 1;
	}else if(*x == *y){
		return 0;
	}else{
		return -1;
	}
}

int main(){

	div_t saida;

	saida = div(27, 4);
	printf("O quociente de (27/4) é %d\n", saida.quot);
	printf("O resto de (27 / 4) é %d\n", saida.rem);

	saida = div(27, 3);
	printf("O quociente de (27/3) é %d\n", saida.quot);
	printf("O resto de (27 / 3) é %d\n", saida.rem);







	int numeros[] = {6,2,9,3,7,1,5};
	qsort(numeros, 7, sizeof(int),(void *)compara); // ordenação de array
	for(int i = 0; i < 7; i++){
		printf("%d\n", numeros[i]);
	}


	time_t t;
	// inicializar o gerador
	srand((unsigned) time(&t));

	// gerar 6 numeros entre 0 e 60;
	for(int i = 0; i< 6; i++){
		printf("%d\n", rand() % 61);
	}


	char valor_s[5];
	double valor_d;
	int valor_i;
	strcpy(valor_s,"4.5");
	//strcpy(valor_s,"4.a");

	valor_d = atof(valor_s);
	valor_i = atoi(valor_s);
	printf("O valor é %.2f", valor_d);
	printf("O valor é %d", valor_i);
	return 0;
}
