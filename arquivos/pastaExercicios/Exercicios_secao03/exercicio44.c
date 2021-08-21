#include <stdio.h>

int main(){
	float altura_degrau, altura_alcancar;
	int degraus_necessarios;

	printf("informe a altura do degrau: ");
	fflush(stdout);
	scanf("%f",&altura_degrau);

	printf("informe a altura que você deseja alcancar: ");
	fflush(stdout);
	scanf("%f",&altura_alcancar);

	degraus_necessarios = altura_alcancar / altura_degrau;

	printf("a quantidade de degraus a andar e de: %d",degraus_necessarios);

}
