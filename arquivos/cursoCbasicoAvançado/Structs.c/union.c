#include <stdio.h>
#include <string.h>


// A union, separa e utiliza o espa�o da maior vari�vel.
union pessoa{
	char nome[100]; // 1 char = 1 byte -> 1 * 100 byte
	int idade;  // 4 bytes -> total de 104 bytes
};


int main(){

	union pessoa pes;

	strcpy(pes.nome, "angelina jolie");
	printf("dados de %s\n", pes.nome);


	pes.idade = 39;
	printf("ela tem %d anos\n", pes.idade);

	printf("dados de %s\n", pes.nome);


	printf("a variavel 'pes' est� ocupando %ld bytes em mem�ria.", sizeof(pes));















//	int numero = 42;
//	float nota = 7.9;
//	char letra = 'd';
//	double outraNota = 19.4;
//
//	printf("A variavel 'numero tem valor %de ocupa %ld bytes em mem�ria\n", numero, sizeof(numero));
//	printf("A variavel 'nota tem valor %.2f ocupa %ld bytes em mem�ria\n", nota, sizeof(nota));
//	printf("A variavel letra = %c ocupa %ld bytes em mem�ria\n", letra, sizeof(letra));
//	printf("A variavel outra nota = %.2f ocupa %ld bytes em mem�ria\n", outraNota, sizeof(outraNota));


	return 0;
}
