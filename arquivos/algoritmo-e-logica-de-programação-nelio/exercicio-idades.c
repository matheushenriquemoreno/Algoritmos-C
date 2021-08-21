#include <stdio.h>

int main(){
	char nome1[50], nome2[50];
	int idade1, idade2;
	double idade_media;

	printf("Dados da primeira pessoa:\n");
	printf("nome:");
	fflush(stdout);
	gets(nome1);
	printf("idade:");
	fflush(stdout);
	scanf("%d", &idade1);

	printf("Dados da segunda pessoa:\n");
	printf("nome:");
	fflush(stdout);
	fseek(stdin, 0, SEEK_END);
	gets(nome2);
	printf("idade:");
	fflush(stdout);
	scanf("%d", &idade2);


	idade_media = (double)(idade1 + idade2) / 2.0 ;

	printf("A idade media de %s e %s eh de %.1lf anos", nome1, nome2, idade_media);

}
