#include <stdio.h>

int main(){
	FILE *arq;
	char fruta[10];
	arq = fopen("frutas.txt", "a"); // a // appende - adicionar.

	if(arq){
		printf("informe uma fruta, ou 0 para sair: \n");
		fflush(stdout);
		fgets(fruta, 10, stdin); // stdin = standarf input -> entrada padr�o
		while(fruta[0] != '0'){
			fputs(fruta, arq);
			printf("informe uma fruta, ou 0 para sair: \n");
			fflush(stdout);
			fgets(fruta, 10, stdin);
		}
	}else{
		printf("n�o foi possivel criar o arquivo.");
	}
	fclose(arq);
	return 0;

}
