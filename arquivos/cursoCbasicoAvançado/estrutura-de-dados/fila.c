#include <stdio.h>

// fila

/*
 * -o elemento que entra primeiro sai primeiro;
 * - sempre que um elemento é adcionado na fila, ele vai pro final dela;
 * - sempre que removemos um elemento, o primeiro é removido.
 */

// FIFO - First in/ First Out


// enqueue () // adiciona elemento na fila

// dequeue () // remove o elemento da fila

// clear () // limpa a fila.

// Estrutura da fila
// fila[10]

//head -> cabeça da fila, indica quem é o primeiro elemento da fila.
//tail -> calda, indica quantos elementos tem na fila.

// APLICAÇÃO EM QUALQUER SITUAÇÃO ONDE A GENTE TENHA QUE ORGANIZAR O ATENDIMENTO DE ELEMENTOS.


#define TAMFILA 10

// File / quee

int fila[TAMFILA] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
int head = 0; // proximo a ser atendido
int tail = 0; // ultimo a ser atendido


void  lista_elementos(){
	printf("\n ============= fila Atual ===============\n");
	for(int i = 0; i < TAMFILA; i++){
		printf("-");
		printf("|%d|", fila[i]);
		printf("-");
	}
	printf("\nHead: %d\n", head);
	printf("Tail: %d\n", tail);
	printf("\n\n");

}

void enqueue(){
	int val;
	if(tail < TAMFILA){
		printf("informe o elemento pra adicionar a fila: ");
		fflush(stdout);
		scanf("%d", &val);
		fila[tail] = val;
		tail += 1;
		lista_elementos();
	}else{

	}
}

//void dequeue(){
//	if(head < tail){
//		fila[head] = 0;
//		head += 1;
//		lista_elementos();
//	}else{
//		printf("A fila está vazia...\n");
//	}
//}

void dequeue(){
	if(-1 != tail-1){
		for(int i = 0; i< tail; i++){
			fila[i] = fila[i+1];
		}
		tail -= -1;
		head += 1;
		fila[tail+1] = 0;
		if(tail == 0){
			head = 0;
		}
		lista_elementos();
	}else{
		printf("lista vazia!!");
	}
}


void clear(){
	for(int i = 1; i < TAMFILA; i++){	fila[i]=0; }
	head=0;
	tail=0;
}

int main(){
	lista_elementos();
	int opcao = 0;

	do{
		printf("selecione a opção:\n\n");
		printf("[1] - inserir(enqueue): \n");
		printf("[2] - remover (dequeue): \n");
		printf("[3] - listar: \n");
		printf("[4] - limpar a fila: \n");
		printf("[-1] - sair\n");
		printf("opção: ");
		fflush(stdout);
		scanf("%d", &opcao);

		switch(opcao){
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
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
			printf("opção invalida!!");
		}

	}while(opcao != -1);

	return 0;
}
