#include <stdio.h>
#include <string.h>
#include <ctype.h>

// tipos de caracteres


// isalnum() // verifica se o caractere � alfan�merico (abc1234)
// isalpha() // verifica se o caractere � alfab�tico (abcd...)
// isdigit() // verifica se o caracetere � um digito decimal (0123..)
// ispunct() // verifica se o caractere � uma pontua��o (?!.)
// isspace() // se � um espa�o ()
// isupper() // � maiuscula
// tolower() // converte para min�scula
// toupper() // converte para mai�scula



int main(){

	char teste = 'h';


	printf("convertendo minuscula %c \n", tolower(teste));
	printf("convertendo Mai�scula %c \n", toupper(teste));

	return 0;
}
