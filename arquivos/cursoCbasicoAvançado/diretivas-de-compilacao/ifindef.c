#include <stdio.h>

#ifndef PI
  #define PI 3.14567 // constantes = valor n�o alteravel.
#endif

// ifndef - diretiva de compila��o


int main(){
	int valor = 5;

	valor = 467;
	printf("o valor e %d\nvalor constante: %.5f\n", valor, PI);


	return 0;
}
