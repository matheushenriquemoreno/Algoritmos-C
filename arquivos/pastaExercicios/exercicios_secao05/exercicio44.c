#include <stdio.h>

int main(){
	int numero, t1 = 0, t2 = 1, proximo_termo;

	printf("informe um numero: ");
	fflush(stdout);
	scanf("%d", &numero);

	while(numero != t1){
		printf("%d ", t1);
		if(t1 > numero){
			break;
		}
		proximo_termo = t1 + t2;
		t1 = t2;
		t2 = proximo_termo;
	}

}
