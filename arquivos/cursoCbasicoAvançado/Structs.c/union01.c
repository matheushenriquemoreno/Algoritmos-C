#include <stdio.h>

union numeros{
	int num1, num2, num3, num4, num5; // daria um total de 20 bytes;
}n;

int main(){
	int soma = 0;

	n.num1 = 1;
	soma += n.num1;
	printf("O valor de num1 e %d\n", n.num1);
	n.num2 = 3;
	soma +=  n.num2;
	printf("O valor de num1 e %d\n", n.num2);
	n.num3 = 5;
	soma +=  n.num3;
	printf("O valor de num1 e %d\n", n.num3);
	n.num4 = 7;
	soma +=  n.num4;
	printf("O valor de num1 e %d\n", n.num4);
	n.num5 = 9;
	soma +=  n.num5;
	printf("O valor de num1 e %d\n", n.num5);


	printf("O valor de num1 e %d\n", n.num1);
	printf("O valor de num1 e %d\n", n.num2);
	printf("O valor de num1 e %d\n", n.num3);
	printf("O valor de num1 e %d\n", n.num4);
	printf("O valor de num1 e %d\n", n.num5);


	printf("'n' esta ocupando %ld bytes em memória\n", sizeof(n));
	printf("soma = %d\n", soma);
	printf("memória total ocupada %ld", (sizeof(n) + sizeof(soma)));

	return 0;
}
