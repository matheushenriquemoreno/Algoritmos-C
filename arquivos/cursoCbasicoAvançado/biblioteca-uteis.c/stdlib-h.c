#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// convers�o de strings

// atof() // converter string para double
// atoi() // converte string para inteiro
// atol() // converte string para long float

// gera��o de sequ�ncia pseudo-aleat�rio.

// rand () // gera n�mero aleat�rio
// srand() // inicializa o gerador de n�mero aleatorio

// Gerenciamento de mem�ria din�mica

// malloc()
// callof()
// free()
// realoc()

// pesquisa e ordana��o

// qsort() // ordena os elementos de um array

// Aritm�dica de inteiros

// abs() valor absoluto
// div() divisao inteira



int compara(int *x, int *y){ // fun��o que precisa se feita pra usar qsort
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
	printf("O quociente de (27/4) � %d\n", saida.quot);
	printf("O resto de (27 / 4) � %d\n", saida.rem);

	saida = div(27, 3);
	printf("O quociente de (27/3) � %d\n", saida.quot);
	printf("O resto de (27 / 3) � %d\n", saida.rem);







	int numeros[] = {6,2,9,3,7,1,5};
	qsort(numeros, 7, sizeof(int),(void *)compara); // ordena��o de array
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
	printf("O valor � %.2f", valor_d);
	printf("O valor � %d", valor_i);
	return 0;
}
