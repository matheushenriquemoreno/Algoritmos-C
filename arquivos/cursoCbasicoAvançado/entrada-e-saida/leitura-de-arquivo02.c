#include <stdio.h>

int main(){
	FILE *arq;
	char nome[100], *resultado;

	arq = fopen("arquivo.txt", "r");
	if(arq){
		while(!feof(arq)){// feof = file end of file
			resultado = fgets(nome, 100, arq);
			printf("Resultado: %d\n", resultado);
			if(resultado){
				printf("%s\n", nome);
			}
		}
	}else{
		printf("não achei o arquivo");
	}
	fclose(arq);
	return 0;
}
