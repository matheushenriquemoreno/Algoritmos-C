//fa�a um algoritmo que leia um n�mero inteiro e mostre uma mensagem indicando
//se este n�mero � par ou �mpar, e se � positivo ou negativo.

#include <stdio.h>

int main(){
	// variaveis
	int numero;

	printf("informe um numero: ");
	fflush(stdout);
	scanf("%d",&numero);

	if(numero % 2 == 0){
		if(numero > 0 ){
			printf("o numero %d � par e positivo", numero);
		}else{
			printf("o numero %d e impar e negativo.", numero);
		}
	}else{
		if(numero > 0) {
			printf(" o numero %d e �mpar e positivo", numero);
		}else{
			printf(" o numero %d e �mpar e negativo", numero);
		}
	}



}
