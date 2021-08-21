#include <stdio.h>
#include <math.h> // importe da biblioteca matematica.

int main(){
	float raio_circulo;


	printf("informe o valor do raio do circulo: ");
	fflush(stdout);
	scanf("%f", &raio_circulo);
	float area =(pow(raio_circulo,2)) * 3.14;

	printf("o valor da area do círculo e de: %.2f", area);


}


	// site com todas as funçoes da biblioteca http://linguagemc.com.br/a-biblioteca-math-h/
