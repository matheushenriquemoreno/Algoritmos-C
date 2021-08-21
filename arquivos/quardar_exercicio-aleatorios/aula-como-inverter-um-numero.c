#include <stdio.h>

// link video https://www.youtube.com/watch?v=nipW-60w9KY&ab_channel=Dealunoparaaluno
int main(){
	int numero, cifra;

		printf("informe um numero inteiro: ");
		fflush(stdout);
		scanf("%d",&numero);
		// para inverter os numero e preciso pegar o numero inteiro e buscar o modulo (%) por 10.
		// a segunda parte e dividir o numero por 10 fazendo assim buscar novamente o modulo e invertendo o numero.



		if(numero < 0) {
			numero = numero * -1;
			printf("-");
		}
			do {
				cifra = numero % 10; //
				printf("%d",cifra);
				numero /= 10;//  numero / 10;
			} while(numero != 0);// while (executa ate a condição ser falsa) {
			//}
			printf("\n");



}
















//Esta estrutura de repetição, garante que o bloco de instruções seja executado no mínimo uma vez, já que a condição que controla o laço é testada apenas no final do comando.
//A diferença entre o comando while e o do…while é justamente o local onde a condição que controla o laço é testada.
//No comando while a condição é testada antes do bloco de instruções, e caso a condição seja falsa a repetição não será executada.
//No do…while o bloco de comandos é executado pelo menos uma vez de forma obrigatória, independente do resultado da expressão lógica.







