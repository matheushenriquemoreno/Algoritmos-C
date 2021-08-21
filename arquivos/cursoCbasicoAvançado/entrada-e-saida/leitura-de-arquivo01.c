#include <stdio.h>

int main(){
	FILE *arq;
	char c;
	arq = fopen("arquivo.txt", "r");

	if(arq){
		while((c = getc(arq)) != EOF){
			printf("%c", c);// EOF = end of file \\ fim do arquivo
		}
	}else{
		printf("não achei o arquivo");
	}

	fclose(arq);
	return 0;
}
