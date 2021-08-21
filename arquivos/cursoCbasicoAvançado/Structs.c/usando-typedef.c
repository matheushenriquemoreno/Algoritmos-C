#include <stdio.h>
#include <stdlib.h>
// typedef -- redefinir tipos

struct tAluno{
// utilizando os tipos redefinidos dentro da struct

int matricula;
float prova1;
float prova2;
};
// redefinindo a struct para encurtar o comando na declaração
typedef struct tAluno mediaAluno;


int main(){
	// declarando struct normal

	// struct taluno aluno;

	// com typedef
	mediaAluno aluno;
	typedef float nota;
	nota media;

	printf("digite sua matricula: ");
	fflush(stdout);
	scanf("%d", &aluno.matricula);

	printf("digite a nota do P1: ");
	fflush(stdout);
	scanf("%f", &aluno.prova1);

	printf("digite a nota da p2: ");
	fflush(stdout);
	scanf("%f", &aluno.prova2);

	media = (aluno.prova1 * 0.4) + (aluno.prova2 * 0.6);

	printf("O aluno com a matricula %d obiteve as notas %.2f na P1 e %.2f na P2. É foi: ", aluno.matricula, aluno.prova1, aluno.prova2);
	if(media >= 6.0){
		printf("aprovado!!");
	}else{
		printf("reprovado!!");
	}


	return 0;
}
