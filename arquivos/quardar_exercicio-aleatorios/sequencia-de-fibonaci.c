#include <stdio.h>

int main(){
	int termo, t1 = 0, t2 = 1, proxi_termo;

	printf("digite quantas termos da sequencia de fibonaci quer ver: ");
	fflush(stdout);
	scanf("%d", &termo);
	printf("\nSequencia De Fibonacci \n");

	for(int i = 1; i <= termo; i++) {
		printf("%d ", t1);
		proxi_termo = t1 + t2; // somando o primeiro termo + o segundo = 0 + 1
		t1 = t2; // t1 = 1
		t2 = proxi_termo;
	}

	return 0;
}
