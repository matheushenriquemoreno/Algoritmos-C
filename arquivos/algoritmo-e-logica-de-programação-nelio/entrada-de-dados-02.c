#include <stdio.h>
#include <string.h>


void limpar_entrada(){
	char c;
	while((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length){
	fgets(buffer, length, stdin);
	strtok(buffer, "\n");
}

int main(){
		 int idade1, idade2;
		 char nome[50], nome2[50];

		 printf("digite sua idade: ");
		 fflush(stdout);
		 scanf("%d", &idade1);


		 printf("digite seu nome: ");
		 fflush(stdout);
		 limpar_entrada();
		 ler_texto(nome, 50);


		 //fgets(nome,50,stdin);  leitura do texto com espaços
		 //strtok(nome,"\n");  evitar ler o enter que apertamos para dar procedencia no codigo.

		 printf("digite sua idade: ");
		 fflush(stdout);
		 scanf("%d", &idade2);

		 printf("digite seu nome: ");
		 fflush(stdout);
		 limpar_entrada();
		 ler_texto(nome2, 50);


		 printf("IDADE = %d\n", idade1);
		 printf("NOME1 = %s\n", nome);
		 printf("IDADE = %d\n", idade2);
		 printf("NOME2 = %s\n", nome2);
		 return 0;



}
