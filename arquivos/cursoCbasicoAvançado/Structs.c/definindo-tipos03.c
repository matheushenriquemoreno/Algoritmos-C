#include <stdio.h>
#include <string.h>
// strutc -> estrutura
struct st_aluno{ // usar st_ para lembrar que e uma struct
	char matricula[10];
	char nome [100];
	char curso[50];
	int ano_nascismento;
}alunos[5];



int main(){
	// struct st_alunos[5];
	for(int i = 0; i < 5; i++){
	printf("informe a matricula do aluno [%d]: ", i +1);
	fflush(stdout);
	fgets(alunos[i].matricula, 10, stdin);

	printf("informe o nome do aluno [%d]: ", i +1);
	fflush(stdout);
	fgets(alunos[i].nome, 100, stdin);

	printf("informe o curso do aluno [%d]: ", i +1);
	fflush(stdout);
	fgets(alunos[i].curso, 50, stdin);

	printf("informe o ano de nascimento do aluno [%d]: ", i +1);
	fflush(stdout);
	scanf("%d", &alunos[i].ano_nascismento);
	getchar();
	}
	for(int i = 0; i < 5; i++){
	printf("=============== Dados do Aluno %d ===============\n", i + 1);
	printf("matricula: %s\n", alunos[i].matricula);
	printf("nome: %s\n", alunos[i].nome);
	printf("curso: %s\n", alunos[i].curso);
	printf("ano de nascimento: %d\n", alunos[i].ano_nascismento);
	}

}
