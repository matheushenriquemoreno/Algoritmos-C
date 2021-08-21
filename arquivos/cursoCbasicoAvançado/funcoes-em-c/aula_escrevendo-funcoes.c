#include <stdio.h>

// aula Escrevendo funções / usando
// main -> principal

// Estrutura das funções
/*
 * tipo de retorno
 * nome
 * parâmentros de entrada (opcional)
 * implementação
 * retorno (opcional)
 *
 *
 */
void mensagem(){ // essa função não tem retorno, pois ela so executa a instrução dada.
	printf("bem-vindo!!\n");
}

int soma(int numero1, int numero2){
	int resposta = numero1 + numero2;
	return resposta;
}

void proximo_char(char caractere){
	printf("%c ", caractere +1);
}

int main(){
	mensagem();

	//int retorno = soma(4, 6);
	//printf("%d\n", retorno);
	printf("retorno = %d\n", soma(4,6));

	char cara = 'a';
	proximo_char(cara);

	return 0;
}
