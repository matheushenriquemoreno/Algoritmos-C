#include <stdio.h>
// FILE == arquivo


int main(){
	FILE *arq;
	// fopem(nome-do-arquivo, forma-de-abertura-do-arquivo)
	// w - abrir o arquivo para escrita ( se o arquivo ja exixtir, ser� sobrescirto com um novo zerado)
	// r - abrir o arquivo para leitura (n�o podemos escrever no arquivo)
	// a - abrir o arquivo para adi��o de conte�do (se o arquivo j� exixtirm o conte�do ser� adicinado com linhas abaixo)

	arq = fopen("arquivo.txt", "w");

	// sempre que a gente finalizar a manipula��o de um arquivo, devemos fech�-lo
	fclose(arq);

	return 0;
}
