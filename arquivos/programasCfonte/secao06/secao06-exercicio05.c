//jo�o da silva, pescador, comprou um microcomputador para controlar o rendimento de seu trabalho.
//toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de s�o paulo
//(50 quilos) deve pagar uma multa de R$ 4,00, por quilo exedente. j�o precisa que voc� fa�a um algoritmo que leia
//a vari�vel 'p' (peso de peixes) e verifique se h� execesso. Se ouver, gravar na vari�vel 'e' (exesso)
// e na variavel 'm' o valor da multa que j�o dever� pagar. caso contrario mostrar tais vari�veis com o conteudo 'zero'
#include <stdio.h>

int main(){
	// variaveis
	float p, m;
	char e[8] = "excesso"; // '\0'

	// entradas
	printf("informe o peso dos peixex: ");
	fflush(stdout);
	scanf("%f", &p);

	if(p > 50) {
	m = (p - 50) * 4.00;
	printf(" voce devera pagar R$ %.2f em multas.", m);
	}else{
		m = 0;
		e[0] = 0;
		printf("multas: %2.f\n",m);
		printf("Exesso: %d", e[0]);
	}
}
