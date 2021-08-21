#include <stdio.h>
#include <string.h>
// strutc -> estrutura
struct st_aluno{ // usar st_ para lembrar que e uma struct
	char matricula[10];
	char nome [100];
	char curso[50];
	int ano_nascismento;
}aluno1;



int main(){
	struct st_aluno aluno1;

	printf("informe a matricula do aluno: ");
	fflush(stdout);
	fgets(aluno1.matricula, 10, stdin);

	printf("informe o nome do aluno: ");
	fflush(stdout);
	fgets(aluno1.nome, 100, stdin);

	printf("informe o curso do aluno: ");
	fflush(stdout);
	fgets(aluno1.curso, 50, stdin);

	printf("informe o ano de nascimento do aluno: ");
	fflush(stdout);
	scanf("%d", &aluno1.ano_nascismento);

	printf("=============== Dados do Aluno ===============\n");
	printf("matricula: %s\n", aluno1.matricula);
	printf("nome: %s\n", aluno1.nome);
	printf("curso: %s\n", aluno1.curso);
	printf("ano de nascimento: %d\n", aluno1.ano_nascismento);


}
