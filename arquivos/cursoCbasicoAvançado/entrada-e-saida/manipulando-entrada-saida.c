#include <stdio.h>
// FILE == arquivo


int main(){
	FILE *arq;
	// fopem(nome-do-arquivo, forma-de-abertura-do-arquivo)
	// w - abrir o arquivo para escrita ( se o arquivo ja exixtir, será sobrescirto com um novo zerado)
	// r - abrir o arquivo para leitura (não podemos escrever no arquivo)
	// a - abrir o arquivo para adição de conteúdo (se o arquivo já exixtirm o conteúdo será adicinado com linhas abaixo)

	arq = fopen("arquivo.txt", "w");

	// sempre que a gente finalizar a manipulação de um arquivo, devemos fechá-lo
	fclose(arq);

	return 0;
}
