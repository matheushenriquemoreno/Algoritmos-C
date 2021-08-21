#include <stdio.h>
//PILHA

//FILO = Fist in / last Out
//LIFO = Last in / Fist our

/*
 * ---
 * |7| -> TOPO
 * ---
 * |6|
 * ---
 * |5|
 * ---
 * |4|
 * ---
 * |3|
 * ---
 * |2|
 * ---
 * |1|
 *
 * - Os dados São inserisod sempre no topo, ou seja, sempre que um novo elemento é inserido ele ocupa o topo
 * da pilha.
 *
 * - Só temos acesso ao elemento que está no topo.
 *
 * - o processo de inserir um elemento e chamado de push.
 *
 * - o processo de remover um elemento e chamado de pop. so e possivel remover atraves do topo.
 *
 * - Exemplo de utilização: CTRL + Z
 *
 */

#define TAMPILHA 10

// PILHA
int pilha[TAMPILHA] = {0,0,0,0,0,0,0,0,0,0};
int topo = 0;

void lista_elementos(){
	printf("\n =========== Pilha Atual ============ \n");
	for(int i = 0; i < TAMPILHA; i++){
		printf("-");
		printf("|%d|", pilha[i]);
		printf("-");
	}
	printf("\nTopo: %d", topo);
	printf("\n\n");
}

void push(){  // inserir
	int val;
	printf("informe o valor: ");
	fflush(stdout);
	scanf("%d", &val);
	if(topo < TAMPILHA){
		pilha[topo] = val;
		topo += 1;
		lista_elementos();
	}else{
		printf("\npilha cheia!!\n");
	}
}

void pop(){// remover elemento
	if(topo >= 0){
		pilha[topo-1] = 0;
		topo = topo -1;
		lista_elementos();
	}else{
		printf("pilha vazia..");
	}
}

void clear(){
	for(int i = 0; i < TAMPILHA; i++){
		pilha[i] = 0;
	}
	topo = 0;
}

int main(){
	int opcao = 0;

	do{
		printf("selecione a opção: \n\n");
		printf("[1] Inserir (push)\n");
		printf("[2] Remover (pop)\n");
		printf("[3] Listar: \n");
		printf("[4] Limpar a pilha: \n");
		printf("Opção escolhida: ");
		fflush(stdout);
		scanf("%d", & opcao);

		switch(opcao){
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			lista_elementos();
			break;
		case 4:
			clear();
			break;
		case -1:
			break;
		default:
			printf("opção invalida");
		}
	}while(opcao != -1);

	return 0;
}
