//joão da silva, pescador, comprou um microcomputador para controlar o rendimento de seu trabalho.
//toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de são paulo
//(50 quilos) deve pagar uma multa de R$ 4,00, por quilo exedente. jão precisa que você faça um algoritmo que leia
//a variável 'p' (peso de peixes) e verifique se há execesso. Se ouver, gravar na variável 'e' (exesso)
// e na variavel 'm' o valor da multa que jão deverá pagar. caso contrario mostrar tais variáveis com o conteudo 'zero'
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
