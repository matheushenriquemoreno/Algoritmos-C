//Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome de usuario,
//mostrando uma mensagem de erro e voltando a pedir informações.

#include <stdio.h>
#include <string.h>

int main(){
	//variaveis
	char nome[100], senha[100];
	// char 'a'; string "asfasfasfas";



	printf("informe o seu nome: ");
	fflush(stdout);
	gets(nome);//utiliza pra guardar dados em char
	printf("informe a sua senha: ");
	fflush(stdout);
	gets(senha);

	while(!strcmp(nome, senha)) { // !strcmp vai ser verdadeiro somente quando o usuario digitar senha diferente do nome.
		printf("nome de usuario e senha devem ser diferentes!\n");
		printf("informe o seu nome: ");
		fflush(stdout);
		gets(nome);
		printf("informe a sua senha: ");
		fflush(stdout);
		gets(nome);
	}

}
