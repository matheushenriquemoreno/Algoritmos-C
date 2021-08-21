#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int dificuldade;
	int valor1;
	int valor2;
	int operacao;
	int resultado;
} Calcular;

void jogar();
void mostarInfo(Calcular calc); // calc variavel da struct
int somar(int resposta, Calcular calc);
int diminuir(int resposta, Calcular calc);
int multiplicar(int resposta, Calcular calc);
int pontos = 0;

int main(){
	// Deve ser chamado apenas 1 vez.
	// srand = aleatoria time = tempo padr�o do computador NULL = sem especifica��o de intervalo.
	srand(time(NULL));

	jogar();

	return 0;
}

void jogar(){
	Calcular jogo;
	printf("informe o n�vel de dificuldade desejado [1, 2, 3,] ou 0 para aleatorio:\n");
	fflush(stdout);
	scanf("%d", &jogo.dificuldade);
	if(jogo.dificuldade == 0){
		jogo.dificuldade = rand () % 6;
	}

	// Gera um int rand�mico entre 0 e 2
	// 0 = somar 1 = diminuir 2 = multiplicar
	jogo.operacao = rand() % 3;

	if(jogo.dificuldade == 1){
		jogo.valor1 = rand() % 11;// 0 a 10
		jogo.valor2 = rand() % 11;
	}else if(jogo.dificuldade == 2){
		jogo.valor1 = rand() % 101; // 0 a 100
		jogo.valor2 = rand() % 101;
	}else if(jogo.dificuldade == 3){
		jogo.valor1 = rand () % 1001; // 0 a 1000
		jogo.valor2 = rand () % 1001;
	}else if(jogo.dificuldade == 4){
		jogo.valor1 = rand () % 10001;
		jogo.valor2 = rand () % 10001;
	}else{
		jogo.valor1 = rand () % 10000001;
		jogo.valor2 = rand () % 10000001;
	}

	int resposta;
	printf("informe o resultado para a seguinte opera��o: \n");

	if(jogo.operacao == 0){
		printf("%d + %d\n", jogo.valor1, jogo.valor2);
		fflush(stdout);
		scanf("%d", &resposta);
		if(somar(resposta, jogo)){
			pontos+=1;
			printf("Voc� tem %d pontos\n", pontos);
		}
	}else if(jogo.operacao == 1){
		printf("%d - %d\n", jogo.valor1, jogo.valor2);
		fflush(stdout);
		scanf("%d", &resposta);
		if(diminuir(resposta, jogo)){
			pontos += 1;
			printf("Voc� tem %d pontos\n", pontos);

		}
	}else if(jogo.operacao == 2){
		printf("%d * %d\n", jogo.valor1, jogo.valor2);
		fflush(stdout);
		scanf("%d", &resposta);
		if(multiplicar(resposta, jogo)){
			pontos += 1;
			printf("Voc� tem %d pontos\n", pontos);
		}
	}else{
		printf("A opera��o %d n�o e conhecida.\n", jogo.operacao);
	}
	// recomecar o jogo
	printf("Deseja continuar jogando? [1 - sim, 0 - n�o]\n");
	int continuar;
	fflush(stdout);
	scanf("%d", &continuar);
	if(continuar){
		jogar();
	}else{
		printf("Voc� finalizou com %d pontos\nAt� a Pr�xima", pontos);
		exit(0);
	}
}

int somar(int resposta, Calcular calc){
	 calc.resultado =  calc.valor1 + calc.valor2;
	 int certo = 0; // 0 = errou, 1 == acertou

	 if(resposta == calc.resultado){
		 printf("Resposta correta!\n");
		 certo=1;
	 }else{
		 printf("Resposta errada!\n");
	 }
	 printf("%d + %d = %d\n", calc.valor1, calc.valor2, calc.resultado);
	 return certo;
}

int diminuir(int resposta, Calcular calc){
	 calc.resultado =  calc.valor1 - calc.valor2;
	 int certo = 0; // 0 = errou, 1 == acertou

	 if(resposta == calc.resultado){
		 printf("Resposta correta!\n");
		 certo=1;
	 }else{
		 printf("Resposta errada!\n");
	 }
	 printf("%d - %d = %d\n", calc.valor1, calc.valor2, calc.resultado);
	 return certo;

}

int multiplicar(int resposta, Calcular calc){
	 calc.resultado =  calc.valor1 * calc.valor2;
	 int certo = 0; // 0 = errou, 1 == acertou

	 if(resposta == calc.resultado){
		 printf("Resposta correta!\n");
		 certo=1;
	 }else{
		 printf("Resposta errada!\n");
	 }
	 printf("%d * %d = %d\n", calc.valor1, calc.valor2, calc.resultado);
	 return certo;
}
