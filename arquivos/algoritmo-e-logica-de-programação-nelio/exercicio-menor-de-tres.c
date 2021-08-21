#include <stdio.h>

int main(){
	int a , b, c, menor;

	printf("informe o primeiro valor: ");
	fflush(stdout);
	scanf("%d", &a);

	printf("informe o segundo valor: ");
	fflush(stdout);
	scanf("%d", &b);

	printf("informe o terceiro valor: ");
	fflush(stdout);
	scanf("%d", &c);

	if(a < b && a < c){
		menor = a;
	}
	else if(b < c){
		menor = b;
	}
	else{
		menor = c;
	}
	printf("menor = %d\n", menor);
	return 0;
}
