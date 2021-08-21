#include <stdio.h>
// vetores

// array uni-dimensional
// char nome[50];


int main(){
	//vetores e strings
	char nome[50];
	printf("qual seu nome? ");
	fflush(stdout);
	gets(nome);

	printf("ola %s\n", nome);
	char letras[26];
	// char = 'a' string = "ola"
	int contador = 0;
	for(int i = 97; i <= 122; i++){
		letras[contador] = i;
		contador += 1;
	}
	// imprimindo as letras e seus valores em decimal.
	for(int i  = 0; i < 26; i++){
		printf("%d == %c\n", letras[i], letras[i]);
	}

	//char l = 'l';
	//char n = 97;
}
