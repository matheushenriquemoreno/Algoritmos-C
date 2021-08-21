#include <stdio.h>
#include <math.h>

int main(){

	float a ,b ,c;

	printf("informe o valor do cateto A: ");
	fflush(stdout);
	scanf("%f",&a);

	printf("informe o valor do cateto B: ");
	fflush(stdout);
	scanf("%f",&b);

	c = sqrt(a * a + b * b); // sqrt( )	Calcula raiz quadrada

	printf("o valor da hipotenusa e de: %.2f", c);

}
