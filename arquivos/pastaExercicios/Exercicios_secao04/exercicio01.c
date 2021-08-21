#include <stdio.h>

int main(){
	int numero1, numero2;

	printf("digite um numero:  ");
	fflush(stdout);
	scanf("%d", &numero1);

	printf("digite outro numero:");
	fflush(stdout);
	scanf("%d", &numero2);

	if(numero1 > numero2){
		printf("%d é maior que %d\n", numero1, numero2);
	}else if(numero2 > numero1){
		printf("%d é maior que %d\n", numero2, numero1);
	}else if(numero1 == numero2){
		printf("ambos numeros digitados são iguais.\n");
	}

	printf("numeros digitados = %d %d", numero1, numero2);


}
