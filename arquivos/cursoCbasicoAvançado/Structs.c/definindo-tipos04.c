#include <stdio.h>
#include <string.h>
// strutc -> estrutura
struct st_contato{ // usar st_ para lembrar que e uma struct
	char nome [100];
	int ano_nascismento;
	char telefone[20];
	char email[100];
	char idade[10];
};
struct st_agenda{
	struct st_contato contatos [100];
}agenda;


int main(){

	for(int i = 0; i < 1; i++){

	printf("informe seu nome: ");
	fflush(stdout);
	fgets(agenda.contatos[i].nome, 100, stdin);

	printf("informe sua idade: ");
	fflush(stdout);
	fgets(agenda.contatos[i].idade, 10, stdin);

	printf("informe o ano de nascimento: ");
	fflush(stdout);
	scanf("%d", &agenda.contatos[i].ano_nascismento);
	getchar(); // utilizar apos scanear uma string.

	printf("informe o seu telefone: ");
	fflush(stdout);
	fgets(agenda.contatos[i].telefone, 20, stdin);

	printf("informe o email: ");
	fflush(stdout);
	fgets(agenda.contatos[i].email, 100, stdin);

	}
	printf("=============== Agenda de contatos ===============\n");
	for(int i = 0; i < 1; i++){
	printf("=============== Contato %d =============\n", i + 1);
	printf("Nome: %s\n", strtok(agenda.contatos[i].nome, "\n"));
	printf("Telefone: %s\n", strtok(agenda.contatos[i].telefone, "\n"));
	printf("E-mail: %s\n", strtok(agenda.contatos[i].email, "\n"));
	printf("Ano de nascimento: %d\n", agenda.contatos[i].ano_nascismento);
	printf("Idade: %s\n", agenda.contatos[i].idade);
	}

}
