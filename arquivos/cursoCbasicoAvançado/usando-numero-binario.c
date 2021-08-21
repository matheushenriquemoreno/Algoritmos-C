#include <stdio.h>

int main(){
	int valor = 2;
	// deslocamento de bits para esquerda

	valor = valor << 2;
	printf("valor vale %d\n", valor);

	// deslocamento para direita
	valor = 2;
	valor = valor >>1;
	printf("valor vale %d\n", valor);
	// negação
	valor = 2;
	valor = ~valor;
	printf("valor vale %d", valor);



}
