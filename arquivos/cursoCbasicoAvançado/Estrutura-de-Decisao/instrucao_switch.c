#include <stdio.h>
/*
Switch
- usamos o switch em casos tenhaos uma estrutura grande ou confusa de if/else/if else

#pseudoc�digo

escolha(variavel)
inicio
	caso valor1;
		istru��es
    caso valor2;
    	instru��es
    caso valor n:
   fim

 na linguagem C
switch(variavel){
	case valor1;
	 	 istrucoes;
	 	 break;
	case valor2
		instru�oes;
		break;
	default;
	instrucoes;
}
*/
int main(){
	int valor;

	printf("informe um valor de 1 a 7: ");
	fflush(stdout);
	scanf("%d", &valor);

	switch(valor){

	case 1:
		printf("domingo\n");
		break;
	case 2:
		printf("segunda\n");
		break;
	case 3:
		printf("ter�a\n");
		break;
	case 4:
		printf("quarta\n");
		break;
	case 5:
		printf("quinta\n");
		break;
	case 6:
		printf("sexta\n");
		break;
	case 7:
		printf("s�bado\n");
		break;
	default:
		printf("valor inv�lido!");

	return 0;
	}







}
