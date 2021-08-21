#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>


typedef struct {
	int codigo;
	char nome[30];
	float preco;
} Produto;

typedef struct {
	Produto produto;
	int quantidade;
} Carinho;

void infoProduto(Produto prod);
void menu();
void cadastrarProduto();
void comprarProduto();
void listarProdutos();
void visualizarCarinho();
Produto pegarProdutoPorCodigo(int codigo);
int * temNoCarrinho(int codigo);
void fecharPedido();

static int contador_produto = 0;
static int contador_carrinho = 0;
static Carinho carrinho[50];
static Produto produtos[50];

int main(){
	printf("===================================\n");
	printf("=============Bem-vindo(a)==========\n");
	printf("============= Math-Shop ===========\n");
	printf("===================================\n");
	menu();

	return 0;
}

void infoProduto(Produto prod){
	printf("Código: %d\nNome: %s \nPreco: %.2f\n", prod.codigo, strtok(prod.nome, "\n"), prod.preco);
}

void menu(){
	printf("Selecione uma opção: \n");
	printf("1 - Cadastrar produto.\n");
	printf("2 - Listar produtos.\n");
	printf("3 - Comprar produtos.\n");
	printf("4 - Vizualizar carinho.\n");
	printf("5 - Fechar pedido.\n");
	printf("6 - Sair do sistema.\n");
	int opcao;
	fflush(stdout);
	scanf("%d", &opcao);
	getchar(); // corigir bug de pular linha.

	switch (opcao){
	case 1:
		cadastrarProduto();
		break;
	case 2:
		listarProdutos();
		break;
	case 3:
		comprarProduto();
		break;
	case 4:
		visualizarCarinho();
		break;
	case 5:
		fecharPedido();
		break;
	case 6:
		printf("Volte sempre!\n");
		Sleep(3);
		exit(0);
	default:
		printf("Opção invalida.\n");
		Sleep(2);
		menu();
		break;
	}
}

void cadastrarProduto(){
	printf("Cadastro de Produto\n");
	printf("===================\n");

	printf("Informe o nome do produto: ");
	fflush(stdout);
	fgets(produtos[contador_produto].nome, 30, stdin);

	printf("Informe o preço do produto: ");
	fflush(stdout);
	scanf("%f", &produtos[contador_produto].preco);

	printf("O produto %s foi cadastrado com sucesso.\n", strtok(produtos[contador_produto].nome, "\n"));

	produtos[contador_produto].codigo = (contador_produto + 1);
	contador_produto++;
	Sleep(2);
	menu();
}

void comprarProduto(){
	if(contador_produto > 0){
		printf("informe o código do produto que deseja adicionar ao carrinho.\n");

		printf("========= Produtos Disponíveis ========= \n");
		for(int i = 0; i < contador_produto; i++){
			infoProduto(produtos[i]);
			printf("-----------------\n");
			Sleep(2);
		}
		int codigo;
		fflush(stdout);
		scanf("%d", &codigo);
		getchar();

		int tem_mercado = 0;
		for(int i = 0; i < contador_produto; i++){
			if(produtos[i].codigo == codigo){
				tem_mercado = 1;

				if(contador_carrinho > 0){ //verifica se o produto ja esta existente no carrinho
					int * retorno = temNoCarrinho(codigo);

					if(retorno[0] == 1){ // aumentando a quantidade de produtos ja existentes
						carrinho[retorno[1]].quantidade++;
						printf("Aumentei a quantidade do produto %s já existente no seu carrinho.\n",
								strtok(carrinho[retorno[1]].produto.nome, "\n"));
						Sleep(2);
						menu();
					}else{ // produto não existe e tem que adicionar no carrinho
						Produto p = pegarProdutoPorCodigo(codigo);
						carrinho[contador_carrinho].produto = p;
						carrinho[contador_carrinho].quantidade = 1;
						contador_carrinho ++;
						printf("O produto %s foi adicionado ao carrinho.\n", strtok(p.nome, "\n"));
						Sleep(2);
						menu();
					}
				}else{ // nenhum produto no carrinho e esta adicionando o primeiro.
					Produto p = pegarProdutoPorCodigo(codigo);
					carrinho[contador_carrinho].produto = p;
					carrinho[contador_carrinho].quantidade = 1;
					contador_carrinho++;
					printf("O produto %s foi adicionado ao carrinho.\n", strtok(p.nome, "\n"));
					Sleep(2);
					menu();
				}
			}
		}
		if(tem_mercado < 1){
			printf("Não foi encontrado o produto com código %d.\n", codigo);
			Sleep(2);
			menu();
		}

	}else{
		printf("Nenhum produto registrado para venda.\n");
		Sleep(2);
		menu();
	}
}

void listarProdutos(){
	if(contador_produto > 0){
	printf("Listagem de produtos.\n");
	printf("---------------------\n");
	for(int i = 0; i < contador_produto; i++){
		infoProduto(produtos[i]);
		printf("---------------------\n");
		Sleep(1);
		}
	menu();
	}else{
		printf("Não temos produtos cadastrados.\n");
		Sleep(3);
		menu();
	}
}

void visualizarCarinho(){
	if(contador_carrinho > 0){
		printf("Produtos do Carrino\n");
		printf("-------------------\n");
		for(int i = 0; i < contador_carrinho; i++){
			infoProduto(carrinho[i].produto);
			printf("Quantidade: %d\n", carrinho[i].quantidade);
			printf("-------------------\n");
			Sleep(1);
		}
		menu();
	}else{
		printf("Não temos produtos no carrinho.\n");
		Sleep(2);
		menu();
	}
}


Produto pegarProdutoPorCodigo(int codigo){
	Produto p;
	for(int i = 0; i < contador_produto; i++){
		if(produtos[i].codigo == codigo){
			p = produtos[i];
		}
	}
	return p;
}

int * temNoCarrinho(int codigo){
	int static retorno[] = {0,0};
	for(int i = 0; i < contador_carrinho; i++) {
		if(carrinho[i].produto.codigo == codigo){
			retorno[0] = 1; // tem o produto com este código no carinho
			retorno[1] = i; // o índice do produto no carrinho;
		}
	}
	return retorno;
}

void fecharPedido(){
	if(contador_carrinho > 0){
		float valorTotal = 0.0;
		printf("Produtos existentes no carrinho\n");
		printf("--------------------\n");
		for(int i = 0; i < contador_carrinho; i++){
			Produto p = carrinho[i].produto;
			int quantidade = carrinho[i].quantidade;
			valorTotal += p.preco * quantidade;
			infoProduto(p);
			printf("Quantidade: %d\n", quantidade);
			printf("--------------------\n");
			Sleep(2);
		}
		// limpar carrinho
		contador_carrinho = 0;
		printf("Valor total da sua compra é R$ %.2f\n", valorTotal);
		Sleep(5);
		menu();
	}else{
		printf("Você não tem nenhum produto no carrinho ainda.\n");
		Sleep(3);
		menu();
	}
}
