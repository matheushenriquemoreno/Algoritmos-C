#include <stdio.h>
#include <stdlib.h>
//ARVORE BINARIA -> Binaru Tree

/*
 * s„o estruturas de dados caracterizadas por:
 *
 * ou, n„o tem elemento algum(arvore vazia).
 * ou tem um elemento distinto, denominado raiz,
 * com dois apontamento para duas estruturas diferentes,
 * denominadas sub-·rvores esquerda
 * e sub-·rvore direita.
 *
 */

struct st_arvore{
	int valor;
	struct st_arvore *sad;// sub-·rvore direita
	struct st_arvore *sae; // sub-·rvore esquerda
};

typedef struct st_arvore arvore;

arvore* criaArvore(){
	return NULL;
}

int arvoreEstaVazia(arvore* t){
	return t == NULL;
}

void mostraArvore(arvore * t){
	printf("<");
	if(!arvoreEstaVazia(t)){
		printf("%d ", t->valor);
		mostraArvore(t->sae);
		mostraArvore(t->sad);
	}
	printf(">");
}

void insereDadoArvore(arvore** t, int num){
	if(*t == NULL){
		*t = (arvore*)malloc(sizeof(arvore));
		(*t)->sae = NULL;
		(*t)->sad = NULL;
		(*t)->valor = num;
	}else{
		if(num < (*t)->valor){
			insereDadoArvore(&(*t)->sae, num);
		}
		if(num > (*t)->valor){
			insereDadoArvore(&(*t)->sad, num);
		}
	}
}

int estaNaArvore(arvore* t, int num){
	if(arvoreEstaVazia(t)){
		return 0;
	}
	return t->valor==num || estaNaArvore(t->sae, num) || estaNaArvore(t->sad, num);
}


int main(){

	arvore* t = criaArvore();

	insereDadoArvore(&t, 12);
	insereDadoArvore(&t, 15);
	insereDadoArvore(&t, 10);
	insereDadoArvore(&t, 13);

	mostraArvore(t);


	if(arvoreEstaVazia(t)){
		printf("\narvore Vazia!!\n");
	}else{
		printf("\n¡vore n„o esta vazia!!\n");
	}

	if(estaNaArvore(t, 15)){
		printf("\nO elemento 15 pertence a arvore!\n");
	}else{
		printf("\nO elementeo 15 n„o pertence a ·rvore!\n");
	}

	if(estaNaArvore(t, 22)){
			printf("\nO elemento 22 pertence a arvore!\n");
		}else{
			printf("\nO elementeo 22 n„o pertence a ·rvore!\n");
		}

	free(t);


	return 0;
}
