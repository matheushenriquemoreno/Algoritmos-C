#include <stdio.h>


#ifndef PI
  #define PI 3.14567 // constantes = valor n�o alteravel.
#endif

// ifndef - diretiva de compila��o




int main(){
	int valor = 5;

	printf("valor = %d\nPI = %f\n", valor, (PI * 2));

#ifdef PI
		printf("o valor de PI � %f\n", PI);
#endif


}
