#include <stdio.h>
#include <string.h>
#include <ctype.h>

// tipos de caracteres


// isalnum() // verifica se o caractere é alfanúmerico (abc1234)
// isalpha() // verifica se o caractere é alfabético (abcd...)
// isdigit() // verifica se o caracetere é um digito decimal (0123..)
// ispunct() // verifica se o caractere é uma pontuação (?!.)
// isspace() // se é um espaço ()
// isupper() // é maiuscula
// tolower() // converte para minúscula
// toupper() // converte para maiúscula



int main(){

	char teste = 'h';


	printf("convertendo minuscula %c \n", tolower(teste));
	printf("convertendo Maiúscula %c \n", toupper(teste));

	return 0;
}
