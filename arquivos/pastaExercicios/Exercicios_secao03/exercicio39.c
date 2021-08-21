#include <stdio.h>

int main(){
	int valor_premio = 780.000;
	float primeiro, segundo, terceiro;

	primeiro = valor_premio * 0.46;
	segundo = valor_premio * 0.32;
	terceiro = (valor_premio - primeiro) - segundo ;

	printf("%.2f \n%.2f \n%.2f ", primeiro, segundo, terceiro);


}
