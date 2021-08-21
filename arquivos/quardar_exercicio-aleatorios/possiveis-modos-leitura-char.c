#include <stdio.h>
#include <string.h>
// possiveis funções para uso:

//  Para ler um texto de tamanho N até a quebra de linha

void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}



int main(){
	 char nomeCompleto1[50];
	 printf("Digite seu nome completo 1: ");
	 fflush(stdout);
	 ler_texto(nomeCompleto1, 50);


	 char nomeCompleto2[50];
	 printf("Digite seu nome completo 2: ");
	 fflush(stdout);
	 fgets(nomeCompleto2, 50,stdin);
	 //scanf("%s", nomeCompleto2); // funciona so ate o primeiro espaco // matheus henrique -> matheus


	 char nomeCompleto3[50];
     printf("Digite seu nome completo 3: ");
     fflush(stdout);
     fgets(nomeCompleto3, 50,stdin);

     printf("nome: %s\n", nomeCompleto1);
     printf("nome: %s\n", strtok(nomeCompleto2, "\n"));
     printf("nome: %s\n", strtok(nomeCompleto3, "\n")); // strtok(nomeCompleto1, "\n") = forma de sumir a quebra de linha ao mostrar nomes ou dados que possue string.

 // unico metodo funcional função = ler_texto(nome_variavel, tamanho_vetor) -> strtok(nome_variavel, "\n").




}
