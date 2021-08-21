#include <stdio.h>
#include <stdlib.h>
// lista Encadeada/ lista ligada / linked List

// a lista encadeada possuie além de seu valor, um ponteiro apontado para o proxímo elemento.

// podemos inserir elementos no início ou no fim.

/* no
 * --------------------
 * |1|*|->|4|*|->|7|*|-> NULL
 * --------------------
 *
 */

struct st_no{
	int valor;
	struct st_no *prox;
};

typedef struct st_no no;


int vazia(no *le){
	if(le->prox == NULL){
		return 1;
	}else{
		return 0;
	}
}

void inicia(no * le){
	le->prox = NULL;
}

void libera(no *le){
	if(!vazia(le)){
		no*proxNo, *atual; // variaveis
		atual = le->prox;
		while(atual != NULL){
			proxNo = atual->prox;
			free(atual);
			atual = proxNo;
		}
	}
}

void exibe(no *le){
	if(vazia(le)){
		printf("lista está vazia!\n\n");
		return;
	}
	no *tmp;
	tmp = le->prox;

	while(tmp != NULL){
		printf("%d ", tmp->valor);
		tmp= tmp->prox;
	}
	printf("\n\n");

}

void insereInicio(no *le){
	no*novo = (no*)malloc(sizeof(no));
	if(!novo){
		printf("sem memória disponivel!!\n");
		exit(1);
	}
	printf("informe o valor: ");
	fflush(stdout);
	scanf("%d", &novo->valor);
	no *oldHead = le->prox;
	le->prox = novo;
	novo->prox = oldHead;
}

void insereFim(no *le){
	no *novo = (no*)malloc(sizeof(no));
	if(!novo){
		printf("sem memória disponível!!\n");
		exit(1);
	}
	printf("informe o valor: ");
	fflush(stdout);
	scanf("%d", &novo->valor);
	novo->prox = NULL;

    if(vazia(le)){
    	le->prox = novo;
    }else{
    	no *tmp = le->prox;

    	while(tmp->prox != NULL){
    		tmp = tmp->prox;
    	}
    	tmp->prox = novo;
    }
}

void opcao(no *le, int op){
	switch(op){
	case 0:
		libera(le);
		break;
	case 1:
		exibe(le);
		break;
	case 2:
		insereInicio(le);
		break;
	case 3:
		insereFim(le);
		break;
	case 4:
		inicia(le);
		break;
	default:
		printf("comando inválido\n\n");
	}
}

int menu(){
	int opcao;

	printf("Escolha uma opção: \n");
	printf("[0] - Sair: \n");
	printf("[1] - Exibir: \n");
	printf("[2] - Adicionar nó no início: \n");
	printf("[3] - Adicionar nó no fim: \n");
	printf("[4] - Zerar lista: \n");
	printf("opção: ");
	fflush(stdout);
	scanf("%d", &opcao);

	return opcao;
}

int main(){
	no * le = (no*)malloc(sizeof(no));
	if(!le){
		printf("sem memoria disponivel!!");
		exit(1);
	}
	inicia(le);
	int opt;
	do{
		opt=menu();
		opcao(le, opt);
	}while(opt);
	free(le);

	return 0;
}
