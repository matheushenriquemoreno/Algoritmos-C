#include <stdio.h>

int main(){
	float numero_real;
	printf("digite um numero real com ponto não virgula: ");
	fflush(stdout);
	scanf("%f", &numero_real);

	float quadrado_numero = numero_real * numero_real;
	float quinta_parte = numero_real / 5;
	printf("o quadrado do numero digitado e: %.2f"
			"\ne a quinta parte e: %.2f ", quadrado_numero, quinta_parte);
}
