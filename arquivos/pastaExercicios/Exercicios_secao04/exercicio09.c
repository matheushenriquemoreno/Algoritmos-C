#include <stdio.h>

int main(){
	int salario, emprestimo, parcela, valor_cada_parcela;

	printf("informe seu salario: ");
	fflush(stdout);
	scanf("%d", &salario);

	printf("informe o valor do emprestimo e o numero de parcelas: \n");
	fflush(stdout);
	scanf("%d %d", &emprestimo, &parcela);

	valor_cada_parcela = emprestimo / parcela;


	if(valor_cada_parcela <= salario * 0.2){
		printf("emprestimo condedido!!");
	}else{
		printf("emprestimo não concedido!!");
	}




	return 0;
}
