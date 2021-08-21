#include <stdio.h>
// hardware/ logico/ mem�ria

// Endere�o de mem�ria como parametro de entrada
void incrementa(int* valor){
	printf("Antes de incrementar.\n");
	printf("O contador vale %d\n", (*valor)); // mostrar o valor
	printf("O endere�o de memoria � %d\n", valor); // endere�o de mem�ria

	printf("Depois de incrementar.\n");
	printf("O contador vale %d\n", ++(*valor));
	printf("O endere�o de memoria � %d\n", valor);
}

int main(){
	// Quando declaramos uma variavel, a linguagem C aloca um espa�o em memoria para colocar o valor.
	int contador = 10;
	printf("Antes de incrementar.\n");
	printf("O contador vale %d\n", contador);
	printf("O endere�o de memoria � %d\n", &contador);
	// Copia por valor
	incrementa(&contador);
	// scanf("%d", &contador)
	printf("Depois de incrementar.\n");
	printf("O contador vale %d\n", contador);
	printf("O endere�o de memoria � %d\n", &contador);

}
