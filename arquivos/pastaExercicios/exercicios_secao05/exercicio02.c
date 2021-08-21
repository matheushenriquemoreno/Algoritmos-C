#include <stdio.h>

int main(){
	printf("for\n");
	for(int i = 1; i <= 100; i++){
		printf("%d\n", i);
	}

	int contador = 0;
	printf("while\n");
	while(contador < 100){
		contador++;
		printf("%d\n",contador);
	}
	printf("do while\n");
	contador = 0;
	do{
		contador++;
		printf("%d\n",contador);
	}while(contador < 100);




	 int x, soma;
	 soma = 0;
	 printf("Digite o primeiro numero: ");
	 fflush(stdout);
	 scanf("%d", &x);

	 while (x != 0) {
	 soma = soma + x;
	 printf("Digite outro numero: ");
	 fflush(stdout);
	 scanf("%d", &x);
	 }
	 printf("SOMA = %d\n", soma);
}
