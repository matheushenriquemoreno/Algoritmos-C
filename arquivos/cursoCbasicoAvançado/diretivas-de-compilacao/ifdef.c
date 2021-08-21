#include <stdio.h>


#ifndef PI
  #define PI 3.14567 // constantes = valor não alteravel.
#endif

// ifndef - diretiva de compilação




int main(){
	int valor = 5;

	printf("valor = %d\nPI = %f\n", valor, (PI * 2));

#ifdef PI
		printf("o valor de PI É %f\n", PI);
#endif


}
