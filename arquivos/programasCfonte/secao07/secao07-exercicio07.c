//sua organização acaba de contratar um estagiario para trabalhar no suporte de Informatica, com a intenção
//de fazer um levantamento nas sucastas nesata area. A primeira trefa de e testar todod os cerca de 200 mouses
//que se encontram lá, testando e anotando o estado de cada um deles, para verificar o que se pode aproveitar deles.
//foi requisitado que você desenvolva um programa para resgistrar este levantamento. o programa deverá receber um numero
//indeterminado de entradas, cada uma contendo: um número de indentificação do mouse o tipo de defeito:
//- necessita de esfera; - necessita de limpeza - necessita de troca do cabo ou conector - quebrado ou inutilizado.
#include <stdio.h>

int main(){
	int contador_total = 0, contador_situacao1 = 0, contador_situacao2 = 0, contador_situacao3 = 0, contador_situacao4 = 0,
	    indentificacao, defeito;
	printf("informe a indentificação");
	fflush(stdout);
	scanf("%d", &indentificacao);
	while(indentificacao != 0){
		printf("1 - necessita de esfera. \n");
		printf("2 - necessita de limpeza; \n");
		printf("3 - necessita de troca do cabo ou conector. \n");
		printf("4 - quebrado ou inutilizavel. \n");
		printf("informe o tipo de defeito: \n");
		fflush(stdout);
		scanf("%d", &defeito);

		if(defeito == 1){
			contador_situacao1 = contador_situacao1 + 1; // contador sua difinição e pra contar quantas vezes algo aconteceu. e utilizado quando tem estruturas não determinadas quantas vezes vai acontecer algo.
		}
		if(defeito == 2) {
			contador_situacao2 = contador_situacao2 + 1;
		}
		if(defeito == 3) {
			contador_situacao3 = contador_situacao3 + 1;
		}
		if(defeito == 4) {
			contador_situacao4 = contador_situacao4 + 1;
		}
		contador_total = contador_total +1;
		printf("informe a indentificação");
		fflush(stdout);
		scanf("%d", &indentificacao);
	}
	float p1, p2, p3, p4;// porcentuais / (float) cast. conversao de int -> float.
	p1 = ((float)contador_situacao1 / (float)contador_total * 100.0); // 50 / 100 * 100 = 50.
	p2 = ((float)contador_situacao2 / (float)contador_total * 100.0);
	p3 = ((float)contador_situacao3 / (float)contador_total * 100.0);
	p4 = ((float)contador_situacao4 / (float)contador_total * 100.0);



	printf("quantidade de Mouses %d\n\n", contador_total);
	printf("situação \t\t\tquantidade \tpercentual\n");
	printf("1-necessita de esfera \t\t\t%d \t%.2f%%\n", contador_situacao1,p1);
	printf("2-necessita de limpeza \t\t\t%d \t%.2f%%\n", contador_situacao2, p2);
	printf("3-necessita troca do cabo ou conector \t%d \t%.2f%%\n", contador_situacao4, p3);
	printf("4-quebrado ou inutilizavel \t\t%d \t%.2f%%\n", contador_situacao4, p4);
}




