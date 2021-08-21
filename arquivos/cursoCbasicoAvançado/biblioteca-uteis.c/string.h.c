#include <stdio.h>
#include <string.h>

// operações string


// strcpy() // copia String
// srtcat() // contatena strings
// strcmp() // comparar duas Strings

// busca

// strchr() localiza primeira ocorrência de caractere em uma string
// strtok() divide uma string em sub-strings com base em um caractere

// srtlen() // retorna o tamanho da string



int main(){
	char str1[20], str2[20],str3[50], str4[50];

	strcpy(str1, "quinta-");
	strcpy(str2, "feira");

	strcat(str1, str2);
	printf("%s", str1);

	strcpy(str3, "laranja");
	strcpy(str4, "laranja");

	if(strcmp(str3, str4)){
		printf("\nNão são iguais\n");
	}else{
		printf("\nsão iguais\n");
	}

	char email[] = "pedro@gmail.com";
	char busca = '@';

	char *ret = strchr(email, busca);
	printf("\nApartir do %c está %s\n", busca, ret);

	printf("\nusuario: %s\n", strtok(email, "@"));
	char email1[] = "pedro@gmail.com";
	printf("tamanho da string: %d", strlen(email1));










	return 0;
}
