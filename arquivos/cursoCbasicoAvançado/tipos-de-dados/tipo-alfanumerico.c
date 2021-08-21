#include <stdio.h>

int main(){

	char opcao;
	printf("informe uma opção: \n"
			"a - Saldo da conta. \n"
			"b - Extrato da conta. \n"
			"c - Limite da conta. \n");
	fflush(stdout);
	scanf("%c", &opcao);
	if(opcao == 'a'){
		printf("Seu saldo é...");
	}else if(opcao == 'b'){
		printf("extrato da conta...");
	}else if(opcao == 'c'){
		printf("seu limite é...");
	}else{
		printf("opção desconhecida!!");
	}

	// gerar um alfabeto completo com loop
	for(int i = 97; i <= 122; i++){
		printf("%c\n", i);
	}

	// declaração de uma string em c
	char nome[50];
	printf("qual é seu nome? ");
	fflush(stdout);
	gets(nome);

	printf("Seu nome é %s", nome);





	return 0;
}
