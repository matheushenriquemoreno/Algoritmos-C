#include <stdio.h>



int soma(int numero1, int numero2){
	int soma = numero1 + numero2;
	printf("soma = %d",soma);
	return soma;
}
// ambas as funções fazem a mesma coisa a difença que uma retorna um valor e outra não
//void soma(int numero1, int numero2){
//	int soma = numero1 + numero2;
//	printf("soma = %d",soma);
//}


int main(){
	int n1, n2;

	printf("informe dois numeros para soma: ");
	fflush(stdout);
	scanf("%d %d", &n1, &n2);
	soma(n1,n2);


}
