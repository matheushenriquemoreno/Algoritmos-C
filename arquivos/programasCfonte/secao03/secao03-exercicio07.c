//tendo dados de entrada e altura de uma pessoa, contrua um algoritimo que calcule seu pedo ideal,
//usando a seguinte fórmula:(72.7 * altura) -58
#include <stdio.h>

int main(){
	float altura;

	printf("digite sua altura: ");
	fflush(stdout);
	scanf("%f", &altura);

	float peso_ideal = (72.7 * altura) - 58;
	printf("o seu peso ideal seria de: %.2f", peso_ideal);


}
