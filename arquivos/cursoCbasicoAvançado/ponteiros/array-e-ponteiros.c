#include <stdio.h>

/*  0   1   2   3   4  elementos
 * ---------------------
 * |10 |20 |30 |40 |50 |  valores
 * ---------------------
 * | ^ | ^ | ^ | ^ | ^ | ponteiro
 * ---------------------
 */




int main(){
	int valores[5];

	for (int i = 0; i < 5; i++){
		printf("informe o %d/5 valor: ", i + 1);
		fflush(stdout);
		scanf("%d", &valores[i]);
	}
	printf("Os valores informados foram:  \n");
	for(int i = 0; i < 5; i++){
		printf("%d\n", valores[i]);
	}

	printf("%p %d\n", &valores[0], valores[0]);
	printf("%p %d\n", valores, valores[1]);
	return 0;
}
