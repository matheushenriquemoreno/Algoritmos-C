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
			} while(numero != 0);// while (executa ate a condi��o ser falsa) {
			//}
			printf("\n");



}
















//Esta estrutura de repeti��o, garante que o bloco de instru��es seja executado no m�nimo uma vez, j� que a condi��o que controla o la�o � testada apenas no final do comando.
//A diferen�a entre o comando while e o do�while � justamente o local onde a condi��o que controla o la�o � testada.
//No comando while a condi��o � testada antes do bloco de instru��es, e caso a condi��o seja falsa a repeti��o n�o ser� executada.
//No do�while o bloco de comandos � executado pelo menos uma vez de forma obrigat�ria, independente do resultado da express�o l�gica.







