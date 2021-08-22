#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>


typedef struct{
	int codigo;
	char nome[50];
	char email[50];
	char cpf[20];
	char dataNascimente[20];
	char dataCadastro[20];
} Cliente;


typedef struct{
	int numero;
	Cliente cliente;
	float saldo;
	float limite;
	float saldoTotal;
} Conta;


void menu();
void infoCliente(Cliente cliente);
void infoConta();
void criarConta();
void efetuarSaque();
void efetuarDeposito();
void efetuarTransferencia();
void listarContas();
float atualizaSaldoTotal(Conta conta);
Conta buscarContaPorNumero(int numero);
void sacar(Conta conta, float valor);
void depositar(Conta conta, float valor);
void transferir(Conta conta_origem, Conta conta_destino, float valor);

static Conta contas[50]; // criando um array de contas, em resumo pode aver somente 50 clientes
static int contador_contas = 0;
static int contador_clientes = 0;

int main(){
	printf("==================================\n");
	printf("============= BANK OF ============\n");
	printf("==================================\n");
	menu();

	return 0;
}

void menu(){
	int opcao = 0;

	printf("Selecione uma opção no menu:\n");
	printf("1 - Criar conta.\n");
	printf("2 - Efetuar saque.\n");
	printf("3 - Efetuar deposisto.\n");
	printf("4 - Efetuar transferencia.\n");
	printf("5 - Listar contas.\n");
	printf("6 - Sair.\n");

	fflush(stdout);
	scanf("%d", &opcao);
	getchar();

	switch(opcao){
	case 1:
		criarConta();
		break;
	case 2:
		efetuarSaque();
		break;
	case 3:
		efetuarDeposito();
		break;
	case 4:
		efetuarTransferencia();
		break;
	case 5:
		listarContas();
		break;
	case 6:
		printf("Até a próxima!\n");
		Sleep(2);
		exit(0);
	default:
		printf("Opção invalida!!\n");
		Sleep(2);
		menu();
	}


}


void infoCliente(Cliente cliente){
	printf("Código: %d \nNome: %s \nData de Nascimento: %s \nCadastro: %s\n",
			cliente.codigo, strtok(cliente.nome, "\n"), strtok(cliente.dataNascimente, "\n"),
			strtok(cliente.dataCadastro, "\n"));
}


void infoConta(Conta conta){
	printf("Número da Conta: %d \nCliente: %s \nData de Nascimento: %s \nData Cadastro: %s \nSaldo Total: R$%.2f\n\n",
			conta.numero, strtok(conta.cliente.nome, "\n"), strtok(conta.cliente.dataNascimente, "\n"),
			strtok(conta.cliente.dataCadastro, "\n"), conta.saldoTotal);
}


void criarConta(){
	Cliente cliente;

	// Data de cadastro
	char dia[3]; //06\0
	char mes[3]; //08\0
	char ano[5]; //2020\0
	char data_cadastro[20];
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);

	// Dia
	if(tm.tm_mday < 10){
		sprintf(dia, "0%d",tm.tm_mday);
	}else{
		sprintf(dia, "%d", tm.tm_mday);
	}
	// Mês
	if((tm.tm_mon + 1) < 10){
		sprintf(mes, "0%d", tm.tm_mon +1);
	}else{
		sprintf(mes, "%d", tm.tm_mon);
	}
	// ano
	sprintf(ano, "%d", tm.tm_year + 1900);
	// transferiando a data de cadastro pra dentro do cliente
	strcpy(data_cadastro , " ");
	strcat(data_cadastro, dia);
	strcat(data_cadastro, "/");
	strcat(data_cadastro, mes);
	strcat(data_cadastro, "/");
	strcat(data_cadastro, ano); // 22/08/2021
	strcat(data_cadastro,"\0");
	strcpy(cliente.dataCadastro, data_cadastro);
	// criar o cliente

	printf("Informe seus dados:\n");
	cliente.codigo = contador_clientes + 1;
	printf("Nome do cliente: \n");
	fflush(stdout);
	fgets(cliente.nome, 50, stdin);

	printf("E-mail do cliente: \n");
	fflush(stdout);
	fgets(cliente.email, 50, stdin);

	printf("CPF do cliente: \n");
	fflush(stdout);
	fgets(cliente.cpf, 20, stdin);

	printf("Data de nascimento do cliente: \n");
	fflush(stdout);
	fgets(cliente.dataNascimente, 20, stdin);

	contador_clientes++;

	// criar a conta
	contas[contador_contas].numero = contador_contas + 1;
	contas[contador_contas].cliente = cliente;
	contas[contador_contas].limite = 0.0;
	contas[contador_contas].saldo = 0.0;
	contas[contador_contas].saldoTotal = atualizaSaldoTotal(contas[contador_contas]);

	printf("Conta criada com sucesso!\n");
	printf("\n");
	printf("Dados da conta criada: \n");
	infoConta(contas[contador_contas]);
	contador_contas++;
	Sleep(5);
	menu();
}



void efetuarSaque(){
	if(contador_contas > 0){
		int numero;
		printf("Informe o número da conta: \n");
		fflush(stdout);
		scanf("%d", &numero);

		Conta conta = buscarContaPorNumero(numero);

		if(conta.numero == numero){
			float valor;
			printf("Informe o valor do saque: \n");
			fflush(stdout);
			scanf("%f", &valor);

			sacar(conta, valor);
		}else{
			printf("Não foi encontrada uma conta para saque.\n");
		}

	}else{
		printf("Ainda não existem contas para saque.\n");
	}
	Sleep(2);
	menu();
}


