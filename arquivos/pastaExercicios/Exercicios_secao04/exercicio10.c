#include <stdio.h>

int main(){
	float altura, peso_ideal_homen, peso_ideal_mulher;
	char sexo;


	printf("informe se seu sexo 'H' ou 'M': ");
	fflush(stdout);
	scanf("%c", &sexo);
	gets(stdin);

	printf("informe sua altura: ");
	fflush(stdout);
	scanf("%f", &altura);

	if(sexo == 'h' || sexo == 'H'){
		peso_ideal_homen = (72.7 * altura) - 58;
		printf("seu peso ideal e de: %.2fkg", peso_ideal_homen);
	}else if(sexo == 'm' || sexo == 'M'){
		peso_ideal_mulher = (62.1 * altura) - 44.7;
		printf("seu peso ideal e de: %.2fkg", peso_ideal_mulher);
	}else{
		printf("erro!!");
	}





}
