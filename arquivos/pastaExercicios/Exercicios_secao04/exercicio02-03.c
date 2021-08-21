#include <stdio.h>
#include <math.h>

int main(){
	float numero;
	float raiz_quadrada, numero_ao_quadrado;
	printf("informe um numero: ");
	fflush(stdout);
	scanf("%f", &numero);

	if(numero > 0){
		raiz_quadrada = sqrt(numero);// sqrt( )	Calcula raiz quadrada
		printf("Raiz quadrada do numero digitado: %.2f ", raiz_quadrada);
	}else if(numero < 0){
		numero_ao_quadrado = numero * numero;
		printf("impossivel de fazer a raiz quadrada!!\n"
				"numero digitado ao quadrado: %.2f", numero_ao_quadrado);
	}
}