void efetuarDeposito(){
	if(contador_contas > 0){
		int numero;
		printf("Informe o número da conta: \n");
		fflush(stdout);
		scanf("%d", &numero);

		Conta conta = buscarContaPorNumero(numero);

		if(conta.numero == numero){
			float valor;
			printf("Informe o valor do depósito: \n");
			fflush(stdout);
			scanf("%f", &valor);

			depositar(conta, valor);
		}else{
			printf("Não foi encontrada uma conta para saque.\n");
		}

	}else{
		printf("Ainda não existem contas para deposito.\n");
	}
	Sleep(2);
	menu();
}


void efetuarTransferencia(){
	if(contador_contas > 0 ){
		int conta_origem, conta_destino;

		printf("Informe o número da sua conta: \n");
		fflush(stdout);
		scanf("%d", &conta_origem);

		Conta conta_o = buscarContaPorNumero(conta_origem);

		if(conta_o.numero == conta_origem){
			printf("Informe o número da conta de destino: \n");
			fflush(stdout);
			scanf("%d", &conta_destino);

			Conta conta_d = buscarContaPorNumero(conta_destino);

			if(conta_d.numero == conta_destino){
				float valor;
				printf("Informe o valor para Transferência: \n");
				fflush(stdout);
				scanf("%f", &valor);

				transferir(conta_o, conta_d, valor);

			}else{
				printf("A conta de destino com número %d não foi encontrada.\n", conta_destino);
			}

		}else{
			printf("A conta de origem com o número %d não foi encontrada. \n", conta_origem);
		}

	}else{
		printf("Ainda não exitem contas para transferências.\n");
	}
	Sleep(2);
	menu();
}


void listarContas(){
	if(contador_contas > 0){
		for(int i = 0; i < contador_contas; i++){
			infoConta(contas[i]);
			printf("\n");
			Sleep(2);
		}
	}else{
		printf("Não existem contas cadastradas ainda.\n");
	}

	Sleep(2);
	menu();
}

float atualizaSaldoTotal(Conta conta){
	return conta.saldo + conta.limite;
}

Conta buscarContaPorNumero(int numero){
	Conta c;
	if(contador_contas > 0){
		for(int i = 0; i < contador_contas; i++){
			if(contas[i].numero == numero){
				c = contas[i]; // retorna exatamente a conta especifica do numero passada no parametro
			}
		}
	}
	return c;
}


void sacar(Conta conta, float valor){
	if(valor > 0 && conta.saldoTotal >= valor){
		for(int i = 0; i < contador_contas; i++){
			if(contas[i].numero == conta.numero){
				if(contas[i].saldo >= valor){
					contas[i].saldo = contas[i].saldo - valor;
					contas[i].saldoTotal = atualizaSaldoTotal(contas[i]);
					printf("Saque efetuado com sucesso.\n");
					Sleep(2);
					menu();

				}{
					float restante = contas[i].saldo - valor; // 500 - 800
					contas[i].limite = contas[i].limite + restante;
					contas[i].saldo = 0.0;
					contas[i].saldoTotal = atualizaSaldoTotal(contas[i]);
					printf("Saque efetuado com sucesso!\n");
					Sleep(2);
					menu();
				}
			}
		}
	}else{
		printf("Saque não realizado. Tente novamente.\n");
		Sleep(2);
		menu();
	}
}


void depositar(Conta conta, float valor){
	if (valor > 0){
		for(int i = 0; i < contador_contas; i++){
			if(contas[i].numero == conta.numero){
				contas[i].saldo += valor;
				contas[i].saldoTotal = atualizaSaldoTotal(contas[i]);
				printf("Depósito efetuado com sucesso!\n");
				Sleep(2);
				menu();

			}
		}
	}else{
		printf("Erro ao efetuar depósito. Tente novamente.\n");
		Sleep(3);
		menu();
	}
}


void transferir(Conta conta_origem, Conta conta_destino, float valor){ // 10 // 20
	if(valor > 0 && conta_origem.saldoTotal >= valor){
		for(int co = 0; co < contador_contas; co++){
			if(contas[co].numero == conta_origem.numero){
				for(int cd = 0; cd < contador_contas; cd++){
					if(contas[cd].numero == conta_destino.numero){
						if(contas[co].saldo >= valor){
							contas[co].saldo = contas[co].saldo - valor;
							contas[cd]. saldo = contas[cd].saldo + valor;
							contas[co].saldoTotal = atualizaSaldoTotal(contas[co]);
							contas[cd].saldoTotal = atualizaSaldoTotal(contas[cd]);
							printf("Transferencia realizada com sucesso!\n");
							Sleep(2);
							menu();

						}else{
							float restante = contas[co].saldo - valor;
							contas[co].limite = contas[co].limite + restante;
							contas[co].saldo = 0.0;
							contas[cd].saldo = contas[cd].saldo + valor;
							contas[co].saldoTotal = atualizaSaldoTotal(contas[co]);
							contas[cd].saldoTotal = atualizaSaldoTotal(contas[cd]);
							printf("Transferencia realizada com sucesso!\n");
							Sleep(2);
							menu();

						}
					}
				}
			}
		}

	}else{
		printf("Transferencia não realizda. Tente novamente");
		Sleep(3);
		menu();
	}
}
