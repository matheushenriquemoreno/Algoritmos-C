#include <stdio.h>
// hardware/ logico/ memória

// Endereço de memória como parametro de entrada
void incrementa(int* valor){
	printf("Antes de incrementar.\n");
	printf("O contador vale %d\n", (*valor)); // mostrar o valor
	printf("O endereço de memoria é %d\n", valor); // endereço de memória

	printf("Depois de incrementar.\n");
	printf("O contador vale %d\n", ++(*valor));
	printf("O endereço de memoria é %d\n", valor);
}

int main(){
	// Quando declaramos uma variavel, a linguagem C aloca um espaço em memoria para colocar o valor.
	int contador = 10;
	printf("Antes de incrementar.\n");
	printf("O contador vale %d\n", contador);
	printf("O endereço de memoria é %d\n", &contador);
	// Copia por valor
	incrementa(&contador);
	// scanf("%d", &contador)
	printf("Depois de incrementar.\n");
	printf("O contador vale %d\n", contador);
	printf("O endereço de memoria é %d\n", &contador);

}
