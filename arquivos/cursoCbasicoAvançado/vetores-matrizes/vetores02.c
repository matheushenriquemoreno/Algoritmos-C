#include <stdio.h>

int main(){

	int numeros[5]; // 0...9
	numeros[0] = 1;
	numeros[1] = 2;
	numeros[2] = 3;
	numeros[3] = 4;
	numeros[4] = 5;

	// ventor float

	float valores[5];// 0...4
	for(int i  = 0; i < 5; i++){
		valores[i] =(float) numeros[i] / (float)2;
	}

	for(int i = 4; i >= 0; i--){ // for decrecente
		printf("%.2f\n", valores[i]);
	}

	return 0;
}
