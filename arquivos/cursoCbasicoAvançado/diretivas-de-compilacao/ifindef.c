#include <stdio.h>

#ifndef PI
  #define PI 3.14567 // constantes = valor não alteravel.
#endif

// ifndef - diretiva de compilação


int main(){
	int valor = 5;

	valor = 467;
	printf("o valor e %d\nvalor constante: %.5f\n", valor, PI);


	return 0;
}
